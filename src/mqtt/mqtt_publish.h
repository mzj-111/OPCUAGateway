#include <open62541/server.h>

int publishTempSensorData(int argc, char **argv, UA_Server *server, char* topic, UA_NodeId *publishedNodeId);
int getChildId(UA_Server *server, UA_NodeId parentNode, const int relativePathCnt, const UA_QualifiedName targetNameArr[], UA_NodeId *result);