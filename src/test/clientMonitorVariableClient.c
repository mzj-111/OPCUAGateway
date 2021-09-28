#include <stdlib.h>
#include <signal.h>
#include "open62541.h"


UA_Boolean running = true;


void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

static void 
handler_DataChanged(UA_Client *client, 
                    UA_UInt32 subId, void *subContext, 
                    UA_UInt32 monId, void *monContext, 
                    UA_DataValue *value){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_CLIENT, "Received Notification");
    UA_NodeId *ptr = (UA_NodeId*)monContext;
    UA_NodeId targetNodeId = UA_NODEID_STRING(1, "the.answer");
    if(UA_NodeId_equal(ptr, &targetNodeId)){
        UA_Int32 currentValue = *(UA_Int32*)(value->value.data);
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_CLIENT, "SubId:%d, MonId:%u, Current Value: %d\n", subId, monId, currentValue);
    }
}

void addMonitoredItemToVariable(UA_Client *client, UA_NodeId *target){
    // 创建订阅
    UA_CreateSubscriptionRequest request = UA_CreateSubscriptionRequest_default();
    UA_CreateSubscriptionResponse response = UA_Client_Subscriptions_create(client, request, NULL, NULL, NULL);

    UA_UInt32 subId = response.subscriptionId;
    if(response.responseHeader.serviceResult == UA_STATUSCODE_GOOD){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_CLIENT, "Create subscription succeeded, id %u\n", subId);
    }

    UA_MonitoredItemCreateRequest monRequest = UA_MonitoredItemCreateRequest_default(*target);

    UA_MonitoredItemCreateResult monResponse = UA_Client_MonitoredItems_createDataChange(client, response.subscriptionId, 
                                                                                         UA_TIMESTAMPSTORETURN_BOTH, 
                                                                                         monRequest,(void*)target, 
                                                                                         handler_DataChanged, NULL);
    if(monResponse.statusCode == UA_STATUSCODE_GOOD){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_CLIENT, "Monitoring 'the.answer', id %u\n", monResponse.monitoredItemId);
    }
}

int main(void){
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);


    UA_Client *client = UA_Client_new();
    UA_ClientConfig_setDefault(UA_Client_getConfig(client));
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) 
    {
        UA_Client_delete(client);
        return (int)retval;
    }

    UA_NodeId targetNodeId = UA_NODEID_STRING(1, "the.answer");
    addMonitoredItemToVariable(client, &targetNodeId);

    while(running)
    {
        // send publish request, time out 1000ms
        UA_Client_run_iterate(client, 1000); 
    }

    UA_Client_delete(client); /* Disconnects the client internally */
    
    return EXIT_SUCCESS;
}

