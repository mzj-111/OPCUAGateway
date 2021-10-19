/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

/**
 * .. _pubsub-tutorial:
 *
 * Working with Publish/Subscribe
 * ------------------------------
 *
 * Work in progress: This Tutorial will be continuously extended during the next
 * PubSub batches. More details about the PubSub extension and corresponding
 * open62541 API are located here: :ref:`pubsub`.
 *
 * Publishing Fields
 * ^^^^^^^^^^^^^^^^^
 * The PubSub MQTT publish example demonstrate the simplest way to publish
 * informations from the information model over MQTT using the UADP (or later
 * JSON) encoding. To receive information the subscribe functionality of mqtt is
 * used. A periodical call to yield is necessary to update the mqtt stack.
 *
 * **Connection handling**
 * PubSubConnections can be created and deleted on runtime. More details about
 * the system preconfiguration and connection can be found in
 * ``tutorial_pubsub_connection.c``.
 */
// #include "open62541.h"
#include "open62541/server.h"
#include "open62541/server_config_default.h"
#include "ua_pubsub.h"
#include "ua_network_pubsub_mqtt.h"
#include "open62541/plugin/log_stdout.h"
#include <signal.h>
#include "mqtt_publish.h"



#define CONNECTION_NAME              "MQTT Publisher Connection"
#define TRANSPORT_PROFILE_URI        "http://opcfoundation.org/UA-Profile/Transport/pubsub-mqtt"
#define MQTT_CLIENT_ID               "TempSensorMqttClient"
#define CONNECTIONOPTION_NAME        "mqttClientId"
// #define PUBLISHER_TOPIC              "tempSensorDataTopic"
#define PUBLISHER_METADATAQUEUENAME  "MetaDataTopic"
#define PUBLISHER_METADATAUPDATETIME 0
#define BROKER_ADDRESS_URL           "opc.mqtt://192.168.137.1:1883"
#define PUBLISH_INTERVAL             500

static UA_Boolean useJson = true;
static UA_NodeId connectionIdent;
static UA_NodeId publishedDataSetIdent;
static UA_NodeId writerGroupIdent;

void
addPubSubConnection(UA_Server *server, char *addressUrl) {
    /* Details about the connection configuration and handling are located
     * in the pubsub connection tutorial */
    // 配置connection
    UA_PubSubConnectionConfig connectionConfig;
    memset(&connectionConfig, 0, sizeof(connectionConfig));
    connectionConfig.name = UA_STRING(CONNECTION_NAME);
    connectionConfig.transportProfileUri = UA_STRING(TRANSPORT_PROFILE_URI);
    connectionConfig.enabled = UA_TRUE;

    /* configure address of the mqtt broker (local on default port) */
    // 设置connection的链接地址
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , UA_STRING(addressUrl)};
    UA_Variant_setScalar(&connectionConfig.address, &networkAddressUrl,
                         &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
    /* Changed to static publisherId from random generation to identify
     * the publisher on Subscriber side */
    // 设置发布者id
    connectionConfig.publisherId.numeric = 2234;

    /* configure options, set mqtt client id */
    UA_KeyValuePair connectionOptions[1];
    connectionOptions[0].key = UA_QUALIFIEDNAME(0, CONNECTIONOPTION_NAME);
    UA_String mqttClientId = UA_STRING(MQTT_CLIENT_ID);
    UA_Variant_setScalar(&connectionOptions[0].value, &mqttClientId, &UA_TYPES[UA_TYPES_STRING]);
    connectionConfig.connectionProperties = connectionOptions;
    connectionConfig.connectionPropertiesSize = 1;
    UA_Server_addPubSubConnection(server, &connectionConfig, &connectionIdent);
}

/**
 * **PublishedDataSet handling**
 * The PublishedDataSet (PDS) and PubSubConnection are the toplevel entities and
 * can exist alone. The PDS contains the collection of the published fields. All
 * other PubSub elements are directly or indirectly linked with the PDS or
 * connection.
 */
void
addPublishedDataSet(UA_Server *server) {
    /* The PublishedDataSetConfig contains all necessary public
    * informations for the creation of a new PublishedDataSet */
    UA_PublishedDataSetConfig publishedDataSetConfig;
    memset(&publishedDataSetConfig, 0, sizeof(UA_PublishedDataSetConfig));
    publishedDataSetConfig.publishedDataSetType = UA_PUBSUB_DATASET_PUBLISHEDITEMS;
    publishedDataSetConfig.name = UA_STRING("TempSensor PDS");
    /* Create new PublishedDataSet based on the PublishedDataSetConfig. */
    UA_Server_addPublishedDataSet(server, &publishedDataSetConfig, &publishedDataSetIdent);
}

/**
 * **DataSetField handling**
 * The DataSetField (DSF) is part of the PDS and describes exactly one published field.
 */
void
addDataSetField(UA_Server *server, UA_NodeId *publishedNodeId) {
    /* Add a field to the previous created PublishedDataSet */
    UA_DataSetFieldConfig dataSetFieldConfig;
    memset(&dataSetFieldConfig, 0, sizeof(UA_DataSetFieldConfig));
    dataSetFieldConfig.dataSetFieldType = UA_PUBSUB_DATASETFIELD_VARIABLE;

    dataSetFieldConfig.field.variable.fieldNameAlias = UA_STRING("TempSensor");
    dataSetFieldConfig.field.variable.promotedField = UA_FALSE;
    // 选择要公布的变量的nodeId
    dataSetFieldConfig.field.variable.publishParameters.publishedVariable = *publishedNodeId;
    dataSetFieldConfig.field.variable.publishParameters.attributeId = UA_ATTRIBUTEID_VALUE;
    UA_Server_addDataSetField(server, publishedDataSetIdent, &dataSetFieldConfig, NULL);

}

/**
 * **WriterGroup handling**
 * The WriterGroup (WG) is part of the connection and contains the primary configuration
 * parameters for the message creation.
 */
UA_StatusCode
addWriterGroup(UA_Server *server, char *topic, int interval) {
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    /* Now we create a new WriterGroupConfig and add the group to the existing PubSubConnection. */
    UA_WriterGroupConfig writerGroupConfig;
    memset(&writerGroupConfig, 0, sizeof(UA_WriterGroupConfig));
    writerGroupConfig.name = UA_STRING("Demo WriterGroup");
    writerGroupConfig.publishingInterval = interval;
    writerGroupConfig.enabled = UA_FALSE;
    writerGroupConfig.writerGroupId = 100;
    UA_UadpWriterGroupMessageDataType *writerGroupMessage;

    /* decide whether to use JSON or UADP encoding*/
#ifdef UA_ENABLE_JSON_ENCODING
    UA_JsonWriterGroupMessageDataType *Json_writerGroupMessage;
    
    if(useJson) {
        writerGroupConfig.encodingMimeType = UA_PUBSUB_ENCODING_JSON;
        writerGroupConfig.messageSettings.encoding             = UA_EXTENSIONOBJECT_DECODED;

        writerGroupConfig.messageSettings.content.decoded.type = &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE];
        /* The configuration flags for the messages are encapsulated inside the
         * message- and transport settings extension objects. These extension
         * objects are defined by the standard. e.g.
         * UadpWriterGroupMessageDataType */
        Json_writerGroupMessage = UA_JsonWriterGroupMessageDataType_new();
        /* Change message settings of writerGroup to send PublisherId,
         * DataSetMessageHeader, SingleDataSetMessage and DataSetClassId in PayloadHeader
         * of NetworkMessage */
        Json_writerGroupMessage->networkMessageContentMask =
            (UA_JsonNetworkMessageContentMask)(UA_JSONNETWORKMESSAGECONTENTMASK_NETWORKMESSAGEHEADER |
            (UA_JsonNetworkMessageContentMask)UA_JSONNETWORKMESSAGECONTENTMASK_DATASETMESSAGEHEADER |
            (UA_JsonNetworkMessageContentMask)UA_JSONNETWORKMESSAGECONTENTMASK_SINGLEDATASETMESSAGE |
            (UA_JsonNetworkMessageContentMask)UA_JSONNETWORKMESSAGECONTENTMASK_PUBLISHERID |
            (UA_JsonNetworkMessageContentMask)UA_JSONNETWORKMESSAGECONTENTMASK_DATASETCLASSID);
        writerGroupConfig.messageSettings.content.decoded.data = Json_writerGroupMessage;
    }

    else
#endif
    {
        writerGroupConfig.encodingMimeType = UA_PUBSUB_ENCODING_UADP;
        writerGroupConfig.messageSettings.encoding             = UA_EXTENSIONOBJECT_DECODED;
        writerGroupConfig.messageSettings.content.decoded.type = &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE];
        /* 邮件的配置标志封装在邮件和传输设置扩展对象中。这些扩展对象由标准定义
        例如  UadpWriterGroupMessageDataType*/
        writerGroupMessage  = UA_UadpWriterGroupMessageDataType_new();
        /* Change message settings of writerGroup to send PublisherId,
         * WriterGroupId in GroupHeader and DataSetWriterId in PayloadHeader
         * of NetworkMessage */
        writerGroupMessage->networkMessageContentMask =
            (UA_UadpNetworkMessageContentMask)(UA_UADPNETWORKMESSAGECONTENTMASK_PUBLISHERID |
            (UA_UadpNetworkMessageContentMask)UA_UADPNETWORKMESSAGECONTENTMASK_GROUPHEADER |
            (UA_UadpNetworkMessageContentMask)UA_UADPNETWORKMESSAGECONTENTMASK_WRITERGROUPID |
            (UA_UadpNetworkMessageContentMask)UA_UADPNETWORKMESSAGECONTENTMASK_PAYLOADHEADER);
        writerGroupConfig.messageSettings.content.decoded.data = writerGroupMessage;
    }


    /* configure the mqtt publish topic */
    UA_BrokerWriterGroupTransportDataType brokerTransportSettings;
    memset(&brokerTransportSettings, 0, sizeof(UA_BrokerWriterGroupTransportDataType));
    /* Assign the Topic at which MQTT publish should happen */
    /*ToDo: Pass the topic as argument from the writer group */
    brokerTransportSettings.queueName = UA_STRING(topic);
    brokerTransportSettings.resourceUri = UA_STRING_NULL;
    brokerTransportSettings.authenticationProfileUri = UA_STRING_NULL;

    /* Choose the QOS Level for MQTT */
    brokerTransportSettings.requestedDeliveryGuarantee = UA_BROKERTRANSPORTQUALITYOFSERVICE_BESTEFFORT;

    /* Encapsulate config in transportSettings */
    UA_ExtensionObject transportSettings;
    memset(&transportSettings, 0, sizeof(UA_ExtensionObject));
    transportSettings.encoding = UA_EXTENSIONOBJECT_DECODED;
    transportSettings.content.decoded.type = &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE];
    transportSettings.content.decoded.data = &brokerTransportSettings;

    writerGroupConfig.transportSettings = transportSettings;
    retval = UA_Server_addWriterGroup(server, connectionIdent, &writerGroupConfig, &writerGroupIdent);

    if (retval == UA_STATUSCODE_GOOD)
        UA_Server_setWriterGroupOperational(server, writerGroupIdent);

#ifdef UA_ENABLE_JSON_ENCODING
    if (useJson) {
        UA_JsonWriterGroupMessageDataType_delete(Json_writerGroupMessage);
    }
#endif

    if (!useJson && writerGroupMessage) {
        UA_UadpWriterGroupMessageDataType_delete(writerGroupMessage);
    }

    return retval;
}

/**
 * **DataSetWriter handling**
 * A DataSetWriter (DSW) is the glue between the WG and the PDS. The DSW is
 * linked to exactly one PDS and contains additional informations for the
 * message generation.
 */
void
addDataSetWriter(UA_Server *server, char *topic) {
    /* We need now a DataSetWriter within the WriterGroup. This means we must
     * create a new DataSetWriterConfig and add call the addWriterGroup function. */
    UA_NodeId dataSetWriterIdent;
    UA_DataSetWriterConfig dataSetWriterConfig;
    memset(&dataSetWriterConfig, 0, sizeof(UA_DataSetWriterConfig));
    dataSetWriterConfig.name = UA_STRING("Demo DataSetWriter");
    dataSetWriterConfig.dataSetWriterId = 62541;
    dataSetWriterConfig.keyFrameCount = 10;

#ifdef UA_ENABLE_JSON_ENCODING
    UA_JsonDataSetWriterMessageDataType jsonDswMd;
    UA_ExtensionObject messageSettings;
    if(useJson) {
        /* JSON config for the dataSetWriter */
        jsonDswMd.dataSetMessageContentMask = (UA_JsonDataSetMessageContentMask)
            (UA_JSONDATASETMESSAGECONTENTMASK_DATASETWRITERID |
             UA_JSONDATASETMESSAGECONTENTMASK_SEQUENCENUMBER |
             UA_JSONDATASETMESSAGECONTENTMASK_STATUS |
             UA_JSONDATASETMESSAGECONTENTMASK_METADATAVERSION |
             UA_JSONDATASETMESSAGECONTENTMASK_TIMESTAMP);

        messageSettings.encoding = UA_EXTENSIONOBJECT_DECODED;
        messageSettings.content.decoded.type = &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE];
        messageSettings.content.decoded.data = &jsonDswMd;

        dataSetWriterConfig.messageSettings = messageSettings;
    }
#endif
    /*TODO: Modify MQTT send to add DataSetWriters broker transport settings */
    /*TODO: Pass the topic as argument from the writer group */
    /*TODO: Publish Metadata to metaDataQueueName */
    /* configure the mqtt publish topic */
    UA_BrokerDataSetWriterTransportDataType brokerTransportSettings;
    memset(&brokerTransportSettings, 0, sizeof(UA_BrokerDataSetWriterTransportDataType));

    /* Assign the Topic at which MQTT publish should happen */
    brokerTransportSettings.queueName = UA_STRING(topic);
    brokerTransportSettings.resourceUri = UA_STRING_NULL;
    brokerTransportSettings.authenticationProfileUri = UA_STRING_NULL;
    brokerTransportSettings.metaDataQueueName = UA_STRING(PUBLISHER_METADATAQUEUENAME);
    brokerTransportSettings.metaDataUpdateTime = PUBLISHER_METADATAUPDATETIME;

    /* Choose the QOS Level for MQTT */
    brokerTransportSettings.requestedDeliveryGuarantee = UA_BROKERTRANSPORTQUALITYOFSERVICE_BESTEFFORT;

    /* Encapsulate config in transportSettings */
    UA_ExtensionObject transportSettings;
    memset(&transportSettings, 0, sizeof(UA_ExtensionObject));
    transportSettings.encoding = UA_EXTENSIONOBJECT_DECODED;
    transportSettings.content.decoded.type = &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE];
    transportSettings.content.decoded.data = &brokerTransportSettings;

    dataSetWriterConfig.transportSettings = transportSettings;
    UA_Server_addDataSetWriter(server, writerGroupIdent, publishedDataSetIdent,
                               &dataSetWriterConfig, &dataSetWriterIdent);
}

/**
 * That's it! You're now publishing the selected fields. Open a packet
 * inspection tool of trust e.g. wireshark and take a look on the outgoing
 * packages. The following graphic figures out the packages created by this
 * tutorial.
 *
 * .. figure:: ua-wireshark-pubsub.png
 *     :figwidth: 100 %
 *     :alt: OPC UA PubSub communication in wireshark
 *
 * The open62541 subscriber API will be released later. If you want to process
 * the the datagrams, take a look on the ua_network_pubsub_networkmessage.c
 * which already contains the decoding code for UADP messages.
 *
 * It follows the main server code, making use of the above definitions. */
// UA_Boolean running = true;
// void stopHandler(int sign) {
//     UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
//     running = false;
// }

void usage(void) {
    printf("Usage: tutorial_pubsub_mqtt [--url <opc.mqtt://hostname:port>] "
           "[--topic <mqttTopic>] "
           "[--freq <frequency in ms> "
           "[--json]\n"
           "  Defaults are:\n"
           "  - Url: opc.mqtt://192.168.137.1:1883\n"
           "  - Topic: customTopic\n"
           "  - Frequency: 500\n"
           "  - JSON: Off\n");
}

int getChildId(UA_Server *server, UA_NodeId parentNode, const int relativePathCnt, const UA_QualifiedName targetNameArr[], UA_NodeId *result){
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
int publishTempSensorData(int argc, char **argv, UA_Server *server, char* topic, UA_NodeId *publishedNodeId[]){
    /* TODO: Change to secure mqtt port:8883 */
    // 代理地址
    char *addressUrl = BROKER_ADDRESS_URL;
    // // 主题名称
    // char *topic = PUBLISHER_TOPIC;
    // 发布的时间间隔
    int interval = PUBLISH_INTERVAL;
    /* Parse arguments */
    for(int argpos = 1; argpos < argc; argpos++) {
        if(strcmp(argv[argpos], "--help") == 0) {
            usage();
            return 0;
        }

        if(strcmp(argv[argpos], "--json") == 0) {
            useJson = true;

            continue;
        }

        if(strcmp(argv[argpos], "--url") == 0) {
            if(argpos + 1 == argc) {
                usage();
                return -1;
            }
            argpos++;
            addressUrl = argv[argpos];
            continue;
        }

        if(strcmp(argv[argpos], "--topic") == 0) {
            if(argpos + 1 == argc) {
                usage();
                return -1;
            }
            argpos++;
            topic = argv[argpos];
            continue;
        }

        if(strcmp(argv[argpos], "--freq") == 0) {
            if(argpos + 1 == argc) {
                usage();
                return -1;
            }
            if(sscanf(argv[argpos], "%d", &interval) != 1) {
                usage();
                return -1;
            }
            if(interval <= 10) {
                UA_LOG_WARNING(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                               "Publication interval too small");
                return -1;
            }
            continue;
        }

        usage();
        return -1;
    }

    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    /* Set up the server config */
    // UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    /* Details about the connection configuration and handling are located in
     * the pubsub connection tutorial */
    // UA_ServerConfig_setDefault(config);
    config->pubsubTransportLayers = (UA_PubSubTransportLayer *)
        UA_malloc(1 * sizeof(UA_PubSubTransportLayer));
    if(!config->pubsubTransportLayers) {
        return -1;
    }
    config->pubsubTransportLayers[0] = UA_PubSubTransportLayerMQTT();
    config->pubsubTransportLayersSize++;

    /*
    UA_PubSubConnection --addPubSubConnection
    ----UA_WriterGroup --addWriterGroup
    --------UA_DataSetWriter --addPublishedDataSet
    ----UA_ReaderGroup --addReadGroup
    --------UA_DataSetReader --addDataSetReader
    ------------UA_SubscribedDataSet

    UA_PubSubPublishedDataSet --addPublishedDataSet
    ----UA_DataSetField --addDataSetField
    */
    
    addPubSubConnection(server, addressUrl);
    // 添加了要公布的nodeid
    addPublishedDataSet(server);
    UA_QualifiedName targetNameArr[1];
    for(int i = 0; i < 5; ++i){
        // UA_NodeId parentId = *publishedNodeId[i];
        UA_NodeId tempNodeId;
        targetNameArr[0] = UA_QUALIFIEDNAME(2, "Temperature");            
        if(getChildId(server, *publishedNodeId[i], 1, targetNameArr, &tempNodeId) == 0){
            UA_Double temp = 23.2;
            UA_Variant value;
            UA_Variant_setScalar(&value, &temp, &UA_TYPES[UA_TYPES_DOUBLE]);
            UA_Server_writeValue(server, tempNodeId, value);
        }

        // 获取id
        UA_NodeId sensorId;
        targetNameArr[0] = UA_QUALIFIEDNAME(2, "SensorId");
        if(getChildId(server, *publishedNodeId[i], 1, targetNameArr, &sensorId) == 0){
            UA_Int32 temp = i;
            UA_Variant value;
            UA_Variant_setScalar(&value, &temp, &UA_TYPES[UA_TYPES_INT32]);
            UA_Server_writeValue(server, sensorId, value);
        }
        addDataSetField(server, &sensorId);
        addDataSetField(server, &tempNodeId);
    } 
    retval = addWriterGroup(server, topic, interval);
    if (UA_STATUSCODE_GOOD != retval)
    {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Error Name = %s", UA_StatusCode_name(retval));
        return EXIT_FAILURE;
    }
    
    addDataSetWriter(server, topic);
    
    UA_PubSubConnection *connection = UA_PubSubConnection_findConnectionbyId(server, connectionIdent);
    
    if(!connection) {
    
        return -1;
    }

    return 0;
}




