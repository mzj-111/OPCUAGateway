// 和服务器监控变量变化不同，在客户端监控变量变化时，服务器只需要加入变量。并保证变量会更新数值即可。
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#include "open62541.h"

UA_Boolean running = true;

void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}


typedef struct container {
	UA_Server * ptr1;
	UA_NodeId * ptr2;
} container_t;

UA_NodeId addTheAnswerVariable(UA_Server *server) 
{
    /* Define the attribute of the myInteger variable node */
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    UA_Int32 myInteger = 1;
    UA_Variant_setScalar(&attr.value, &myInteger, &UA_TYPES[UA_TYPES_INT32]);
    attr.description = UA_LOCALIZEDTEXT("en-US","the answer");
    attr.displayName = UA_LOCALIZEDTEXT("en-US","the answer");
    attr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    /* Add the variable node to the information model */
    UA_NodeId theAnswerNodeId = UA_NODEID_STRING(1, "the.answer");
    UA_QualifiedName myIntegerName = UA_QUALIFIEDNAME(1, "the answer");
    UA_NodeId parentNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, theAnswerNodeId, parentNodeId,
                              parentReferenceNodeId, myIntegerName,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL, NULL);
    
    return theAnswerNodeId;
}

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

int main(void) 
{    
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    
    UA_NodeId targetNodeId = addTheAnswerVariable(server);
    
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
