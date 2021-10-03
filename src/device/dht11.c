/*
dht11传感器添加对象类型和添加对象实例的方法
*/


#include "readDht11Data.h"
#include "open62541.h"
#include "dht11.h"

UA_NodeId dht11TypeId = {1, UA_NODEIDTYPE_NUMERIC, {1001}};

// 数据源节点TMP和RH的读写方法
UA_StatusCode readTmp(UA_Server *server,
                          const UA_NodeId *sessionId, void *sessionContext,
                          const UA_NodeId *nodeId, void *nodexContext,
                          UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                          UA_DataValue *dataValue){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "read tmp from database");
    UA_Float tmp;
    readTmpData(&tmp);
    printf("read tmp data success");
    printf("tmp : %f\n", tmp);
    int res = UA_Variant_setScalarCopy(&dataValue->value, &tmp, &UA_TYPES[UA_TYPES_FLOAT]);
    if(!res){
        printf("faliure");
    }
    dataValue->hasValue = true;
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode readRh(UA_Server *server,
                          const UA_NodeId *sessionId, void *sessionContext,
                          const UA_NodeId *nodeId, void *nodexContext,
                          UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                          UA_DataValue *dataValue){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "read rh from database");
    UA_Float rh;
    readRhData(&rh);
    UA_Variant_setScalarCopy(&dataValue->value, &rh, &UA_TYPES[UA_TYPES_FLOAT]);
    dataValue->hasValue = true;
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode writeTmp(UA_Server *server,
                 const UA_NodeId *sessionId, void *sessionContext,
                 const UA_NodeId *nodeId, void *nodeContext,
                 const UA_NumericRange *range, const UA_DataValue *data) 
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "Changing the tmp is not implemented");
    return UA_STATUSCODE_BADINTERNALERROR;
}

UA_StatusCode writeRh(UA_Server *server,
                 const UA_NodeId *sessionId, void *sessionContext,
                 const UA_NodeId *nodeId, void *nodeContext,
                 const UA_NumericRange *range, const UA_DataValue *data) 
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "Changing the rh is not implemented");
    return UA_STATUSCODE_BADINTERNALERROR;
}



void DefineDht11Object(UA_Server *server){
    UA_NodeId dht11Id;
    UA_ObjectTypeAttributes dht11Attr = UA_ObjectTypeAttributes_default;
    dht11Attr.displayName = UA_LOCALIZEDTEXT("en-US", "dht11 sensor");
    UA_Server_addObjectTypeNode(server, dht11TypeId, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE), 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE), 
                            UA_QUALIFIEDNAME(1, "Dht11Type"), dht11Attr,
                            NULL, NULL);
    
    // 添加tmp节点 

    // 传统方式
    // UA_VariableAttributes tmpAttr = UA_VariableAttributes_default;
    // UA_Int16 dht11Tmp = 0; // 初始化为0
    // UA_Variant_setScalar(&tmpAttr.value, &dht11Tmp, &UA_TYPES[UA_TYPES_FLOAT]);
    // tmpAttr.displayName = UA_LOCALIZEDTEXT("en-US", "temperature");
    // tmpAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE;
    // UA_NodeId tmpId; 
    // UA_Server_addVariableNode(server, UA_NODEID_NULL, dht11TypeId, 
    //                           UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
    //                           UA_QUALIFIEDNAME(1, "Temperature"),
    //                           UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
    //                           tmpAttr, NULL, &tmpId);
    // UA_Server_addReference(server, tmpId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
    //                        UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    // 添加TMP数据源节点
    UA_VariableAttributes tmpDataSourceAttr = UA_VariableAttributes_default;
    tmpDataSourceAttr.displayName = UA_LOCALIZEDTEXT("en-US", "TMP - data source");
    tmpDataSourceAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId tmpNodeId = UA_NODEID_STRING(1, "tmp-datasource");
    UA_QualifiedName tmpName = UA_QUALIFIEDNAME(1, "tmp-datasource");
    UA_NodeId tmpParentNodeId = dht11TypeId;
    UA_NodeId tmpParentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    UA_NodeId variableTypeNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE);

    UA_DataSource tmpDataSource;
    tmpDataSource.read = readTmp;
    tmpDataSource.write = writeTmp;
    UA_NodeId tmpId; 
    UA_Server_addDataSourceVariableNode(server, tmpNodeId, tmpParentNodeId,
                                        tmpParentReferenceNodeId, tmpName,
                                        variableTypeNodeId, tmpDataSourceAttr,
                                        tmpDataSource, NULL, &tmpId);
    UA_Server_addReference(server, tmpId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
                           UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);


    // 添加rh

    // 传统方式
    // UA_VariableAttributes rhAttr = UA_VariableAttributes_default;
    // UA_Int16 dht11Rh = 0; // 初始化为0
    // UA_Variant_setScalar(&rhAttr.value, &dht11Rh, &UA_TYPES[UA_TYPES_FLOAT]);
    // rhAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Humidity");
    // rhAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE;
    // UA_NodeId rhId; 
    // UA_Server_addVariableNode(server, UA_NODEID_NULL, dht11TypeId, 
    //                           UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
    //                           UA_QUALIFIEDNAME(1, "Humidity"),
    //                           UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
    //                           rhAttr, NULL, &rhId);
    // UA_Server_addReference(server, rhId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
    //                        UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    // 添加RH数据源节点
    UA_VariableAttributes rhDataSourceAttr = UA_VariableAttributes_default;
    rhDataSourceAttr.displayName = UA_LOCALIZEDTEXT("en-US", "RH - data source");
    rhDataSourceAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId rhNodeId = UA_NODEID_STRING(1, "rh-datasource");
    UA_QualifiedName rhName = UA_QUALIFIEDNAME(1, "rh-datasource");
    UA_NodeId rhParentNodeId = dht11TypeId;
    UA_NodeId rhParentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    // UA_NodeId variableTypeNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE);

    UA_DataSource rhDataSource;
    rhDataSource.read = readRh;
    rhDataSource.write = writeRh;
    UA_NodeId rhId; 
    UA_Server_addDataSourceVariableNode(server, rhNodeId, rhParentNodeId,
                                        rhParentReferenceNodeId, rhName,
                                        variableTypeNodeId, rhDataSourceAttr,
                                        rhDataSource, NULL, &rhId);
    UA_Server_addReference(server, rhId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
                           UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

}

int getChildIdSimplified(UA_Server *server, 
                        UA_NodeId parentNode, 
                        const int relativePathCnt, 
                        const UA_QualifiedName targetNameArr[], 
                        UA_NodeId *result) 
{
    int ret = 0;

    UA_BrowsePathResult bpr = UA_Server_browseSimplifiedBrowsePath(server, 
                parentNode, relativePathCnt, targetNameArr);

    if (bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1)
    {
        printf("error: %s\n", UA_StatusCode_name(bpr.statusCode));
        ret = -1;
    }
    else
    {
        UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, result);
    }

    
    UA_BrowsePathResult_deleteMembers(&bpr);

    return ret;
}


void createDht11ObjectInstance(UA_Server *server, struct dht11InitInfo *info){
    UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "dht11 Instance");

    UA_NodeId retId;
    UA_Server_addObjectNode(server, UA_NODEID_NULL, 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                            UA_QUALIFIEDNAME(1, "dht11 Instance"),
                            dht11TypeId, oAttr, NULL, &retId);

    UA_NodeId itemId;
    UA_Variant value;
    
    UA_QualifiedName targetNameArr[1];

    // 获取之前添加节点时设定的qualifiedname
    targetNameArr[0] = UA_QUALIFIEDNAME(1, "tmp-datasource");   
    if (getChildIdSimplified(server, retId, 1, targetNameArr, &itemId) == 0)
    {
        UA_Variant_init(&value);
        UA_Variant_setScalar(&value, &info->tmp, &UA_TYPES[UA_TYPES_FLOAT]);
    	UA_Server_writeValue(server, itemId, value);
    }

    targetNameArr[0] = UA_QUALIFIEDNAME(1, "rh-datasource");   
    if (getChildIdSimplified(server, retId, 1, targetNameArr, &itemId) == 0)
    {
        UA_Variant_init(&value);
        UA_Variant_setScalar(&value, &info->rh, &UA_TYPES[UA_TYPES_FLOAT]);
    	UA_Server_writeValue(server, itemId, value);
    }

}


