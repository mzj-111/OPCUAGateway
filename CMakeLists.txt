cmake_minimum_required(VERSION 3.5)

project(OPC_UA_GATEWAY)
 
set (EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

add_definitions(-std=c99)

include_directories(${PROJECT_SOURCE_DIR}/open62541)
include_directories(${PROJECT_SOURCE_DIR}/src/database)
include_directories(${PROJECT_SOURCE_DIR}/src/device)
include_directories(mariadb)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/src_generated)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/plugins)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/plugins/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/arch)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/deps)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/src/pubsub)

find_library(OPEN62541_LIB libopen62541.a HINTS ${PROJECT_SOURCE_DIR}/open62541)

add_executable(server ${PROJECT_SOURCE_DIR}/src/server.c 
${PROJECT_SOURCE_DIR}/open62541/open62541.c 
${PROJECT_SOURCE_DIR}/src/database/readDht11Data.c
${PROJECT_SOURCE_DIR}/src/device/dht11.c)
target_link_libraries(server mariadb)

add_executable(mqtt_pub ${PROJECT_SOURCE_DIR}/src/mqtt/tutorial_pubsub_mqtt_publish.c)
target_link_libraries(mqtt_pub ${OPEN62541_LIB} pthread)

# add_executable(server ${PROJECT_SOURCE_DIR}/src/server.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# add_executable(client ${PROJECT_SOURCE_DIR}/src/client.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# add_executable(objectServer ${PROJECT_SOURCE_DIR}/src/objectServer.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# add_executable(addMethodServer ${PROJECT_SOURCE_DIR}/src/addFunctionServer.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# add_executable(monitorOneVariantServer ${PROJECT_SOURCE_DIR}/src/monitorVariantServer.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# target_link_libraries(monitorOneVariantServer pthread)

# add_executable(monitorMultiVariantServer ${PROJECT_SOURCE_DIR}/src/monitorMultiVariableServer.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# target_link_libraries(monitorMultiVariantServer pthread)

# add_executable(clientMonitorVariableServer ${PROJECT_SOURCE_DIR}/src/clientMonitorVariableServer.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# target_link_libraries(clientMonitorVariableServer pthread)

# add_executable(clientMonitorVariableClient ${PROJECT_SOURCE_DIR}/src/clientMonitorVariableClient.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)

# add_executable(eventServer ${PROJECT_SOURCE_DIR}/src/eventServer.c ${PROJECT_SOURCE_DIR}/open62541/open62541.c)