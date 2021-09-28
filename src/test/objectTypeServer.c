// 在objectServer.c中，并没有用到oop思想。在本例子中，直接使用类型去生成对象。

#include <signal.h>
#include <stdlib.h>
#include "open62541.h"

UA_Boolean running = true;

static void
stopHandler(int sign){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "recived ctrl-c");
    running = false;
}

UA_NodeId studentTypeId = {1, UA_NODEIDTYPE_NUMERIC, {1001}};

static void
defineObjectType(UA_Server *server){
    // **注意**，在objectServer.c中，添加的是对象节点,而通过类型直接生成对象，所以要先添加对象类型节点
    UA_ObjectTypeAttributes stuAttr = UA_ObjectTypeAttributes_default;
    stuAttr.displayName = UA_LOCALIZEDTEXT("en-US", "StudentType");
    UA_Server_addObjectTypeNode(server, studentTypeId, 
                                UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE), 
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                UA_QUALIFIEDNAME(1, "StudentType"), stuAttr, NULL, NULL);
    
    // 添加姓名
    UA_VariableAttributes nameAttr = UA_VariableAttributes_default;
    UA_String studentName = UA_STRING("UnKnown");
    UA_Variant_setScalar(&nameAttr.value, &studentName, &UA_TYPES[UA_TYPES_STRING]);
    nameAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Name");
    nameAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE;
    UA_NodeId nameId;
    // 添加姓名到student类型节点中
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentTypeId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Name"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), nameAttr, NULL, &nameId);
    // 使得姓名必须被初始化, make the student name mandatory
    UA_Server_addReference(server, nameId,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
                            UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    // 添加性别
    UA_VariableAttributes genderAttr = UA_VariableAttributes_default;
    UA_String gender = UA_STRING("Unknown");
    UA_Variant_setScalar(&genderAttr.value, &gender, &UA_TYPES[UA_TYPES_STRING]); // 初始化为Unknown，后续再修改
    genderAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Gender");
    genderAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE; // default是只读，添加写权限
    UA_NodeId genderId;
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentTypeId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Gender"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), genderAttr, NULL, &genderId);
    /* Make the student gender mandatory */
    UA_Server_addReference(server, genderId,
                           UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
                           UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    // 添加年龄
    UA_VariableAttributes ageAttr = UA_VariableAttributes_default;
    UA_Byte age = 0;
    UA_Variant_setScalar(&ageAttr.value, &age, &UA_TYPES[UA_TYPES_BYTE]); // 初始化为0，后续再修改
    ageAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Age");
    ageAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE; // default是只读，添加写权限
    ageAttr.valueRank = UA_VALUERANK_SCALAR;
    UA_NodeId ageId;
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentTypeId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Age"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), ageAttr, NULL, &ageId);
    /* Make the student age mandatory */ 
    UA_Server_addReference(server, ageId,
                           UA_NODEID_NUMERIC(0, UA_NS0ID_HASMODELLINGRULE),
                           UA_EXPANDEDNODEID_NUMERIC(0, UA_NS0ID_MODELLINGRULE_MANDATORY), true);

    // 身高和体重都不需要设置为mandato，在添加节点的时候，不需要输出节点ID
    // 添加身高
    UA_VariableAttributes heightAttr = UA_VariableAttributes_default;
    UA_UInt16 height = 0;
    UA_Variant_setScalar(&heightAttr.value, &height, &UA_TYPES[UA_TYPES_UINT16]); // 初始化为0，后续再修改
    heightAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Height (cm)");
    heightAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE; // default是只读，添加写权限
    heightAttr.valueRank = UA_VALUERANK_SCALAR;
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentTypeId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Height (cm)"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), heightAttr, NULL, NULL);
    // 添加体重
    UA_VariableAttributes weightAttr = UA_VariableAttributes_default;
    UA_UInt16 weight = 0;
    UA_Variant_setScalar(&weightAttr.value, &weight, &UA_TYPES[UA_TYPES_UINT16]); // 初始化为0，后续再修改
    weightAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Weight (kg)");
    weightAttr.accessLevel |= UA_ACCESSLEVELMASK_WRITE; // default是只读，添加写权限
    weightAttr.valueRank = UA_VALUERANK_SCALAR;
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentTypeId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Weight (kg)"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), weightAttr, NULL, NULL);
}

static int getChildIdSimplified(UA_Server *server, UA_NodeId parentNode, const int relativePathCnt,
                                const UA_QualifiedName targetNamrArr[], UA_NodeId *result){
    int ret = 0;

    UA_BrowsePathResult bpr = UA_Server_browseSimplifiedBrowsePath(server, parentNode, relativePathCnt, targetNamrArr);

    if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1){
        printf("error:%s\n", UA_StatusCode_name(bpr.statusCode));
        ret = -1;
    }else{
        UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, result);
    }

    UA_BrowsePathResult_deleteMembers(&bpr);

    return ret;
}

struct stuInitInfo{
    UA_String name;
    UA_String gender;
    UA_Byte age;
};

static void
createStudentObjectInstance(UA_Server *server, char *name, struct stuInitInfo *info){
    UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", name);

    // retId, getChildIdSimplified()中的parentNodeId
    UA_NodeId retId;
    UA_Server_addObjectNode(server, UA_NODEID_NULL, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), UA_QUALIFIEDNAME(1, name),
                            studentTypeId, oAttr, NULL, &retId);

    UA_NodeId itemId;
    UA_Variant value;
    UA_QualifiedName targetNameArr[1];

    targetNameArr[0] = UA_QUALIFIEDNAME(1, "Name");
    // 使用getChildSimplified()来获取姓名，性别和年龄的NodeId.复制到itemId中
    if(getChildIdSimplified(server, retId, 1, targetNameArr, &itemId) == 0){
        UA_Variant_init(&value);
        UA_Variant_setScalar(&value, &info -> name, &UA_TYPES[UA_TYPES_STRING]);
        UA_Server_writeValue(server, itemId, value);
    }
    targetNameArr[0] = UA_QUALIFIEDNAME(1, "Gender");
    if (getChildIdSimplified(server, retId, 1, targetNameArr, &itemId) == 0)
    {
        UA_Variant_init(&value);
        UA_Variant_setScalar(&value, &info->gender, &UA_TYPES[UA_TYPES_STRING]);
    	UA_Server_writeValue(server, itemId, value);
    }


    targetNameArr[0] = UA_QUALIFIEDNAME(1, "Age");
    if (getChildIdSimplified(server, retId, 1, targetNameArr, &itemId) == 0)
    {
        UA_Variant_init(&value);
        UA_Variant_setScalar(&value, &info->age, &UA_TYPES[UA_TYPES_BYTE]);
    	UA_Server_writeValue(server, itemId, value);
    }
}

int main(){
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    defineObjectType(server);
    
    struct stuInitInfo initInfo = {};

    initInfo.name = UA_STRING("Xiao Ming");
    initInfo.gender = UA_STRING("Male");
    initInfo.age = 20;
    createStudentObjectInstance(server, "Xiao Ming", &initInfo);

    initInfo.name = UA_STRING("Xiao Hong");
    initInfo.gender = UA_STRING("Female");
    initInfo.age = 22;
    createStudentObjectInstance(server, "Xiao Hong", &initInfo);

    initInfo.name = UA_STRING("Zhang San");
    initInfo.gender = UA_STRING("Male");
    initInfo.age = 18;
    createStudentObjectInstance(server, "Zhang San", &initInfo);

    UA_StatusCode retval = UA_Server_run(server, &running);
    
    UA_Server_delete(server);
    
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}