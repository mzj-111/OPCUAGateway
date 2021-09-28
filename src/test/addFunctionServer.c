#include <signal.h>
#include <stdlib.h>

#include "open62541.h"

UA_Boolean running = true;

static void stopHandler(int sign) 
{
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

// 该方法的功能是当输入一个字符串xxx，就回复 "hello xxx"
// input 是指向输入参数数组的指针，inputSize是输入参数数组中元素的个数。
// oucua server中方法的回调函数，其参数列表必须和本函数一样
static UA_StatusCode helloWorldMethodCallback(UA_Server *server, 
                                              const UA_NodeId *sessionId,  void *sessionHandle,
                                              const UA_NodeId *methodId, void *methContext,
                                              const UA_NodeId *objectId, void *objectContext,
                                              size_t inputSize, const UA_Variant *input,
                                              size_t outputSize, UA_Variant *output){
    UA_String *inputStr = (UA_String*)input->data;
    UA_String tmp = UA_STRING_ALLOC("Hello ");
    if(inputStr->length > 0) {
        tmp.data = (UA_Byte *)UA_realloc(tmp.data, tmp.length + inputStr->length);
        memcpy(&tmp.data[tmp.length], inputStr->data, inputStr->length);
        tmp.length += inputStr->length;
    }
    // 注意这里用的setScalarCop y
    UA_Variant_setScalarCopy(output, &tmp, &UA_TYPES[UA_TYPES_STRING]);
    UA_String_clear(&tmp);
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Hello World was called");
    return UA_STATUSCODE_GOOD;
}



static void addHelloWorldMethod(UA_Server *server){
    // 定义了一个输入参数对象和一个输出参数对象，并设置了其名字、数据类型和取值范围等
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US:", "A String");
    inputArgument.name = UA_STRING("MyInput");
    inputArgument.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    inputArgument.valueRank = UA_VALUERANK_SCALAR;

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A String");
    outputArgument.name = UA_STRING("MyOutput");
    outputArgument.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    outputArgument.valueRank = UA_VALUERANK_SCALAR;

    // 定义HelloWorld方法的属性，例如设置其显示名称为“Hello World”以及是否可执行等
    UA_MethodAttributes helloAttr = UA_MethodAttributes_default;
    helloAttr.description = UA_LOCALIZEDTEXT("en-US", "Say");
    helloAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Hello World");
    helloAttr.executable = true;
    helloAttr.userExecutable = true;
    // helloWorld 方法添加到Objects目录下，他与Objects目录的关系是HasOrderedComponent
    UA_Server_addMethodNode(server, UA_NODEID_NUMERIC(1,62541),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASORDEREDCOMPONENT),
                            UA_QUALIFIEDNAME(1, "hello world"),
                            helloAttr, &helloWorldMethodCallback,
                            1, &inputArgument, 1, &outputArgument, NULL, NULL);
}

int main(void){
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    addHelloWorldMethod(server);

    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}