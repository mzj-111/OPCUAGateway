#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
struct dht11InitInfo{
    UA_Float tmp;
    UA_Float rh;
};



void DefineDht11Object(UA_Server *server);
UA_NodeId createDht11ObjectInstance(UA_Server *server, struct dht11InitInfo *info);

