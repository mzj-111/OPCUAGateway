#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#include "open62541.h"

UA_Boolean running = true;

void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "退出");
    running = false;
}

UA_UInt32 monid = 0;

typedef struct container{
    UA_Server *ptr1;
    UA_NodeId *ptr2;
}container_t;

// 添加一个变量，这个变量后面会被检测。
UA_NodeId addTheAnswerVariable(UA_Server *server){
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    UA_Int32 myInteger = 1; // 初始值为1
    UA_Variant_setScalar(&attr.value, &myInteger, &UA_TYPES[UA_TYPES_INT32]);
    attr.description = UA_LOCALIZEDTEXT("en-US", "the answer");
    attr.displayName = UA_LOCALIZEDTEXT("en-US", "the answer");
    attr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId theAnswerNodeId = UA_NODEID_STRING(1, "the.answer");
    UA_QualifiedName myIntegerName = UA_QUALIFIEDNAME(1, "the answer");
    UA_NodeId parentNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, theAnswerNodeId, parentNodeId, parentReferenceNodeId, myIntegerName,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL, NULL);
                        
    return theAnswerNodeId;
}

// 添加监测项，即监工

// 变量值发生改变时的回调函数。在server端检测变量的回调函数都得这么些
void dataChangeNotificationCallback(UA_Server *server, UA_UInt32 monitoredItemId, 
                                    void *monitoredItemContext, const UA_NodeId *nodeId,
                                    void *nodeContext, UA_UInt32 attributeId,
                                    const UA_DataValue *value){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Received Notification");

    UA_NodeId *targetNodeId = (UA_NodeId*) monitoredItemContext;

    if(monitoredItemId == monid && UA_NodeId_equal(nodeId, targetNodeId)){
        UA_Int32 currentValue = *(UA_Int32*)(value->value.data);
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Current Value: %d\n", currentValue);
    }
}

UA_UInt32 addMonitoredItemToVariable(UA_Server *server, UA_NodeId *pTargetNodeId){
    UA_MonitoredItemCreateResult result;
    UA_MonitoredItemCreateRequest monRequest = UA_MonitoredItemCreateRequest_default(*pTargetNodeId);//pTargetNodeId 是被检测的变量的id

    monRequest.requestedParameters.samplingInterval = 100.0; // 100 ms interval
    result = UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_BOTH, 
                                                     monRequest, (void*)pTargetNodeId, dataChangeNotificationCallback);
    
    if(result.statusCode == UA_STATUSCODE_GOOD){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Add monitored item for variable, OK.");
        return result.monitoredItemId;
    }else{
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Add monitored item for variable, Fail.");
        return -1;
    }
}

// 修改被检测变量的值
void *thr_fn(void *arg)
{
    static UA_Int32 update = 2;
    container_t *pContainer = (container_t*)arg;
    UA_Server *server = pContainer->ptr1;
    UA_NodeId *targetNodeId = pContainer->ptr2;
    
    while (1)
    {
        sleep(2);
        UA_Variant myVar;
        UA_Variant_init(&myVar);
        UA_Variant_setScalar(&myVar, &update, &UA_TYPES[UA_TYPES_INT32]);
        UA_Server_writeValue(server, *targetNodeId, myVar);
        
        update++;
        
        if (update == 100)
        {
            update = 2;
        }
    }

    
    return NULL;
}

int main(void){
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    
    UA_NodeId targetNodeId = addTheAnswerVariable(server);
	monid = addMonitoredItemToVariable(server, &targetNodeId);
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Monitored item id: %d\n", monid);
    
    container_t cont = {server, &targetNodeId};
    pthread_t tid;
    int err = pthread_create(&tid, NULL, thr_fn, &cont);
    if (err != 0)
    {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Create thread Fail.");
        return -1;
    }

    UA_StatusCode retval = UA_Server_run(server, &running);
    
    UA_Server_delete(server);
    
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}