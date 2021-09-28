#include "open62541.h"
struct dht11InitInfo{
    UA_Float tmp;
    UA_Float rh;
};



void DefineDht11Object(UA_Server *server);
void createDht11ObjectInstance(UA_Server *server, struct dht11InitInfo *info);

