// 本例子，添加对象节点，对象节点中含有各种节点，以添加学生对象为例。

#include <signal.h>
#include <stdlib.h>

#include "open62541.h"

UA_Boolean running = true;

static void
stopHandler(int sign){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

static void manuallyDefineStudent(UA_Server *server){
    UA_NodeId studentId;
    UA_ObjectAttributes stuAttr = UA_ObjectAttributes_default;
    stuAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Student(manual)");
    UA_Server_addObjectNode(server, UA_NODEID_NULL, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), 
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), UA_QUALIFIEDNAME(1, "Student (Manual)"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE), stuAttr, NULL, &studentId);
    // 添加姓名
    UA_VariableAttributes nameAttr = UA_VariableAttributes_default;
    UA_String studentName = UA_STRING("Xiao Ming");
    UA_Variant_setScalar(&nameAttr.value, &studentName, &UA_TYPES[UA_TYPES_STRING]);
    nameAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Name");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "StudentName"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), nameAttr, NULL, NULL);
                            
    // 添加性别
    UA_VariableAttributes genderAttr = UA_VariableAttributes_default;
    UA_String gender = UA_STRING("Male");
    UA_Variant_setScalar(&genderAttr.value, &gender, &UA_TYPES[UA_TYPES_STRING]);
    genderAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Gender");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Gender"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), genderAttr, NULL, NULL);
    
    //添加年龄
    UA_VariableAttributes ageAttr = UA_VariableAttributes_default;
    UA_Byte age = 16;
    UA_Variant_setScalar(&ageAttr.value, &age, &UA_TYPES[UA_TYPES_BYTE]);
    ageAttr.displayName =  UA_LOCALIZEDTEXT("en-US", "Age");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Age"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), ageAttr, NULL, NULL);

    // 添加身高
    UA_VariableAttributes heightAttr = UA_VariableAttributes_default;
    UA_UInt16 height = 170;
    UA_Variant_setScalar(&heightAttr.value, &height, &UA_TYPES[UA_TYPES_UINT16]);
    heightAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Height");
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Height (cm)"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), heightAttr, NULL, NULL);


    // 添加体重
    UA_VariableAttributes weightAttr = UA_VariableAttributes_default;
    UA_UInt32 weight = 60;
    UA_Variant_setScalar(&weightAttr.value, &weight, &UA_TYPES[UA_TYPES_UINT16]);
    UA_Server_addVariableNode(server, UA_NODEID_NULL, studentId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Weight (kg)"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), weightAttr, NULL, NULL);
}

int main(void){
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    manuallyDefineStudent(server);

    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}