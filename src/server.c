#include <signal.h>
#include <stdlib.h>
#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include "dht11.h"
#include "mqtt/mqtt_publish.h"


// extern struct dht11InitInfo;
struct dht11InitInfo initInfo = {};


UA_Boolean running = true;



static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(int argc, char **argv) 
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    
    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    
    DefineDht11Object(server);
    
    initInfo.tmp = 26.0;
    initInfo.rh = 0.0;   
    UA_NodeId nodeId = createDht11ObjectInstance(server, &initInfo);

    int res = publishTempSensorData(argc, argv, server, "TempAndHumiditySensor", &nodeId);
        if(res == -1){
            UA_LOG_WARNING(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Could not create a PubSubConnection");
            UA_Server_delete(server);
        } 

    UA_StatusCode retval = UA_Server_run(server, &running);
    
    UA_Server_delete(server);
    
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}