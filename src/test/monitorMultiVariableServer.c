// server.c

/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

#include "open62541.h"

UA_Boolean running = true;

void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

// 添加一个INT32的变量，并设置初始值
UA_NodeId addVariableToObjectsFolder(UA_Server *server, const char * name, 
                                    UA_NodeId nodeId, UA_Int32 initValue) 
{
    /* Define the attribute of the myInteger variable node */
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    UA_Int32 myInteger = initValue;
    UA_Variant_setScalar(&attr.value, &myInteger, &UA_TYPES[UA_TYPES_INT32]);
    attr.description = UA_LOCALIZEDTEXT("en-US", (char*)name);
    attr.displayName = UA_LOCALIZEDTEXT("en-US", (char*)name);
    attr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    /* Add the variable node to the information model */
    UA_QualifiedName myIntegerName = UA_QUALIFIEDNAME(1, (char*)name);
    UA_NodeId parentNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, nodeId, parentNodeId,
                              parentReferenceNodeId, myIntegerName,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL, NULL);
    
}

void dataChangeNotificationCallback(UA_Server *server, UA_UInt32 monitoredItemId,
                               void *monitoredItemContext, const UA_NodeId *nodeId,
                               void *nodeContext, UA_UInt32 attributeId,
                               const UA_DataValue *value) 
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Received Notification");
    
    UA_NodeId * targetNodeId = (UA_NodeId*)monitoredItemContext;
    
    // 检查nodeId是否相等
    if (UA_NodeId_equal(nodeId, targetNodeId))
    {
        // 检查数据类型是否是INT32
        if (value->value.type == &UA_TYPES[UA_TYPES_INT32])
        {
            UA_Int32 currentValue = *(UA_Int32*)(value->value.data);
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Current Value: %d\n", currentValue);
        }
    }
}

UA_UInt32 addMonitoredItemToVariable(UA_Server *server, UA_NodeId *pTargetNodeId) 
{
    UA_MonitoredItemCreateResult result;
    
    UA_MonitoredItemCreateRequest monRequest = UA_MonitoredItemCreateRequest_default(*pTargetNodeId);
    
    monRequest.requestedParameters.samplingInterval = 100.0; // 100 ms interval
    result = UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_BOTH,
                                            monRequest, (void*)pTargetNodeId, dataChangeNotificationCallback);
    
    if (result.statusCode == UA_STATUSCODE_GOOD)
    {
        
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Add monitored item for variable, OK.");
        return result.monitoredItemId;
    }
    else
    {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Add monitored item for variable, Fail.");
        return -1;
    }
}

static void updateValueCallback(UA_Server *server, void *data)
{
    UA_NodeId * ptr = (UA_NodeId *)data; // address of nodeIdArray in main()
    for (uint32_t i = 0; i < 5; ++i)
    {
        UA_Variant myVar;
        UA_Variant_init(&myVar);
        
        // read first
        UA_Server_readValue(server, ptr[i], &myVar);
        if (myVar.type == &UA_TYPES[UA_TYPES_INT32])
        {
            // new value is (old value + 2)
            UA_Int32 update = *(UA_Int32*)(myVar.data) + 2;
            
            UA_Variant_init(&myVar);
            UA_Variant_setScalar(&myVar, &update, &UA_TYPES[UA_TYPES_INT32]);
            UA_Server_writeValue(server, ptr[i], myVar);
        }
    }
}

int main(void) 
{    
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    
    UA_NodeId nodeIdArray[5] = {};
    
    
    for (uint32_t i = 0; i < 5; ++i)
    {
        char varName[20];
        
        nodeIdArray[i] = UA_NODEID_NUMERIC(1, 8000+i);
        
        snprintf(varName, 20, "answer%d", i);
        UA_Int32 initValue = i*100+1;
        addVariableToObjectsFolder(server, varName, nodeIdArray[i], initValue);
        
        UA_UInt32 monid = addMonitoredItemToVariable(server, &nodeIdArray[i]);
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, 
                    "Monitored item id: %d, var id: %d, init value: %d\n", 
                        monid, 8000+i, initValue);
    }
        
    // call updateValueCallback() every 2s
    UA_UInt64 callbackId = 0;
    UA_Server_addRepeatedCallback(server, updateValueCallback, &nodeIdArray[0], 2000, &callbackId);

    UA_StatusCode retval = UA_Server_run(server, &running);
    
    UA_Server_delete(server);
    
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}



