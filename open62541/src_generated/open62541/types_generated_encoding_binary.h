/* Generated from Opc.Ua.Types.bsd with script /home/mi/Repository/open62541/tools/generate_datatypes.py
 * on host mi-ubuntu-OPCUA by user mi at 2021-10-19 04:22:13 */

#ifndef TYPES_GENERATED_ENCODING_BINARY_H_
#define TYPES_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_generated.h"
#endif



/* Boolean */
static UA_INLINE size_t
UA_Boolean_calcSizeBinary(const UA_Boolean *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BOOLEAN]);
}
static UA_INLINE UA_StatusCode
UA_Boolean_encodeBinary(const UA_Boolean *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BOOLEAN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Boolean_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Boolean *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BOOLEAN], NULL);
}

/* SByte */
static UA_INLINE size_t
UA_SByte_calcSizeBinary(const UA_SByte *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SBYTE]);
}
static UA_INLINE UA_StatusCode
UA_SByte_encodeBinary(const UA_SByte *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SBYTE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SByte_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SByte *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SBYTE], NULL);
}

/* Byte */
static UA_INLINE size_t
UA_Byte_calcSizeBinary(const UA_Byte *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BYTE]);
}
static UA_INLINE UA_StatusCode
UA_Byte_encodeBinary(const UA_Byte *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BYTE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Byte_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Byte *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BYTE], NULL);
}

/* Int16 */
static UA_INLINE size_t
UA_Int16_calcSizeBinary(const UA_Int16 *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_INT16]);
}
static UA_INLINE UA_StatusCode
UA_Int16_encodeBinary(const UA_Int16 *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INT16], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Int16_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Int16 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INT16], NULL);
}

/* UInt16 */
static UA_INLINE size_t
UA_UInt16_calcSizeBinary(const UA_UInt16 *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UINT16]);
}
static UA_INLINE UA_StatusCode
UA_UInt16_encodeBinary(const UA_UInt16 *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UINT16], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UInt16_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UInt16 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UINT16], NULL);
}

/* Int32 */
static UA_INLINE size_t
UA_Int32_calcSizeBinary(const UA_Int32 *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_INT32]);
}
static UA_INLINE UA_StatusCode
UA_Int32_encodeBinary(const UA_Int32 *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INT32], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Int32_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Int32 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INT32], NULL);
}

/* UInt32 */
static UA_INLINE size_t
UA_UInt32_calcSizeBinary(const UA_UInt32 *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UINT32]);
}
static UA_INLINE UA_StatusCode
UA_UInt32_encodeBinary(const UA_UInt32 *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UINT32], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UInt32_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UInt32 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UINT32], NULL);
}

/* Int64 */
static UA_INLINE size_t
UA_Int64_calcSizeBinary(const UA_Int64 *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_INT64]);
}
static UA_INLINE UA_StatusCode
UA_Int64_encodeBinary(const UA_Int64 *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INT64], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Int64_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Int64 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INT64], NULL);
}

/* UInt64 */
static UA_INLINE size_t
UA_UInt64_calcSizeBinary(const UA_UInt64 *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UINT64]);
}
static UA_INLINE UA_StatusCode
UA_UInt64_encodeBinary(const UA_UInt64 *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UINT64], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UInt64_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UInt64 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UINT64], NULL);
}

/* Float */
static UA_INLINE size_t
UA_Float_calcSizeBinary(const UA_Float *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FLOAT]);
}
static UA_INLINE UA_StatusCode
UA_Float_encodeBinary(const UA_Float *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FLOAT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Float_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Float *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FLOAT], NULL);
}

/* Double */
static UA_INLINE size_t
UA_Double_calcSizeBinary(const UA_Double *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DOUBLE]);
}
static UA_INLINE UA_StatusCode
UA_Double_encodeBinary(const UA_Double *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DOUBLE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Double_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Double *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DOUBLE], NULL);
}

/* String */
static UA_INLINE size_t
UA_String_calcSizeBinary(const UA_String *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STRING]);
}
static UA_INLINE UA_StatusCode
UA_String_encodeBinary(const UA_String *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_String_decodeBinary(const UA_ByteString *src, size_t *offset, UA_String *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STRING], NULL);
}

/* DateTime */
static UA_INLINE size_t
UA_DateTime_calcSizeBinary(const UA_DateTime *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATETIME]);
}
static UA_INLINE UA_StatusCode
UA_DateTime_encodeBinary(const UA_DateTime *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATETIME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DateTime_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DateTime *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATETIME], NULL);
}

/* Guid */
static UA_INLINE size_t
UA_Guid_calcSizeBinary(const UA_Guid *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_GUID]);
}
static UA_INLINE UA_StatusCode
UA_Guid_encodeBinary(const UA_Guid *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GUID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Guid_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Guid *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GUID], NULL);
}

/* ByteString */
static UA_INLINE size_t
UA_ByteString_calcSizeBinary(const UA_ByteString *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BYTESTRING]);
}
static UA_INLINE UA_StatusCode
UA_ByteString_encodeBinary(const UA_ByteString *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BYTESTRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ByteString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ByteString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BYTESTRING], NULL);
}

/* XmlElement */
static UA_INLINE size_t
UA_XmlElement_calcSizeBinary(const UA_XmlElement *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_XMLELEMENT]);
}
static UA_INLINE UA_StatusCode
UA_XmlElement_encodeBinary(const UA_XmlElement *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_XMLELEMENT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_XmlElement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_XmlElement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_XMLELEMENT], NULL);
}

/* NodeId */
static UA_INLINE size_t
UA_NodeId_calcSizeBinary(const UA_NodeId *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NODEID]);
}
static UA_INLINE UA_StatusCode
UA_NodeId_encodeBinary(const UA_NodeId *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEID], NULL);
}

/* ExpandedNodeId */
static UA_INLINE size_t
UA_ExpandedNodeId_calcSizeBinary(const UA_ExpandedNodeId *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]);
}
static UA_INLINE UA_StatusCode
UA_ExpandedNodeId_encodeBinary(const UA_ExpandedNodeId *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EXPANDEDNODEID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExpandedNodeId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExpandedNodeId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EXPANDEDNODEID], NULL);
}

/* StatusCode */
static UA_INLINE size_t
UA_StatusCode_calcSizeBinary(const UA_StatusCode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STATUSCODE]);
}
static UA_INLINE UA_StatusCode
UA_StatusCode_encodeBinary(const UA_StatusCode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STATUSCODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StatusCode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StatusCode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STATUSCODE], NULL);
}

/* QualifiedName */
static UA_INLINE size_t
UA_QualifiedName_calcSizeBinary(const UA_QualifiedName *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
}
static UA_INLINE UA_StatusCode
UA_QualifiedName_encodeBinary(const UA_QualifiedName *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUALIFIEDNAME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QualifiedName_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QualifiedName *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUALIFIEDNAME], NULL);
}

/* LocalizedText */
static UA_INLINE size_t
UA_LocalizedText_calcSizeBinary(const UA_LocalizedText *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
}
static UA_INLINE UA_StatusCode
UA_LocalizedText_encodeBinary(const UA_LocalizedText *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_LocalizedText_decodeBinary(const UA_ByteString *src, size_t *offset, UA_LocalizedText *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], NULL);
}

/* ExtensionObject */
static UA_INLINE size_t
UA_ExtensionObject_calcSizeBinary(const UA_ExtensionObject *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
}
static UA_INLINE UA_StatusCode
UA_ExtensionObject_encodeBinary(const UA_ExtensionObject *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExtensionObject_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExtensionObject *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT], NULL);
}

/* DataValue */
static UA_INLINE size_t
UA_DataValue_calcSizeBinary(const UA_DataValue *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATAVALUE]);
}
static UA_INLINE UA_StatusCode
UA_DataValue_encodeBinary(const UA_DataValue *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATAVALUE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataValue_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataValue *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATAVALUE], NULL);
}

/* Variant */
static UA_INLINE size_t
UA_Variant_calcSizeBinary(const UA_Variant *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VARIANT]);
}
static UA_INLINE UA_StatusCode
UA_Variant_encodeBinary(const UA_Variant *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VARIANT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Variant_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Variant *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VARIANT], NULL);
}

/* DiagnosticInfo */
static UA_INLINE size_t
UA_DiagnosticInfo_calcSizeBinary(const UA_DiagnosticInfo *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]);
}
static UA_INLINE UA_StatusCode
UA_DiagnosticInfo_encodeBinary(const UA_DiagnosticInfo *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DiagnosticInfo_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DiagnosticInfo *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO], NULL);
}

/* NamingRuleType */
static UA_INLINE size_t
UA_NamingRuleType_calcSizeBinary(const UA_NamingRuleType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NAMINGRULETYPE]);
}
static UA_INLINE UA_StatusCode
UA_NamingRuleType_encodeBinary(const UA_NamingRuleType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NAMINGRULETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NamingRuleType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NamingRuleType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NAMINGRULETYPE], NULL);
}

/* ImageBMP */
static UA_INLINE size_t
UA_ImageBMP_calcSizeBinary(const UA_ImageBMP *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IMAGEBMP]);
}
static UA_INLINE UA_StatusCode
UA_ImageBMP_encodeBinary(const UA_ImageBMP *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IMAGEBMP], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ImageBMP_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ImageBMP *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IMAGEBMP], NULL);
}

/* ImageGIF */
static UA_INLINE size_t
UA_ImageGIF_calcSizeBinary(const UA_ImageGIF *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IMAGEGIF]);
}
static UA_INLINE UA_StatusCode
UA_ImageGIF_encodeBinary(const UA_ImageGIF *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IMAGEGIF], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ImageGIF_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ImageGIF *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IMAGEGIF], NULL);
}

/* ImageJPG */
static UA_INLINE size_t
UA_ImageJPG_calcSizeBinary(const UA_ImageJPG *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IMAGEJPG]);
}
static UA_INLINE UA_StatusCode
UA_ImageJPG_encodeBinary(const UA_ImageJPG *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IMAGEJPG], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ImageJPG_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ImageJPG *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IMAGEJPG], NULL);
}

/* ImagePNG */
static UA_INLINE size_t
UA_ImagePNG_calcSizeBinary(const UA_ImagePNG *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IMAGEPNG]);
}
static UA_INLINE UA_StatusCode
UA_ImagePNG_encodeBinary(const UA_ImagePNG *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IMAGEPNG], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ImagePNG_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ImagePNG *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IMAGEPNG], NULL);
}

/* AudioDataType */
static UA_INLINE size_t
UA_AudioDataType_calcSizeBinary(const UA_AudioDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_AUDIODATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_AudioDataType_encodeBinary(const UA_AudioDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AUDIODATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AudioDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AudioDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AUDIODATATYPE], NULL);
}

/* BitFieldMaskDataType */
static UA_INLINE size_t
UA_BitFieldMaskDataType_calcSizeBinary(const UA_BitFieldMaskDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_BitFieldMaskDataType_encodeBinary(const UA_BitFieldMaskDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BitFieldMaskDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BitFieldMaskDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE], NULL);
}

/* KeyValuePair */
static UA_INLINE size_t
UA_KeyValuePair_calcSizeBinary(const UA_KeyValuePair *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_KEYVALUEPAIR]);
}
static UA_INLINE UA_StatusCode
UA_KeyValuePair_encodeBinary(const UA_KeyValuePair *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_KEYVALUEPAIR], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_KeyValuePair_decodeBinary(const UA_ByteString *src, size_t *offset, UA_KeyValuePair *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_KEYVALUEPAIR], NULL);
}

/* RationalNumber */
static UA_INLINE size_t
UA_RationalNumber_calcSizeBinary(const UA_RationalNumber *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_RATIONALNUMBER]);
}
static UA_INLINE UA_StatusCode
UA_RationalNumber_encodeBinary(const UA_RationalNumber *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RATIONALNUMBER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RationalNumber_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RationalNumber *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RATIONALNUMBER], NULL);
}

/* Vector */
static UA_INLINE size_t
UA_Vector_calcSizeBinary(const UA_Vector *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VECTOR]);
}
static UA_INLINE UA_StatusCode
UA_Vector_encodeBinary(const UA_Vector *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VECTOR], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Vector_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Vector *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VECTOR], NULL);
}

/* ThreeDVector */
static UA_INLINE size_t
UA_ThreeDVector_calcSizeBinary(const UA_ThreeDVector *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_THREEDVECTOR]);
}
static UA_INLINE UA_StatusCode
UA_ThreeDVector_encodeBinary(const UA_ThreeDVector *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_THREEDVECTOR], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ThreeDVector_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ThreeDVector *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_THREEDVECTOR], NULL);
}

/* CartesianCoordinates */
static UA_INLINE size_t
UA_CartesianCoordinates_calcSizeBinary(const UA_CartesianCoordinates *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES]);
}
static UA_INLINE UA_StatusCode
UA_CartesianCoordinates_encodeBinary(const UA_CartesianCoordinates *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CartesianCoordinates_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CartesianCoordinates *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES], NULL);
}

/* ThreeDCartesianCoordinates */
static UA_INLINE size_t
UA_ThreeDCartesianCoordinates_calcSizeBinary(const UA_ThreeDCartesianCoordinates *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES]);
}
static UA_INLINE UA_StatusCode
UA_ThreeDCartesianCoordinates_encodeBinary(const UA_ThreeDCartesianCoordinates *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ThreeDCartesianCoordinates_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ThreeDCartesianCoordinates *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES], NULL);
}

/* Orientation */
static UA_INLINE size_t
UA_Orientation_calcSizeBinary(const UA_Orientation *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ORIENTATION]);
}
static UA_INLINE UA_StatusCode
UA_Orientation_encodeBinary(const UA_Orientation *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ORIENTATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Orientation_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Orientation *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ORIENTATION], NULL);
}

/* ThreeDOrientation */
static UA_INLINE size_t
UA_ThreeDOrientation_calcSizeBinary(const UA_ThreeDOrientation *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_THREEDORIENTATION]);
}
static UA_INLINE UA_StatusCode
UA_ThreeDOrientation_encodeBinary(const UA_ThreeDOrientation *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_THREEDORIENTATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ThreeDOrientation_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ThreeDOrientation *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_THREEDORIENTATION], NULL);
}

/* Frame */
static UA_INLINE size_t
UA_Frame_calcSizeBinary(const UA_Frame *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FRAME]);
}
static UA_INLINE UA_StatusCode
UA_Frame_encodeBinary(const UA_Frame *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FRAME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Frame_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Frame *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FRAME], NULL);
}

/* ThreeDFrame */
static UA_INLINE size_t
UA_ThreeDFrame_calcSizeBinary(const UA_ThreeDFrame *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_THREEDFRAME]);
}
static UA_INLINE UA_StatusCode
UA_ThreeDFrame_encodeBinary(const UA_ThreeDFrame *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_THREEDFRAME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ThreeDFrame_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ThreeDFrame *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_THREEDFRAME], NULL);
}

/* OpenFileMode */
static UA_INLINE size_t
UA_OpenFileMode_calcSizeBinary(const UA_OpenFileMode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OPENFILEMODE]);
}
static UA_INLINE UA_StatusCode
UA_OpenFileMode_encodeBinary(const UA_OpenFileMode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OPENFILEMODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenFileMode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenFileMode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OPENFILEMODE], NULL);
}

/* IdentityCriteriaType */
static UA_INLINE size_t
UA_IdentityCriteriaType_calcSizeBinary(const UA_IdentityCriteriaType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE]);
}
static UA_INLINE UA_StatusCode
UA_IdentityCriteriaType_encodeBinary(const UA_IdentityCriteriaType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IdentityCriteriaType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IdentityCriteriaType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE], NULL);
}

/* IdentityMappingRuleType */
static UA_INLINE size_t
UA_IdentityMappingRuleType_calcSizeBinary(const UA_IdentityMappingRuleType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE]);
}
static UA_INLINE UA_StatusCode
UA_IdentityMappingRuleType_encodeBinary(const UA_IdentityMappingRuleType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IdentityMappingRuleType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IdentityMappingRuleType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE], NULL);
}

/* CurrencyUnitType */
static UA_INLINE size_t
UA_CurrencyUnitType_calcSizeBinary(const UA_CurrencyUnitType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE]);
}
static UA_INLINE UA_StatusCode
UA_CurrencyUnitType_encodeBinary(const UA_CurrencyUnitType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CurrencyUnitType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CurrencyUnitType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE], NULL);
}

/* TrustListMasks */
static UA_INLINE size_t
UA_TrustListMasks_calcSizeBinary(const UA_TrustListMasks *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS]);
}
static UA_INLINE UA_StatusCode
UA_TrustListMasks_encodeBinary(const UA_TrustListMasks *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TrustListMasks_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TrustListMasks *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS], NULL);
}

/* TrustListDataType */
static UA_INLINE size_t
UA_TrustListDataType_calcSizeBinary(const UA_TrustListDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_TrustListDataType_encodeBinary(const UA_TrustListDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TrustListDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TrustListDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE], NULL);
}

/* DecimalDataType */
static UA_INLINE size_t
UA_DecimalDataType_calcSizeBinary(const UA_DecimalDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DECIMALDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DecimalDataType_encodeBinary(const UA_DecimalDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DECIMALDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DecimalDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DecimalDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DECIMALDATATYPE], NULL);
}

/* DataTypeDescription */
static UA_INLINE size_t
UA_DataTypeDescription_calcSizeBinary(const UA_DataTypeDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_DataTypeDescription_encodeBinary(const UA_DataTypeDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataTypeDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataTypeDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION], NULL);
}

/* SimpleTypeDescription */
static UA_INLINE size_t
UA_SimpleTypeDescription_calcSizeBinary(const UA_SimpleTypeDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_SimpleTypeDescription_encodeBinary(const UA_SimpleTypeDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SimpleTypeDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SimpleTypeDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION], NULL);
}

/* PubSubState */
static UA_INLINE size_t
UA_PubSubState_calcSizeBinary(const UA_PubSubState *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBSTATE]);
}
static UA_INLINE UA_StatusCode
UA_PubSubState_encodeBinary(const UA_PubSubState *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBSTATE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PubSubState_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PubSubState *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBSUBSTATE], NULL);
}

/* DataSetFieldFlags */
static UA_INLINE size_t
UA_DataSetFieldFlags_calcSizeBinary(const UA_DataSetFieldFlags *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS]);
}
static UA_INLINE UA_StatusCode
UA_DataSetFieldFlags_encodeBinary(const UA_DataSetFieldFlags *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetFieldFlags_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetFieldFlags *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS], NULL);
}

/* ConfigurationVersionDataType */
static UA_INLINE size_t
UA_ConfigurationVersionDataType_calcSizeBinary(const UA_ConfigurationVersionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigurationVersionDataType_encodeBinary(const UA_ConfigurationVersionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigurationVersionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigurationVersionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE], NULL);
}

/* PublishedDataSetSourceDataType */
static UA_INLINE size_t
UA_PublishedDataSetSourceDataType_calcSizeBinary(const UA_PublishedDataSetSourceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PublishedDataSetSourceDataType_encodeBinary(const UA_PublishedDataSetSourceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishedDataSetSourceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishedDataSetSourceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE], NULL);
}

/* PublishedVariableDataType */
static UA_INLINE size_t
UA_PublishedVariableDataType_calcSizeBinary(const UA_PublishedVariableDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PublishedVariableDataType_encodeBinary(const UA_PublishedVariableDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishedVariableDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishedVariableDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE], NULL);
}

/* PublishedDataItemsDataType */
static UA_INLINE size_t
UA_PublishedDataItemsDataType_calcSizeBinary(const UA_PublishedDataItemsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PublishedDataItemsDataType_encodeBinary(const UA_PublishedDataItemsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishedDataItemsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishedDataItemsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE], NULL);
}

/* DataSetFieldContentMask */
static UA_INLINE size_t
UA_DataSetFieldContentMask_calcSizeBinary(const UA_DataSetFieldContentMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK]);
}
static UA_INLINE UA_StatusCode
UA_DataSetFieldContentMask_encodeBinary(const UA_DataSetFieldContentMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetFieldContentMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetFieldContentMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK], NULL);
}

/* DataSetWriterDataType */
static UA_INLINE size_t
UA_DataSetWriterDataType_calcSizeBinary(const UA_DataSetWriterDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetWriterDataType_encodeBinary(const UA_DataSetWriterDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetWriterDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetWriterDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE], NULL);
}

/* DataSetWriterTransportDataType */
static UA_INLINE size_t
UA_DataSetWriterTransportDataType_calcSizeBinary(const UA_DataSetWriterTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetWriterTransportDataType_encodeBinary(const UA_DataSetWriterTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetWriterTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetWriterTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE], NULL);
}

/* DataSetWriterMessageDataType */
static UA_INLINE size_t
UA_DataSetWriterMessageDataType_calcSizeBinary(const UA_DataSetWriterMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetWriterMessageDataType_encodeBinary(const UA_DataSetWriterMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetWriterMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetWriterMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE], NULL);
}

/* WriterGroupTransportDataType */
static UA_INLINE size_t
UA_WriterGroupTransportDataType_calcSizeBinary(const UA_WriterGroupTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_WriterGroupTransportDataType_encodeBinary(const UA_WriterGroupTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriterGroupTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriterGroupTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE], NULL);
}

/* WriterGroupMessageDataType */
static UA_INLINE size_t
UA_WriterGroupMessageDataType_calcSizeBinary(const UA_WriterGroupMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_WriterGroupMessageDataType_encodeBinary(const UA_WriterGroupMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriterGroupMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriterGroupMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE], NULL);
}

/* ConnectionTransportDataType */
static UA_INLINE size_t
UA_ConnectionTransportDataType_calcSizeBinary(const UA_ConnectionTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConnectionTransportDataType_encodeBinary(const UA_ConnectionTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConnectionTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConnectionTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE], NULL);
}

/* NetworkAddressDataType */
static UA_INLINE size_t
UA_NetworkAddressDataType_calcSizeBinary(const UA_NetworkAddressDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_NetworkAddressDataType_encodeBinary(const UA_NetworkAddressDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NetworkAddressDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NetworkAddressDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE], NULL);
}

/* NetworkAddressUrlDataType */
static UA_INLINE size_t
UA_NetworkAddressUrlDataType_calcSizeBinary(const UA_NetworkAddressUrlDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_NetworkAddressUrlDataType_encodeBinary(const UA_NetworkAddressUrlDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NetworkAddressUrlDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NetworkAddressUrlDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE], NULL);
}

/* ReaderGroupTransportDataType */
static UA_INLINE size_t
UA_ReaderGroupTransportDataType_calcSizeBinary(const UA_ReaderGroupTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ReaderGroupTransportDataType_encodeBinary(const UA_ReaderGroupTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReaderGroupTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReaderGroupTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE], NULL);
}

/* ReaderGroupMessageDataType */
static UA_INLINE size_t
UA_ReaderGroupMessageDataType_calcSizeBinary(const UA_ReaderGroupMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ReaderGroupMessageDataType_encodeBinary(const UA_ReaderGroupMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReaderGroupMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReaderGroupMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE], NULL);
}

/* DataSetReaderTransportDataType */
static UA_INLINE size_t
UA_DataSetReaderTransportDataType_calcSizeBinary(const UA_DataSetReaderTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetReaderTransportDataType_encodeBinary(const UA_DataSetReaderTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetReaderTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetReaderTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE], NULL);
}

/* DataSetReaderMessageDataType */
static UA_INLINE size_t
UA_DataSetReaderMessageDataType_calcSizeBinary(const UA_DataSetReaderMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetReaderMessageDataType_encodeBinary(const UA_DataSetReaderMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetReaderMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetReaderMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE], NULL);
}

/* SubscribedDataSetDataType */
static UA_INLINE size_t
UA_SubscribedDataSetDataType_calcSizeBinary(const UA_SubscribedDataSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SubscribedDataSetDataType_encodeBinary(const UA_SubscribedDataSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SubscribedDataSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SubscribedDataSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE], NULL);
}

/* OverrideValueHandling */
static UA_INLINE size_t
UA_OverrideValueHandling_calcSizeBinary(const UA_OverrideValueHandling *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING]);
}
static UA_INLINE UA_StatusCode
UA_OverrideValueHandling_encodeBinary(const UA_OverrideValueHandling *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OverrideValueHandling_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OverrideValueHandling *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING], NULL);
}

/* DataSetOrderingType */
static UA_INLINE size_t
UA_DataSetOrderingType_calcSizeBinary(const UA_DataSetOrderingType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetOrderingType_encodeBinary(const UA_DataSetOrderingType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetOrderingType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetOrderingType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE], NULL);
}

/* UadpNetworkMessageContentMask */
static UA_INLINE size_t
UA_UadpNetworkMessageContentMask_calcSizeBinary(const UA_UadpNetworkMessageContentMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK]);
}
static UA_INLINE UA_StatusCode
UA_UadpNetworkMessageContentMask_encodeBinary(const UA_UadpNetworkMessageContentMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UadpNetworkMessageContentMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UadpNetworkMessageContentMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK], NULL);
}

/* UadpWriterGroupMessageDataType */
static UA_INLINE size_t
UA_UadpWriterGroupMessageDataType_calcSizeBinary(const UA_UadpWriterGroupMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_UadpWriterGroupMessageDataType_encodeBinary(const UA_UadpWriterGroupMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UadpWriterGroupMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UadpWriterGroupMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE], NULL);
}

/* UadpDataSetMessageContentMask */
static UA_INLINE size_t
UA_UadpDataSetMessageContentMask_calcSizeBinary(const UA_UadpDataSetMessageContentMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK]);
}
static UA_INLINE UA_StatusCode
UA_UadpDataSetMessageContentMask_encodeBinary(const UA_UadpDataSetMessageContentMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UadpDataSetMessageContentMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UadpDataSetMessageContentMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK], NULL);
}

/* UadpDataSetWriterMessageDataType */
static UA_INLINE size_t
UA_UadpDataSetWriterMessageDataType_calcSizeBinary(const UA_UadpDataSetWriterMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_UadpDataSetWriterMessageDataType_encodeBinary(const UA_UadpDataSetWriterMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UadpDataSetWriterMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UadpDataSetWriterMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE], NULL);
}

/* UadpDataSetReaderMessageDataType */
static UA_INLINE size_t
UA_UadpDataSetReaderMessageDataType_calcSizeBinary(const UA_UadpDataSetReaderMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_UadpDataSetReaderMessageDataType_encodeBinary(const UA_UadpDataSetReaderMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UadpDataSetReaderMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UadpDataSetReaderMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE], NULL);
}

/* JsonNetworkMessageContentMask */
static UA_INLINE size_t
UA_JsonNetworkMessageContentMask_calcSizeBinary(const UA_JsonNetworkMessageContentMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK]);
}
static UA_INLINE UA_StatusCode
UA_JsonNetworkMessageContentMask_encodeBinary(const UA_JsonNetworkMessageContentMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JsonNetworkMessageContentMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JsonNetworkMessageContentMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK], NULL);
}

/* JsonWriterGroupMessageDataType */
static UA_INLINE size_t
UA_JsonWriterGroupMessageDataType_calcSizeBinary(const UA_JsonWriterGroupMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_JsonWriterGroupMessageDataType_encodeBinary(const UA_JsonWriterGroupMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JsonWriterGroupMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JsonWriterGroupMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE], NULL);
}

/* JsonDataSetMessageContentMask */
static UA_INLINE size_t
UA_JsonDataSetMessageContentMask_calcSizeBinary(const UA_JsonDataSetMessageContentMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK]);
}
static UA_INLINE UA_StatusCode
UA_JsonDataSetMessageContentMask_encodeBinary(const UA_JsonDataSetMessageContentMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JsonDataSetMessageContentMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JsonDataSetMessageContentMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK], NULL);
}

/* JsonDataSetWriterMessageDataType */
static UA_INLINE size_t
UA_JsonDataSetWriterMessageDataType_calcSizeBinary(const UA_JsonDataSetWriterMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_JsonDataSetWriterMessageDataType_encodeBinary(const UA_JsonDataSetWriterMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JsonDataSetWriterMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JsonDataSetWriterMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE], NULL);
}

/* JsonDataSetReaderMessageDataType */
static UA_INLINE size_t
UA_JsonDataSetReaderMessageDataType_calcSizeBinary(const UA_JsonDataSetReaderMessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_JsonDataSetReaderMessageDataType_encodeBinary(const UA_JsonDataSetReaderMessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JsonDataSetReaderMessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JsonDataSetReaderMessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE], NULL);
}

/* DatagramConnectionTransportDataType */
static UA_INLINE size_t
UA_DatagramConnectionTransportDataType_calcSizeBinary(const UA_DatagramConnectionTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DatagramConnectionTransportDataType_encodeBinary(const UA_DatagramConnectionTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DatagramConnectionTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DatagramConnectionTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE], NULL);
}

/* DatagramWriterGroupTransportDataType */
static UA_INLINE size_t
UA_DatagramWriterGroupTransportDataType_calcSizeBinary(const UA_DatagramWriterGroupTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DatagramWriterGroupTransportDataType_encodeBinary(const UA_DatagramWriterGroupTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DatagramWriterGroupTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DatagramWriterGroupTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE], NULL);
}

/* BrokerConnectionTransportDataType */
static UA_INLINE size_t
UA_BrokerConnectionTransportDataType_calcSizeBinary(const UA_BrokerConnectionTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_BrokerConnectionTransportDataType_encodeBinary(const UA_BrokerConnectionTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrokerConnectionTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrokerConnectionTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE], NULL);
}

/* BrokerTransportQualityOfService */
static UA_INLINE size_t
UA_BrokerTransportQualityOfService_calcSizeBinary(const UA_BrokerTransportQualityOfService *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE]);
}
static UA_INLINE UA_StatusCode
UA_BrokerTransportQualityOfService_encodeBinary(const UA_BrokerTransportQualityOfService *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrokerTransportQualityOfService_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrokerTransportQualityOfService *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE], NULL);
}

/* BrokerWriterGroupTransportDataType */
static UA_INLINE size_t
UA_BrokerWriterGroupTransportDataType_calcSizeBinary(const UA_BrokerWriterGroupTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_BrokerWriterGroupTransportDataType_encodeBinary(const UA_BrokerWriterGroupTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrokerWriterGroupTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrokerWriterGroupTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE], NULL);
}

/* BrokerDataSetWriterTransportDataType */
static UA_INLINE size_t
UA_BrokerDataSetWriterTransportDataType_calcSizeBinary(const UA_BrokerDataSetWriterTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_BrokerDataSetWriterTransportDataType_encodeBinary(const UA_BrokerDataSetWriterTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrokerDataSetWriterTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrokerDataSetWriterTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE], NULL);
}

/* BrokerDataSetReaderTransportDataType */
static UA_INLINE size_t
UA_BrokerDataSetReaderTransportDataType_calcSizeBinary(const UA_BrokerDataSetReaderTransportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_BrokerDataSetReaderTransportDataType_encodeBinary(const UA_BrokerDataSetReaderTransportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrokerDataSetReaderTransportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrokerDataSetReaderTransportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE], NULL);
}

/* DiagnosticsLevel */
static UA_INLINE size_t
UA_DiagnosticsLevel_calcSizeBinary(const UA_DiagnosticsLevel *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL]);
}
static UA_INLINE UA_StatusCode
UA_DiagnosticsLevel_encodeBinary(const UA_DiagnosticsLevel *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DiagnosticsLevel_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DiagnosticsLevel *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL], NULL);
}

/* PubSubDiagnosticsCounterClassification */
static UA_INLINE size_t
UA_PubSubDiagnosticsCounterClassification_calcSizeBinary(const UA_PubSubDiagnosticsCounterClassification *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION]);
}
static UA_INLINE UA_StatusCode
UA_PubSubDiagnosticsCounterClassification_encodeBinary(const UA_PubSubDiagnosticsCounterClassification *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PubSubDiagnosticsCounterClassification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PubSubDiagnosticsCounterClassification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION], NULL);
}

/* IdType */
static UA_INLINE size_t
UA_IdType_calcSizeBinary(const UA_IdType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_IDTYPE]);
}
static UA_INLINE UA_StatusCode
UA_IdType_encodeBinary(const UA_IdType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IDTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IdType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IdType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IDTYPE], NULL);
}

/* NodeClass */
static UA_INLINE size_t
UA_NodeClass_calcSizeBinary(const UA_NodeClass *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NODECLASS]);
}
static UA_INLINE UA_StatusCode
UA_NodeClass_encodeBinary(const UA_NodeClass *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODECLASS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeClass_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeClass *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODECLASS], NULL);
}

/* PermissionType */
static UA_INLINE size_t
UA_PermissionType_calcSizeBinary(const UA_PermissionType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PERMISSIONTYPE]);
}
static UA_INLINE UA_StatusCode
UA_PermissionType_encodeBinary(const UA_PermissionType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PERMISSIONTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PermissionType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PermissionType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PERMISSIONTYPE], NULL);
}

/* AccessLevelType */
static UA_INLINE size_t
UA_AccessLevelType_calcSizeBinary(const UA_AccessLevelType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE]);
}
static UA_INLINE UA_StatusCode
UA_AccessLevelType_encodeBinary(const UA_AccessLevelType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AccessLevelType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AccessLevelType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE], NULL);
}

/* AccessLevelExType */
static UA_INLINE size_t
UA_AccessLevelExType_calcSizeBinary(const UA_AccessLevelExType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE]);
}
static UA_INLINE UA_StatusCode
UA_AccessLevelExType_encodeBinary(const UA_AccessLevelExType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AccessLevelExType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AccessLevelExType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE], NULL);
}

/* EventNotifierType */
static UA_INLINE size_t
UA_EventNotifierType_calcSizeBinary(const UA_EventNotifierType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE]);
}
static UA_INLINE UA_StatusCode
UA_EventNotifierType_encodeBinary(const UA_EventNotifierType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventNotifierType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventNotifierType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE], NULL);
}

/* AccessRestrictionType */
static UA_INLINE size_t
UA_AccessRestrictionType_calcSizeBinary(const UA_AccessRestrictionType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE]);
}
static UA_INLINE UA_StatusCode
UA_AccessRestrictionType_encodeBinary(const UA_AccessRestrictionType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AccessRestrictionType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AccessRestrictionType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE], NULL);
}

/* RolePermissionType */
static UA_INLINE size_t
UA_RolePermissionType_calcSizeBinary(const UA_RolePermissionType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE]);
}
static UA_INLINE UA_StatusCode
UA_RolePermissionType_encodeBinary(const UA_RolePermissionType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RolePermissionType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RolePermissionType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE], NULL);
}

/* StructureType */
static UA_INLINE size_t
UA_StructureType_calcSizeBinary(const UA_StructureType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STRUCTURETYPE]);
}
static UA_INLINE UA_StatusCode
UA_StructureType_encodeBinary(const UA_StructureType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STRUCTURETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StructureType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StructureType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STRUCTURETYPE], NULL);
}

/* StructureField */
static UA_INLINE size_t
UA_StructureField_calcSizeBinary(const UA_StructureField *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STRUCTUREFIELD]);
}
static UA_INLINE UA_StatusCode
UA_StructureField_encodeBinary(const UA_StructureField *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STRUCTUREFIELD], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StructureField_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StructureField *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STRUCTUREFIELD], NULL);
}

/* StructureDefinition */
static UA_INLINE size_t
UA_StructureDefinition_calcSizeBinary(const UA_StructureDefinition *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION]);
}
static UA_INLINE UA_StatusCode
UA_StructureDefinition_encodeBinary(const UA_StructureDefinition *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StructureDefinition_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StructureDefinition *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION], NULL);
}

/* ReferenceNode */
static UA_INLINE size_t
UA_ReferenceNode_calcSizeBinary(const UA_ReferenceNode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REFERENCENODE]);
}
static UA_INLINE UA_StatusCode
UA_ReferenceNode_encodeBinary(const UA_ReferenceNode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REFERENCENODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReferenceNode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReferenceNode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REFERENCENODE], NULL);
}

/* Argument */
static UA_INLINE size_t
UA_Argument_calcSizeBinary(const UA_Argument *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ARGUMENT]);
}
static UA_INLINE UA_StatusCode
UA_Argument_encodeBinary(const UA_Argument *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ARGUMENT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Argument_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Argument *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ARGUMENT], NULL);
}

/* EnumValueType */
static UA_INLINE size_t
UA_EnumValueType_calcSizeBinary(const UA_EnumValueType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnumValueType_encodeBinary(const UA_EnumValueType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENUMVALUETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnumValueType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnumValueType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENUMVALUETYPE], NULL);
}

/* EnumField */
static UA_INLINE size_t
UA_EnumField_calcSizeBinary(const UA_EnumField *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENUMFIELD]);
}
static UA_INLINE UA_StatusCode
UA_EnumField_encodeBinary(const UA_EnumField *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENUMFIELD], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnumField_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnumField *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENUMFIELD], NULL);
}

/* OptionSet */
static UA_INLINE size_t
UA_OptionSet_calcSizeBinary(const UA_OptionSet *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OPTIONSET]);
}
static UA_INLINE UA_StatusCode
UA_OptionSet_encodeBinary(const UA_OptionSet *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OPTIONSET], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OptionSet_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OptionSet *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OPTIONSET], NULL);
}

/* Union */
static UA_INLINE size_t
UA_Union_calcSizeBinary(const UA_Union *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UNION]);
}
static UA_INLINE UA_StatusCode
UA_Union_encodeBinary(const UA_Union *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UNION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Union_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Union *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UNION], NULL);
}

/* NormalizedString */
static UA_INLINE size_t
UA_NormalizedString_calcSizeBinary(const UA_NormalizedString *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING]);
}
static UA_INLINE UA_StatusCode
UA_NormalizedString_encodeBinary(const UA_NormalizedString *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NormalizedString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NormalizedString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING], NULL);
}

/* DecimalString */
static UA_INLINE size_t
UA_DecimalString_calcSizeBinary(const UA_DecimalString *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DECIMALSTRING]);
}
static UA_INLINE UA_StatusCode
UA_DecimalString_encodeBinary(const UA_DecimalString *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DECIMALSTRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DecimalString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DecimalString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DECIMALSTRING], NULL);
}

/* DurationString */
static UA_INLINE size_t
UA_DurationString_calcSizeBinary(const UA_DurationString *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DURATIONSTRING]);
}
static UA_INLINE UA_StatusCode
UA_DurationString_encodeBinary(const UA_DurationString *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DURATIONSTRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DurationString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DurationString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DURATIONSTRING], NULL);
}

/* TimeString */
static UA_INLINE size_t
UA_TimeString_calcSizeBinary(const UA_TimeString *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TIMESTRING]);
}
static UA_INLINE UA_StatusCode
UA_TimeString_encodeBinary(const UA_TimeString *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TIMESTRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TimeString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TimeString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TIMESTRING], NULL);
}

/* DateString */
static UA_INLINE size_t
UA_DateString_calcSizeBinary(const UA_DateString *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATESTRING]);
}
static UA_INLINE UA_StatusCode
UA_DateString_encodeBinary(const UA_DateString *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATESTRING], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DateString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DateString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATESTRING], NULL);
}

/* Duration */
static UA_INLINE size_t
UA_Duration_calcSizeBinary(const UA_Duration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DURATION]);
}
static UA_INLINE UA_StatusCode
UA_Duration_encodeBinary(const UA_Duration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DURATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Duration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Duration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DURATION], NULL);
}

/* UtcTime */
static UA_INLINE size_t
UA_UtcTime_calcSizeBinary(const UA_UtcTime *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UTCTIME]);
}
static UA_INLINE UA_StatusCode
UA_UtcTime_encodeBinary(const UA_UtcTime *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UTCTIME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UtcTime_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UtcTime *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UTCTIME], NULL);
}

/* LocaleId */
static UA_INLINE size_t
UA_LocaleId_calcSizeBinary(const UA_LocaleId *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_LOCALEID]);
}
static UA_INLINE UA_StatusCode
UA_LocaleId_encodeBinary(const UA_LocaleId *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_LOCALEID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_LocaleId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_LocaleId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_LOCALEID], NULL);
}

/* TimeZoneDataType */
static UA_INLINE size_t
UA_TimeZoneDataType_calcSizeBinary(const UA_TimeZoneDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_TimeZoneDataType_encodeBinary(const UA_TimeZoneDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TimeZoneDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TimeZoneDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE], NULL);
}

/* Index */
static UA_INLINE size_t
UA_Index_calcSizeBinary(const UA_Index *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_INDEX]);
}
static UA_INLINE UA_StatusCode
UA_Index_encodeBinary(const UA_Index *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INDEX], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Index_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Index *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INDEX], NULL);
}

/* IntegerId */
static UA_INLINE size_t
UA_IntegerId_calcSizeBinary(const UA_IntegerId *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_INTEGERID]);
}
static UA_INLINE UA_StatusCode
UA_IntegerId_encodeBinary(const UA_IntegerId *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INTEGERID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IntegerId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IntegerId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INTEGERID], NULL);
}

/* ApplicationType */
static UA_INLINE size_t
UA_ApplicationType_calcSizeBinary(const UA_ApplicationType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
}
static UA_INLINE UA_StatusCode
UA_ApplicationType_encodeBinary(const UA_ApplicationType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ApplicationType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ApplicationType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_APPLICATIONTYPE], NULL);
}

/* ApplicationDescription */
static UA_INLINE size_t
UA_ApplicationDescription_calcSizeBinary(const UA_ApplicationDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_ApplicationDescription_encodeBinary(const UA_ApplicationDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ApplicationDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ApplicationDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION], NULL);
}

/* RequestHeader */
static UA_INLINE size_t
UA_RequestHeader_calcSizeBinary(const UA_RequestHeader *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REQUESTHEADER]);
}
static UA_INLINE UA_StatusCode
UA_RequestHeader_encodeBinary(const UA_RequestHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REQUESTHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RequestHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RequestHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REQUESTHEADER], NULL);
}

/* ResponseHeader */
static UA_INLINE size_t
UA_ResponseHeader_calcSizeBinary(const UA_ResponseHeader *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_RESPONSEHEADER]);
}
static UA_INLINE UA_StatusCode
UA_ResponseHeader_encodeBinary(const UA_ResponseHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RESPONSEHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ResponseHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ResponseHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RESPONSEHEADER], NULL);
}

/* VersionTime */
static UA_INLINE size_t
UA_VersionTime_calcSizeBinary(const UA_VersionTime *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VERSIONTIME]);
}
static UA_INLINE UA_StatusCode
UA_VersionTime_encodeBinary(const UA_VersionTime *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VERSIONTIME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_VersionTime_decodeBinary(const UA_ByteString *src, size_t *offset, UA_VersionTime *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VERSIONTIME], NULL);
}

/* ServiceFault */
static UA_INLINE size_t
UA_ServiceFault_calcSizeBinary(const UA_ServiceFault *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SERVICEFAULT]);
}
static UA_INLINE UA_StatusCode
UA_ServiceFault_encodeBinary(const UA_ServiceFault *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVICEFAULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServiceFault_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServiceFault *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVICEFAULT], NULL);
}

/* SessionlessInvokeRequestType */
static UA_INLINE size_t
UA_SessionlessInvokeRequestType_calcSizeBinary(const UA_SessionlessInvokeRequestType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE]);
}
static UA_INLINE UA_StatusCode
UA_SessionlessInvokeRequestType_encodeBinary(const UA_SessionlessInvokeRequestType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionlessInvokeRequestType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionlessInvokeRequestType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE], NULL);
}

/* SessionlessInvokeResponseType */
static UA_INLINE size_t
UA_SessionlessInvokeResponseType_calcSizeBinary(const UA_SessionlessInvokeResponseType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE]);
}
static UA_INLINE UA_StatusCode
UA_SessionlessInvokeResponseType_encodeBinary(const UA_SessionlessInvokeResponseType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionlessInvokeResponseType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionlessInvokeResponseType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE], NULL);
}

/* FindServersRequest */
static UA_INLINE size_t
UA_FindServersRequest_calcSizeBinary(const UA_FindServersRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_FindServersRequest_encodeBinary(const UA_FindServersRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST], NULL);
}

/* FindServersResponse */
static UA_INLINE size_t
UA_FindServersResponse_calcSizeBinary(const UA_FindServersResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_FindServersResponse_encodeBinary(const UA_FindServersResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE], NULL);
}

/* ServerOnNetwork */
static UA_INLINE size_t
UA_ServerOnNetwork_calcSizeBinary(const UA_ServerOnNetwork *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
}
static UA_INLINE UA_StatusCode
UA_ServerOnNetwork_encodeBinary(const UA_ServerOnNetwork *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERONNETWORK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerOnNetwork_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerOnNetwork *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERONNETWORK], NULL);
}

/* FindServersOnNetworkRequest */
static UA_INLINE size_t
UA_FindServersOnNetworkRequest_calcSizeBinary(const UA_FindServersOnNetworkRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkRequest_encodeBinary(const UA_FindServersOnNetworkRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersOnNetworkRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST], NULL);
}

/* FindServersOnNetworkResponse */
static UA_INLINE size_t
UA_FindServersOnNetworkResponse_calcSizeBinary(const UA_FindServersOnNetworkResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkResponse_encodeBinary(const UA_FindServersOnNetworkResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersOnNetworkResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE], NULL);
}

/* ApplicationInstanceCertificate */
static UA_INLINE size_t
UA_ApplicationInstanceCertificate_calcSizeBinary(const UA_ApplicationInstanceCertificate *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE]);
}
static UA_INLINE UA_StatusCode
UA_ApplicationInstanceCertificate_encodeBinary(const UA_ApplicationInstanceCertificate *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ApplicationInstanceCertificate_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ApplicationInstanceCertificate *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE], NULL);
}

/* MessageSecurityMode */
static UA_INLINE size_t
UA_MessageSecurityMode_calcSizeBinary(const UA_MessageSecurityMode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]);
}
static UA_INLINE UA_StatusCode
UA_MessageSecurityMode_encodeBinary(const UA_MessageSecurityMode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageSecurityMode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageSecurityMode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE], NULL);
}

/* UserTokenType */
static UA_INLINE size_t
UA_UserTokenType_calcSizeBinary(const UA_UserTokenType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_USERTOKENTYPE]);
}
static UA_INLINE UA_StatusCode
UA_UserTokenType_encodeBinary(const UA_UserTokenType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERTOKENTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserTokenType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserTokenType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERTOKENTYPE], NULL);
}

/* UserTokenPolicy */
static UA_INLINE size_t
UA_UserTokenPolicy_calcSizeBinary(const UA_UserTokenPolicy *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]);
}
static UA_INLINE UA_StatusCode
UA_UserTokenPolicy_encodeBinary(const UA_UserTokenPolicy *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERTOKENPOLICY], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserTokenPolicy_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserTokenPolicy *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERTOKENPOLICY], NULL);
}

/* EndpointDescription */
static UA_INLINE size_t
UA_EndpointDescription_calcSizeBinary(const UA_EndpointDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_EndpointDescription_encodeBinary(const UA_EndpointDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndpointDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndpointDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION], NULL);
}

/* GetEndpointsRequest */
static UA_INLINE size_t
UA_GetEndpointsRequest_calcSizeBinary(const UA_GetEndpointsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_GetEndpointsRequest_encodeBinary(const UA_GetEndpointsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetEndpointsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetEndpointsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST], NULL);
}

/* GetEndpointsResponse */
static UA_INLINE size_t
UA_GetEndpointsResponse_calcSizeBinary(const UA_GetEndpointsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_GetEndpointsResponse_encodeBinary(const UA_GetEndpointsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetEndpointsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetEndpointsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE], NULL);
}

/* RegisteredServer */
static UA_INLINE size_t
UA_RegisteredServer_calcSizeBinary(const UA_RegisteredServer *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTEREDSERVER]);
}
static UA_INLINE UA_StatusCode
UA_RegisteredServer_encodeBinary(const UA_RegisteredServer *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTEREDSERVER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisteredServer_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisteredServer *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTEREDSERVER], NULL);
}

/* RegisterServerRequest */
static UA_INLINE size_t
UA_RegisterServerRequest_calcSizeBinary(const UA_RegisterServerRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_RegisterServerRequest_encodeBinary(const UA_RegisterServerRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServerRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServerRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST], NULL);
}

/* RegisterServerResponse */
static UA_INLINE size_t
UA_RegisterServerResponse_calcSizeBinary(const UA_RegisterServerResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_RegisterServerResponse_encodeBinary(const UA_RegisterServerResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServerResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServerResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE], NULL);
}

/* DiscoveryConfiguration */
static UA_INLINE size_t
UA_DiscoveryConfiguration_calcSizeBinary(const UA_DiscoveryConfiguration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION]);
}
static UA_INLINE UA_StatusCode
UA_DiscoveryConfiguration_encodeBinary(const UA_DiscoveryConfiguration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DiscoveryConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DiscoveryConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION], NULL);
}

/* MdnsDiscoveryConfiguration */
static UA_INLINE size_t
UA_MdnsDiscoveryConfiguration_calcSizeBinary(const UA_MdnsDiscoveryConfiguration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION]);
}
static UA_INLINE UA_StatusCode
UA_MdnsDiscoveryConfiguration_encodeBinary(const UA_MdnsDiscoveryConfiguration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MdnsDiscoveryConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MdnsDiscoveryConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION], NULL);
}

/* RegisterServer2Request */
static UA_INLINE size_t
UA_RegisterServer2Request_calcSizeBinary(const UA_RegisterServer2Request *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST]);
}
static UA_INLINE UA_StatusCode
UA_RegisterServer2Request_encodeBinary(const UA_RegisterServer2Request *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServer2Request_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServer2Request *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST], NULL);
}

/* RegisterServer2Response */
static UA_INLINE size_t
UA_RegisterServer2Response_calcSizeBinary(const UA_RegisterServer2Response *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_RegisterServer2Response_encodeBinary(const UA_RegisterServer2Response *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServer2Response_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServer2Response *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE], NULL);
}

/* SecurityTokenRequestType */
static UA_INLINE size_t
UA_SecurityTokenRequestType_calcSizeBinary(const UA_SecurityTokenRequestType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]);
}
static UA_INLINE UA_StatusCode
UA_SecurityTokenRequestType_encodeBinary(const UA_SecurityTokenRequestType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SecurityTokenRequestType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SecurityTokenRequestType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE], NULL);
}

/* ChannelSecurityToken */
static UA_INLINE size_t
UA_ChannelSecurityToken_calcSizeBinary(const UA_ChannelSecurityToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_ChannelSecurityToken_encodeBinary(const UA_ChannelSecurityToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ChannelSecurityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ChannelSecurityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN], NULL);
}

/* OpenSecureChannelRequest */
static UA_INLINE size_t
UA_OpenSecureChannelRequest_calcSizeBinary(const UA_OpenSecureChannelRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelRequest_encodeBinary(const UA_OpenSecureChannelRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenSecureChannelRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST], NULL);
}

/* OpenSecureChannelResponse */
static UA_INLINE size_t
UA_OpenSecureChannelResponse_calcSizeBinary(const UA_OpenSecureChannelResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelResponse_encodeBinary(const UA_OpenSecureChannelResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenSecureChannelResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE], NULL);
}

/* CloseSecureChannelRequest */
static UA_INLINE size_t
UA_CloseSecureChannelRequest_calcSizeBinary(const UA_CloseSecureChannelRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelRequest_encodeBinary(const UA_CloseSecureChannelRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSecureChannelRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST], NULL);
}

/* CloseSecureChannelResponse */
static UA_INLINE size_t
UA_CloseSecureChannelResponse_calcSizeBinary(const UA_CloseSecureChannelResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelResponse_encodeBinary(const UA_CloseSecureChannelResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSecureChannelResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE], NULL);
}

/* SignedSoftwareCertificate */
static UA_INLINE size_t
UA_SignedSoftwareCertificate_calcSizeBinary(const UA_SignedSoftwareCertificate *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
}
static UA_INLINE UA_StatusCode
UA_SignedSoftwareCertificate_encodeBinary(const UA_SignedSoftwareCertificate *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SignedSoftwareCertificate_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SignedSoftwareCertificate *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE], NULL);
}

/* SessionAuthenticationToken */
static UA_INLINE size_t
UA_SessionAuthenticationToken_calcSizeBinary(const UA_SessionAuthenticationToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_SessionAuthenticationToken_encodeBinary(const UA_SessionAuthenticationToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionAuthenticationToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionAuthenticationToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN], NULL);
}

/* SignatureData */
static UA_INLINE size_t
UA_SignatureData_calcSizeBinary(const UA_SignatureData *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SIGNATUREDATA]);
}
static UA_INLINE UA_StatusCode
UA_SignatureData_encodeBinary(const UA_SignatureData *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIGNATUREDATA], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SignatureData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SignatureData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIGNATUREDATA], NULL);
}

/* CreateSessionRequest */
static UA_INLINE size_t
UA_CreateSessionRequest_calcSizeBinary(const UA_CreateSessionRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CreateSessionRequest_encodeBinary(const UA_CreateSessionRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSessionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSessionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST], NULL);
}

/* CreateSessionResponse */
static UA_INLINE size_t
UA_CreateSessionResponse_calcSizeBinary(const UA_CreateSessionResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CreateSessionResponse_encodeBinary(const UA_CreateSessionResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSessionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSessionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE], NULL);
}

/* UserIdentityToken */
static UA_INLINE size_t
UA_UserIdentityToken_calcSizeBinary(const UA_UserIdentityToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_UserIdentityToken_encodeBinary(const UA_UserIdentityToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN], NULL);
}

/* AnonymousIdentityToken */
static UA_INLINE size_t
UA_AnonymousIdentityToken_calcSizeBinary(const UA_AnonymousIdentityToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_AnonymousIdentityToken_encodeBinary(const UA_AnonymousIdentityToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AnonymousIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AnonymousIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN], NULL);
}

/* UserNameIdentityToken */
static UA_INLINE size_t
UA_UserNameIdentityToken_calcSizeBinary(const UA_UserNameIdentityToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_UserNameIdentityToken_encodeBinary(const UA_UserNameIdentityToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserNameIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserNameIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN], NULL);
}

/* X509IdentityToken */
static UA_INLINE size_t
UA_X509IdentityToken_calcSizeBinary(const UA_X509IdentityToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_X509IdentityToken_encodeBinary(const UA_X509IdentityToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_X509IdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_X509IdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN], NULL);
}

/* IssuedIdentityToken */
static UA_INLINE size_t
UA_IssuedIdentityToken_calcSizeBinary(const UA_IssuedIdentityToken *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN]);
}
static UA_INLINE UA_StatusCode
UA_IssuedIdentityToken_encodeBinary(const UA_IssuedIdentityToken *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IssuedIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IssuedIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN], NULL);
}

/* RsaEncryptedSecret */
static UA_INLINE size_t
UA_RsaEncryptedSecret_calcSizeBinary(const UA_RsaEncryptedSecret *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET]);
}
static UA_INLINE UA_StatusCode
UA_RsaEncryptedSecret_encodeBinary(const UA_RsaEncryptedSecret *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RsaEncryptedSecret_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RsaEncryptedSecret *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET], NULL);
}

/* ActivateSessionRequest */
static UA_INLINE size_t
UA_ActivateSessionRequest_calcSizeBinary(const UA_ActivateSessionRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_ActivateSessionRequest_encodeBinary(const UA_ActivateSessionRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActivateSessionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActivateSessionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST], NULL);
}

/* ActivateSessionResponse */
static UA_INLINE size_t
UA_ActivateSessionResponse_calcSizeBinary(const UA_ActivateSessionResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_ActivateSessionResponse_encodeBinary(const UA_ActivateSessionResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActivateSessionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActivateSessionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE], NULL);
}

/* CloseSessionRequest */
static UA_INLINE size_t
UA_CloseSessionRequest_calcSizeBinary(const UA_CloseSessionRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CloseSessionRequest_encodeBinary(const UA_CloseSessionRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSessionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSessionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST], NULL);
}

/* CloseSessionResponse */
static UA_INLINE size_t
UA_CloseSessionResponse_calcSizeBinary(const UA_CloseSessionResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CloseSessionResponse_encodeBinary(const UA_CloseSessionResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSessionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSessionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE], NULL);
}

/* CancelRequest */
static UA_INLINE size_t
UA_CancelRequest_calcSizeBinary(const UA_CancelRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CANCELREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CancelRequest_encodeBinary(const UA_CancelRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CANCELREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CancelRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CancelRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CANCELREQUEST], NULL);
}

/* CancelResponse */
static UA_INLINE size_t
UA_CancelResponse_calcSizeBinary(const UA_CancelResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CANCELRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CancelResponse_encodeBinary(const UA_CancelResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CANCELRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CancelResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CancelResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CANCELRESPONSE], NULL);
}

/* NodeAttributesMask */
static UA_INLINE size_t
UA_NodeAttributesMask_calcSizeBinary(const UA_NodeAttributesMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]);
}
static UA_INLINE UA_StatusCode
UA_NodeAttributesMask_encodeBinary(const UA_NodeAttributesMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeAttributesMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeAttributesMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK], NULL);
}

/* NodeAttributes */
static UA_INLINE size_t
UA_NodeAttributes_calcSizeBinary(const UA_NodeAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_NodeAttributes_encodeBinary(const UA_NodeAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTES], NULL);
}

/* ObjectAttributes */
static UA_INLINE size_t
UA_ObjectAttributes_calcSizeBinary(const UA_ObjectAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_ObjectAttributes_encodeBinary(const UA_ObjectAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ObjectAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ObjectAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], NULL);
}

/* VariableAttributes */
static UA_INLINE size_t
UA_VariableAttributes_calcSizeBinary(const UA_VariableAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_VariableAttributes_encodeBinary(const UA_VariableAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_VariableAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_VariableAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES], NULL);
}

/* MethodAttributes */
static UA_INLINE size_t
UA_MethodAttributes_calcSizeBinary(const UA_MethodAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_MethodAttributes_encodeBinary(const UA_MethodAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MethodAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MethodAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], NULL);
}

/* ObjectTypeAttributes */
static UA_INLINE size_t
UA_ObjectTypeAttributes_calcSizeBinary(const UA_ObjectTypeAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_ObjectTypeAttributes_encodeBinary(const UA_ObjectTypeAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ObjectTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ObjectTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES], NULL);
}

/* VariableTypeAttributes */
static UA_INLINE size_t
UA_VariableTypeAttributes_calcSizeBinary(const UA_VariableTypeAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_VariableTypeAttributes_encodeBinary(const UA_VariableTypeAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_VariableTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_VariableTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES], NULL);
}

/* ReferenceTypeAttributes */
static UA_INLINE size_t
UA_ReferenceTypeAttributes_calcSizeBinary(const UA_ReferenceTypeAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_ReferenceTypeAttributes_encodeBinary(const UA_ReferenceTypeAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReferenceTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReferenceTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES], NULL);
}

/* DataTypeAttributes */
static UA_INLINE size_t
UA_DataTypeAttributes_calcSizeBinary(const UA_DataTypeAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_DataTypeAttributes_encodeBinary(const UA_DataTypeAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES], NULL);
}

/* ViewAttributes */
static UA_INLINE size_t
UA_ViewAttributes_calcSizeBinary(const UA_ViewAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_ViewAttributes_encodeBinary(const UA_ViewAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ViewAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ViewAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES], NULL);
}

/* GenericAttributeValue */
static UA_INLINE size_t
UA_GenericAttributeValue_calcSizeBinary(const UA_GenericAttributeValue *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE]);
}
static UA_INLINE UA_StatusCode
UA_GenericAttributeValue_encodeBinary(const UA_GenericAttributeValue *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GenericAttributeValue_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GenericAttributeValue *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE], NULL);
}

/* GenericAttributes */
static UA_INLINE size_t
UA_GenericAttributes_calcSizeBinary(const UA_GenericAttributes *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES]);
}
static UA_INLINE UA_StatusCode
UA_GenericAttributes_encodeBinary(const UA_GenericAttributes *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GenericAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GenericAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES], NULL);
}

/* AddNodesItem */
static UA_INLINE size_t
UA_AddNodesItem_calcSizeBinary(const UA_AddNodesItem *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESITEM]);
}
static UA_INLINE UA_StatusCode
UA_AddNodesItem_encodeBinary(const UA_AddNodesItem *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESITEM], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESITEM], NULL);
}

/* AddNodesResult */
static UA_INLINE size_t
UA_AddNodesResult_calcSizeBinary(const UA_AddNodesResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESRESULT]);
}
static UA_INLINE UA_StatusCode
UA_AddNodesResult_encodeBinary(const UA_AddNodesResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESRESULT], NULL);
}

/* AddNodesRequest */
static UA_INLINE size_t
UA_AddNodesRequest_calcSizeBinary(const UA_AddNodesRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_AddNodesRequest_encodeBinary(const UA_AddNodesRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESREQUEST], NULL);
}

/* AddNodesResponse */
static UA_INLINE size_t
UA_AddNodesResponse_calcSizeBinary(const UA_AddNodesResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_AddNodesResponse_encodeBinary(const UA_AddNodesResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE], NULL);
}

/* AddReferencesItem */
static UA_INLINE size_t
UA_AddReferencesItem_calcSizeBinary(const UA_AddReferencesItem *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesItem_encodeBinary(const UA_AddReferencesItem *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddReferencesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM], NULL);
}

/* AddReferencesRequest */
static UA_INLINE size_t
UA_AddReferencesRequest_calcSizeBinary(const UA_AddReferencesRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesRequest_encodeBinary(const UA_AddReferencesRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddReferencesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST], NULL);
}

/* AddReferencesResponse */
static UA_INLINE size_t
UA_AddReferencesResponse_calcSizeBinary(const UA_AddReferencesResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesResponse_encodeBinary(const UA_AddReferencesResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddReferencesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE], NULL);
}

/* DeleteNodesItem */
static UA_INLINE size_t
UA_DeleteNodesItem_calcSizeBinary(const UA_DeleteNodesItem *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESITEM]);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesItem_encodeBinary(const UA_DeleteNodesItem *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESITEM], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteNodesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETENODESITEM], NULL);
}

/* DeleteNodesRequest */
static UA_INLINE size_t
UA_DeleteNodesRequest_calcSizeBinary(const UA_DeleteNodesRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesRequest_encodeBinary(const UA_DeleteNodesRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETENODESREQUEST], NULL);
}

/* DeleteNodesResponse */
static UA_INLINE size_t
UA_DeleteNodesResponse_calcSizeBinary(const UA_DeleteNodesResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesResponse_encodeBinary(const UA_DeleteNodesResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE], NULL);
}

/* DeleteReferencesItem */
static UA_INLINE size_t
UA_DeleteReferencesItem_calcSizeBinary(const UA_DeleteReferencesItem *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesItem_encodeBinary(const UA_DeleteReferencesItem *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteReferencesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM], NULL);
}

/* DeleteReferencesRequest */
static UA_INLINE size_t
UA_DeleteReferencesRequest_calcSizeBinary(const UA_DeleteReferencesRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesRequest_encodeBinary(const UA_DeleteReferencesRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteReferencesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST], NULL);
}

/* DeleteReferencesResponse */
static UA_INLINE size_t
UA_DeleteReferencesResponse_calcSizeBinary(const UA_DeleteReferencesResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesResponse_encodeBinary(const UA_DeleteReferencesResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteReferencesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE], NULL);
}

/* AttributeWriteMask */
static UA_INLINE size_t
UA_AttributeWriteMask_calcSizeBinary(const UA_AttributeWriteMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK]);
}
static UA_INLINE UA_StatusCode
UA_AttributeWriteMask_encodeBinary(const UA_AttributeWriteMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AttributeWriteMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AttributeWriteMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK], NULL);
}

/* BrowseDirection */
static UA_INLINE size_t
UA_BrowseDirection_calcSizeBinary(const UA_BrowseDirection *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSEDIRECTION]);
}
static UA_INLINE UA_StatusCode
UA_BrowseDirection_encodeBinary(const UA_BrowseDirection *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEDIRECTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseDirection_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseDirection *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEDIRECTION], NULL);
}

/* ViewDescription */
static UA_INLINE size_t
UA_ViewDescription_calcSizeBinary(const UA_ViewDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_ViewDescription_encodeBinary(const UA_ViewDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ViewDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ViewDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION], NULL);
}

/* BrowseDescription */
static UA_INLINE size_t
UA_BrowseDescription_calcSizeBinary(const UA_BrowseDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_BrowseDescription_encodeBinary(const UA_BrowseDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION], NULL);
}

/* BrowseResultMask */
static UA_INLINE size_t
UA_BrowseResultMask_calcSizeBinary(const UA_BrowseResultMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESULTMASK]);
}
static UA_INLINE UA_StatusCode
UA_BrowseResultMask_encodeBinary(const UA_BrowseResultMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESULTMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseResultMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseResultMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSERESULTMASK], NULL);
}

/* ReferenceDescription */
static UA_INLINE size_t
UA_ReferenceDescription_calcSizeBinary(const UA_ReferenceDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_ReferenceDescription_encodeBinary(const UA_ReferenceDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReferenceDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReferenceDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION], NULL);
}

/* ContinuationPoint */
static UA_INLINE size_t
UA_ContinuationPoint_calcSizeBinary(const UA_ContinuationPoint *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT]);
}
static UA_INLINE UA_StatusCode
UA_ContinuationPoint_encodeBinary(const UA_ContinuationPoint *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContinuationPoint_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContinuationPoint *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT], NULL);
}

/* BrowseResult */
static UA_INLINE size_t
UA_BrowseResult_calcSizeBinary(const UA_BrowseResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESULT]);
}
static UA_INLINE UA_StatusCode
UA_BrowseResult_encodeBinary(const UA_BrowseResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSERESULT], NULL);
}

/* BrowseRequest */
static UA_INLINE size_t
UA_BrowseRequest_calcSizeBinary(const UA_BrowseRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSEREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_BrowseRequest_encodeBinary(const UA_BrowseRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEREQUEST], NULL);
}

/* BrowseResponse */
static UA_INLINE size_t
UA_BrowseResponse_calcSizeBinary(const UA_BrowseResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_BrowseResponse_encodeBinary(const UA_BrowseResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSERESPONSE], NULL);
}

/* BrowseNextRequest */
static UA_INLINE size_t
UA_BrowseNextRequest_calcSizeBinary(const UA_BrowseNextRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_BrowseNextRequest_encodeBinary(const UA_BrowseNextRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseNextRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseNextRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST], NULL);
}

/* BrowseNextResponse */
static UA_INLINE size_t
UA_BrowseNextResponse_calcSizeBinary(const UA_BrowseNextResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_BrowseNextResponse_encodeBinary(const UA_BrowseNextResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseNextResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseNextResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE], NULL);
}

/* RelativePathElement */
static UA_INLINE size_t
UA_RelativePathElement_calcSizeBinary(const UA_RelativePathElement *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
}
static UA_INLINE UA_StatusCode
UA_RelativePathElement_encodeBinary(const UA_RelativePathElement *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RelativePathElement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RelativePathElement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT], NULL);
}

/* RelativePath */
static UA_INLINE size_t
UA_RelativePath_calcSizeBinary(const UA_RelativePath *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_RELATIVEPATH]);
}
static UA_INLINE UA_StatusCode
UA_RelativePath_encodeBinary(const UA_RelativePath *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RELATIVEPATH], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RelativePath_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RelativePath *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RELATIVEPATH], NULL);
}

/* BrowsePath */
static UA_INLINE size_t
UA_BrowsePath_calcSizeBinary(const UA_BrowsePath *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATH]);
}
static UA_INLINE UA_StatusCode
UA_BrowsePath_encodeBinary(const UA_BrowsePath *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATH], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowsePath_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowsePath *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEPATH], NULL);
}

/* BrowsePathTarget */
static UA_INLINE size_t
UA_BrowsePathTarget_calcSizeBinary(const UA_BrowsePathTarget *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]);
}
static UA_INLINE UA_StatusCode
UA_BrowsePathTarget_encodeBinary(const UA_BrowsePathTarget *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowsePathTarget_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowsePathTarget *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET], NULL);
}

/* BrowsePathResult */
static UA_INLINE size_t
UA_BrowsePathResult_calcSizeBinary(const UA_BrowsePathResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]);
}
static UA_INLINE UA_StatusCode
UA_BrowsePathResult_encodeBinary(const UA_BrowsePathResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowsePathResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowsePathResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT], NULL);
}

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_INLINE size_t
UA_TranslateBrowsePathsToNodeIdsRequest_calcSizeBinary(const UA_TranslateBrowsePathsToNodeIdsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsRequest_encodeBinary(const UA_TranslateBrowsePathsToNodeIdsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TranslateBrowsePathsToNodeIdsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST], NULL);
}

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_INLINE size_t
UA_TranslateBrowsePathsToNodeIdsResponse_calcSizeBinary(const UA_TranslateBrowsePathsToNodeIdsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsResponse_encodeBinary(const UA_TranslateBrowsePathsToNodeIdsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TranslateBrowsePathsToNodeIdsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE], NULL);
}

/* RegisterNodesRequest */
static UA_INLINE size_t
UA_RegisterNodesRequest_calcSizeBinary(const UA_RegisterNodesRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_RegisterNodesRequest_encodeBinary(const UA_RegisterNodesRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST], NULL);
}

/* RegisterNodesResponse */
static UA_INLINE size_t
UA_RegisterNodesResponse_calcSizeBinary(const UA_RegisterNodesResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_RegisterNodesResponse_encodeBinary(const UA_RegisterNodesResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE], NULL);
}

/* UnregisterNodesRequest */
static UA_INLINE size_t
UA_UnregisterNodesRequest_calcSizeBinary(const UA_UnregisterNodesRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_UnregisterNodesRequest_encodeBinary(const UA_UnregisterNodesRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UnregisterNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UnregisterNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST], NULL);
}

/* UnregisterNodesResponse */
static UA_INLINE size_t
UA_UnregisterNodesResponse_calcSizeBinary(const UA_UnregisterNodesResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_UnregisterNodesResponse_encodeBinary(const UA_UnregisterNodesResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UnregisterNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UnregisterNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE], NULL);
}

/* Counter */
static UA_INLINE size_t
UA_Counter_calcSizeBinary(const UA_Counter *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_COUNTER]);
}
static UA_INLINE UA_StatusCode
UA_Counter_encodeBinary(const UA_Counter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_COUNTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Counter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Counter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_COUNTER], NULL);
}

/* Time */
static UA_INLINE size_t
UA_Time_calcSizeBinary(const UA_Time *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TIME]);
}
static UA_INLINE UA_StatusCode
UA_Time_encodeBinary(const UA_Time *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TIME], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Time_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Time *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TIME], NULL);
}

/* Date */
static UA_INLINE size_t
UA_Date_calcSizeBinary(const UA_Date *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATE]);
}
static UA_INLINE UA_StatusCode
UA_Date_encodeBinary(const UA_Date *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Date_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Date *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATE], NULL);
}

/* EndpointConfiguration */
static UA_INLINE size_t
UA_EndpointConfiguration_calcSizeBinary(const UA_EndpointConfiguration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION]);
}
static UA_INLINE UA_StatusCode
UA_EndpointConfiguration_encodeBinary(const UA_EndpointConfiguration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndpointConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndpointConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION], NULL);
}

/* QueryDataDescription */
static UA_INLINE size_t
UA_QueryDataDescription_calcSizeBinary(const UA_QueryDataDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_QueryDataDescription_encodeBinary(const UA_QueryDataDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryDataDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryDataDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION], NULL);
}

/* NodeTypeDescription */
static UA_INLINE size_t
UA_NodeTypeDescription_calcSizeBinary(const UA_NodeTypeDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_NodeTypeDescription_encodeBinary(const UA_NodeTypeDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeTypeDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeTypeDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION], NULL);
}

/* FilterOperator */
static UA_INLINE size_t
UA_FilterOperator_calcSizeBinary(const UA_FilterOperator *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FILTEROPERATOR]);
}
static UA_INLINE UA_StatusCode
UA_FilterOperator_encodeBinary(const UA_FilterOperator *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FILTEROPERATOR], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FilterOperator_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FilterOperator *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FILTEROPERATOR], NULL);
}

/* QueryDataSet */
static UA_INLINE size_t
UA_QueryDataSet_calcSizeBinary(const UA_QueryDataSet *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUERYDATASET]);
}
static UA_INLINE UA_StatusCode
UA_QueryDataSet_encodeBinary(const UA_QueryDataSet *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYDATASET], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryDataSet_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryDataSet *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYDATASET], NULL);
}

/* NodeReference */
static UA_INLINE size_t
UA_NodeReference_calcSizeBinary(const UA_NodeReference *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NODEREFERENCE]);
}
static UA_INLINE UA_StatusCode
UA_NodeReference_encodeBinary(const UA_NodeReference *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEREFERENCE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeReference_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeReference *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEREFERENCE], NULL);
}

/* ContentFilterElement */
static UA_INLINE size_t
UA_ContentFilterElement_calcSizeBinary(const UA_ContentFilterElement *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterElement_encodeBinary(const UA_ContentFilterElement *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterElement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilterElement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT], NULL);
}

/* ContentFilter */
static UA_INLINE size_t
UA_ContentFilter_calcSizeBinary(const UA_ContentFilter *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTER]);
}
static UA_INLINE UA_StatusCode
UA_ContentFilter_encodeBinary(const UA_ContentFilter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTER], NULL);
}

/* FilterOperand */
static UA_INLINE size_t
UA_FilterOperand_calcSizeBinary(const UA_FilterOperand *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FILTEROPERAND]);
}
static UA_INLINE UA_StatusCode
UA_FilterOperand_encodeBinary(const UA_FilterOperand *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FILTEROPERAND], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FilterOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FilterOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FILTEROPERAND], NULL);
}

/* ElementOperand */
static UA_INLINE size_t
UA_ElementOperand_calcSizeBinary(const UA_ElementOperand *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ELEMENTOPERAND]);
}
static UA_INLINE UA_StatusCode
UA_ElementOperand_encodeBinary(const UA_ElementOperand *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ELEMENTOPERAND], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ElementOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ElementOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ELEMENTOPERAND], NULL);
}

/* LiteralOperand */
static UA_INLINE size_t
UA_LiteralOperand_calcSizeBinary(const UA_LiteralOperand *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_LITERALOPERAND]);
}
static UA_INLINE UA_StatusCode
UA_LiteralOperand_encodeBinary(const UA_LiteralOperand *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_LITERALOPERAND], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_LiteralOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_LiteralOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_LITERALOPERAND], NULL);
}

/* AttributeOperand */
static UA_INLINE size_t
UA_AttributeOperand_calcSizeBinary(const UA_AttributeOperand *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND]);
}
static UA_INLINE UA_StatusCode
UA_AttributeOperand_encodeBinary(const UA_AttributeOperand *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AttributeOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AttributeOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND], NULL);
}

/* SimpleAttributeOperand */
static UA_INLINE size_t
UA_SimpleAttributeOperand_calcSizeBinary(const UA_SimpleAttributeOperand *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND]);
}
static UA_INLINE UA_StatusCode
UA_SimpleAttributeOperand_encodeBinary(const UA_SimpleAttributeOperand *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SimpleAttributeOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SimpleAttributeOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND], NULL);
}

/* ContentFilterElementResult */
static UA_INLINE size_t
UA_ContentFilterElementResult_calcSizeBinary(const UA_ContentFilterElementResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterElementResult_encodeBinary(const UA_ContentFilterElementResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterElementResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilterElementResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT], NULL);
}

/* ContentFilterResult */
static UA_INLINE size_t
UA_ContentFilterResult_calcSizeBinary(const UA_ContentFilterResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterResult_encodeBinary(const UA_ContentFilterResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilterResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT], NULL);
}

/* ParsingResult */
static UA_INLINE size_t
UA_ParsingResult_calcSizeBinary(const UA_ParsingResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PARSINGRESULT]);
}
static UA_INLINE UA_StatusCode
UA_ParsingResult_encodeBinary(const UA_ParsingResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PARSINGRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ParsingResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ParsingResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PARSINGRESULT], NULL);
}

/* QueryFirstRequest */
static UA_INLINE size_t
UA_QueryFirstRequest_calcSizeBinary(const UA_QueryFirstRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_QueryFirstRequest_encodeBinary(const UA_QueryFirstRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryFirstRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryFirstRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST], NULL);
}

/* QueryFirstResponse */
static UA_INLINE size_t
UA_QueryFirstResponse_calcSizeBinary(const UA_QueryFirstResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_QueryFirstResponse_encodeBinary(const UA_QueryFirstResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryFirstResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryFirstResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE], NULL);
}

/* QueryNextRequest */
static UA_INLINE size_t
UA_QueryNextRequest_calcSizeBinary(const UA_QueryNextRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_QueryNextRequest_encodeBinary(const UA_QueryNextRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryNextRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryNextRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST], NULL);
}

/* QueryNextResponse */
static UA_INLINE size_t
UA_QueryNextResponse_calcSizeBinary(const UA_QueryNextResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_QueryNextResponse_encodeBinary(const UA_QueryNextResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryNextResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryNextResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE], NULL);
}

/* TimestampsToReturn */
static UA_INLINE size_t
UA_TimestampsToReturn_calcSizeBinary(const UA_TimestampsToReturn *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]);
}
static UA_INLINE UA_StatusCode
UA_TimestampsToReturn_encodeBinary(const UA_TimestampsToReturn *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TimestampsToReturn_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TimestampsToReturn *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN], NULL);
}

/* ReadValueId */
static UA_INLINE size_t
UA_ReadValueId_calcSizeBinary(const UA_ReadValueId *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READVALUEID]);
}
static UA_INLINE UA_StatusCode
UA_ReadValueId_encodeBinary(const UA_ReadValueId *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READVALUEID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadValueId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadValueId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READVALUEID], NULL);
}

/* ReadRequest */
static UA_INLINE size_t
UA_ReadRequest_calcSizeBinary(const UA_ReadRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_ReadRequest_encodeBinary(const UA_ReadRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READREQUEST], NULL);
}

/* ReadResponse */
static UA_INLINE size_t
UA_ReadResponse_calcSizeBinary(const UA_ReadResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_ReadResponse_encodeBinary(const UA_ReadResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READRESPONSE], NULL);
}

/* HistoryReadValueId */
static UA_INLINE size_t
UA_HistoryReadValueId_calcSizeBinary(const UA_HistoryReadValueId *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID]);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadValueId_encodeBinary(const UA_HistoryReadValueId *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadValueId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryReadValueId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID], NULL);
}

/* HistoryReadResult */
static UA_INLINE size_t
UA_HistoryReadResult_calcSizeBinary(const UA_HistoryReadResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADRESULT]);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadResult_encodeBinary(const UA_HistoryReadResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryReadResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYREADRESULT], NULL);
}

/* HistoryReadDetails */
static UA_INLINE size_t
UA_HistoryReadDetails_calcSizeBinary(const UA_HistoryReadDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadDetails_encodeBinary(const UA_HistoryReadDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryReadDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS], NULL);
}

/* ReadRawModifiedDetails */
static UA_INLINE size_t
UA_ReadRawModifiedDetails_calcSizeBinary(const UA_ReadRawModifiedDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_ReadRawModifiedDetails_encodeBinary(const UA_ReadRawModifiedDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadRawModifiedDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadRawModifiedDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS], NULL);
}

/* ReadAtTimeDetails */
static UA_INLINE size_t
UA_ReadAtTimeDetails_calcSizeBinary(const UA_ReadAtTimeDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READATTIMEDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_ReadAtTimeDetails_encodeBinary(const UA_ReadAtTimeDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READATTIMEDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadAtTimeDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadAtTimeDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READATTIMEDETAILS], NULL);
}

/* ReadAnnotationDataDetails */
static UA_INLINE size_t
UA_ReadAnnotationDataDetails_calcSizeBinary(const UA_ReadAnnotationDataDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS]);
}
static UA_INLINE UA_StatusCode
UA_ReadAnnotationDataDetails_encodeBinary(const UA_ReadAnnotationDataDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadAnnotationDataDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadAnnotationDataDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS], NULL);
}

/* HistoryData */
static UA_INLINE size_t
UA_HistoryData_calcSizeBinary(const UA_HistoryData *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYDATA]);
}
static UA_INLINE UA_StatusCode
UA_HistoryData_encodeBinary(const UA_HistoryData *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYDATA], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYDATA], NULL);
}

/* HistoryReadRequest */
static UA_INLINE size_t
UA_HistoryReadRequest_calcSizeBinary(const UA_HistoryReadRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadRequest_encodeBinary(const UA_HistoryReadRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryReadRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST], NULL);
}

/* HistoryReadResponse */
static UA_INLINE size_t
UA_HistoryReadResponse_calcSizeBinary(const UA_HistoryReadResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadResponse_encodeBinary(const UA_HistoryReadResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryReadResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryReadResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE], NULL);
}

/* WriteValue */
static UA_INLINE size_t
UA_WriteValue_calcSizeBinary(const UA_WriteValue *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_WRITEVALUE]);
}
static UA_INLINE UA_StatusCode
UA_WriteValue_encodeBinary(const UA_WriteValue *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITEVALUE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriteValue_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriteValue *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITEVALUE], NULL);
}

/* WriteRequest */
static UA_INLINE size_t
UA_WriteRequest_calcSizeBinary(const UA_WriteRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_WRITEREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_WriteRequest_encodeBinary(const UA_WriteRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITEREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriteRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriteRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITEREQUEST], NULL);
}

/* WriteResponse */
static UA_INLINE size_t
UA_WriteResponse_calcSizeBinary(const UA_WriteResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_WRITERESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_WriteResponse_encodeBinary(const UA_WriteResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITERESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriteResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriteResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITERESPONSE], NULL);
}

/* HistoryUpdateDetails */
static UA_INLINE size_t
UA_HistoryUpdateDetails_calcSizeBinary(const UA_HistoryUpdateDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateDetails_encodeBinary(const UA_HistoryUpdateDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryUpdateDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS], NULL);
}

/* HistoryUpdateType */
static UA_INLINE size_t
UA_HistoryUpdateType_calcSizeBinary(const UA_HistoryUpdateType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE]);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateType_encodeBinary(const UA_HistoryUpdateType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryUpdateType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE], NULL);
}

/* PerformUpdateType */
static UA_INLINE size_t
UA_PerformUpdateType_calcSizeBinary(const UA_PerformUpdateType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE]);
}
static UA_INLINE UA_StatusCode
UA_PerformUpdateType_encodeBinary(const UA_PerformUpdateType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PerformUpdateType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PerformUpdateType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE], NULL);
}

/* UpdateDataDetails */
static UA_INLINE size_t
UA_UpdateDataDetails_calcSizeBinary(const UA_UpdateDataDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS]);
}
static UA_INLINE UA_StatusCode
UA_UpdateDataDetails_encodeBinary(const UA_UpdateDataDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UpdateDataDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UpdateDataDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS], NULL);
}

/* UpdateStructureDataDetails */
static UA_INLINE size_t
UA_UpdateStructureDataDetails_calcSizeBinary(const UA_UpdateStructureDataDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS]);
}
static UA_INLINE UA_StatusCode
UA_UpdateStructureDataDetails_encodeBinary(const UA_UpdateStructureDataDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UpdateStructureDataDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UpdateStructureDataDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS], NULL);
}

/* DeleteRawModifiedDetails */
static UA_INLINE size_t
UA_DeleteRawModifiedDetails_calcSizeBinary(const UA_DeleteRawModifiedDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_DeleteRawModifiedDetails_encodeBinary(const UA_DeleteRawModifiedDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteRawModifiedDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteRawModifiedDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS], NULL);
}

/* DeleteAtTimeDetails */
static UA_INLINE size_t
UA_DeleteAtTimeDetails_calcSizeBinary(const UA_DeleteAtTimeDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_DeleteAtTimeDetails_encodeBinary(const UA_DeleteAtTimeDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteAtTimeDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteAtTimeDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS], NULL);
}

/* DeleteEventDetails */
static UA_INLINE size_t
UA_DeleteEventDetails_calcSizeBinary(const UA_DeleteEventDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_DeleteEventDetails_encodeBinary(const UA_DeleteEventDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteEventDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteEventDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS], NULL);
}

/* HistoryUpdateResult */
static UA_INLINE size_t
UA_HistoryUpdateResult_calcSizeBinary(const UA_HistoryUpdateResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT]);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateResult_encodeBinary(const UA_HistoryUpdateResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryUpdateResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT], NULL);
}

/* HistoryUpdateRequest */
static UA_INLINE size_t
UA_HistoryUpdateRequest_calcSizeBinary(const UA_HistoryUpdateRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateRequest_encodeBinary(const UA_HistoryUpdateRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryUpdateRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST], NULL);
}

/* HistoryUpdateResponse */
static UA_INLINE size_t
UA_HistoryUpdateResponse_calcSizeBinary(const UA_HistoryUpdateResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateResponse_encodeBinary(const UA_HistoryUpdateResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryUpdateResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryUpdateResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE], NULL);
}

/* CallMethodRequest */
static UA_INLINE size_t
UA_CallMethodRequest_calcSizeBinary(const UA_CallMethodRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CallMethodRequest_encodeBinary(const UA_CallMethodRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallMethodRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallMethodRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST], NULL);
}

/* CallMethodResult */
static UA_INLINE size_t
UA_CallMethodResult_calcSizeBinary(const UA_CallMethodResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]);
}
static UA_INLINE UA_StatusCode
UA_CallMethodResult_encodeBinary(const UA_CallMethodResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLMETHODRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallMethodResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallMethodResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLMETHODRESULT], NULL);
}

/* CallRequest */
static UA_INLINE size_t
UA_CallRequest_calcSizeBinary(const UA_CallRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CALLREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CallRequest_encodeBinary(const UA_CallRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLREQUEST], NULL);
}

/* CallResponse */
static UA_INLINE size_t
UA_CallResponse_calcSizeBinary(const UA_CallResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CALLRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CallResponse_encodeBinary(const UA_CallResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLRESPONSE], NULL);
}

/* MonitoringMode */
static UA_INLINE size_t
UA_MonitoringMode_calcSizeBinary(const UA_MonitoringMode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGMODE]);
}
static UA_INLINE UA_StatusCode
UA_MonitoringMode_encodeBinary(const UA_MonitoringMode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGMODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoringMode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoringMode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITORINGMODE], NULL);
}

/* DataChangeTrigger */
static UA_INLINE size_t
UA_DataChangeTrigger_calcSizeBinary(const UA_DataChangeTrigger *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER]);
}
static UA_INLINE UA_StatusCode
UA_DataChangeTrigger_encodeBinary(const UA_DataChangeTrigger *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataChangeTrigger_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataChangeTrigger *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER], NULL);
}

/* DeadbandType */
static UA_INLINE size_t
UA_DeadbandType_calcSizeBinary(const UA_DeadbandType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DEADBANDTYPE]);
}
static UA_INLINE UA_StatusCode
UA_DeadbandType_encodeBinary(const UA_DeadbandType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DEADBANDTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeadbandType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeadbandType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DEADBANDTYPE], NULL);
}

/* MonitoringFilter */
static UA_INLINE size_t
UA_MonitoringFilter_calcSizeBinary(const UA_MonitoringFilter *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGFILTER]);
}
static UA_INLINE UA_StatusCode
UA_MonitoringFilter_encodeBinary(const UA_MonitoringFilter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGFILTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoringFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoringFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITORINGFILTER], NULL);
}

/* DataChangeFilter */
static UA_INLINE size_t
UA_DataChangeFilter_calcSizeBinary(const UA_DataChangeFilter *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGEFILTER]);
}
static UA_INLINE UA_StatusCode
UA_DataChangeFilter_encodeBinary(const UA_DataChangeFilter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGEFILTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataChangeFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataChangeFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATACHANGEFILTER], NULL);
}

/* EventFilter */
static UA_INLINE size_t
UA_EventFilter_calcSizeBinary(const UA_EventFilter *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EVENTFILTER]);
}
static UA_INLINE UA_StatusCode
UA_EventFilter_encodeBinary(const UA_EventFilter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTFILTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTFILTER], NULL);
}

/* AggregateConfiguration */
static UA_INLINE size_t
UA_AggregateConfiguration_calcSizeBinary(const UA_AggregateConfiguration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION]);
}
static UA_INLINE UA_StatusCode
UA_AggregateConfiguration_encodeBinary(const UA_AggregateConfiguration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AggregateConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AggregateConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION], NULL);
}

/* AggregateFilter */
static UA_INLINE size_t
UA_AggregateFilter_calcSizeBinary(const UA_AggregateFilter *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATEFILTER]);
}
static UA_INLINE UA_StatusCode
UA_AggregateFilter_encodeBinary(const UA_AggregateFilter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATEFILTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AggregateFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AggregateFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AGGREGATEFILTER], NULL);
}

/* MonitoringFilterResult */
static UA_INLINE size_t
UA_MonitoringFilterResult_calcSizeBinary(const UA_MonitoringFilterResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT]);
}
static UA_INLINE UA_StatusCode
UA_MonitoringFilterResult_encodeBinary(const UA_MonitoringFilterResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoringFilterResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoringFilterResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT], NULL);
}

/* EventFilterResult */
static UA_INLINE size_t
UA_EventFilterResult_calcSizeBinary(const UA_EventFilterResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT]);
}
static UA_INLINE UA_StatusCode
UA_EventFilterResult_encodeBinary(const UA_EventFilterResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventFilterResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventFilterResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT], NULL);
}

/* AggregateFilterResult */
static UA_INLINE size_t
UA_AggregateFilterResult_calcSizeBinary(const UA_AggregateFilterResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT]);
}
static UA_INLINE UA_StatusCode
UA_AggregateFilterResult_encodeBinary(const UA_AggregateFilterResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AggregateFilterResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AggregateFilterResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT], NULL);
}

/* MonitoringParameters */
static UA_INLINE size_t
UA_MonitoringParameters_calcSizeBinary(const UA_MonitoringParameters *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]);
}
static UA_INLINE UA_StatusCode
UA_MonitoringParameters_encodeBinary(const UA_MonitoringParameters *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoringParameters_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoringParameters *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS], NULL);
}

/* MonitoredItemCreateRequest */
static UA_INLINE size_t
UA_MonitoredItemCreateRequest_calcSizeBinary(const UA_MonitoredItemCreateRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateRequest_encodeBinary(const UA_MonitoredItemCreateRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemCreateRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST], NULL);
}

/* MonitoredItemCreateResult */
static UA_INLINE size_t
UA_MonitoredItemCreateResult_calcSizeBinary(const UA_MonitoredItemCreateResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateResult_encodeBinary(const UA_MonitoredItemCreateResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemCreateResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT], NULL);
}

/* CreateMonitoredItemsRequest */
static UA_INLINE size_t
UA_CreateMonitoredItemsRequest_calcSizeBinary(const UA_CreateMonitoredItemsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsRequest_encodeBinary(const UA_CreateMonitoredItemsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateMonitoredItemsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST], NULL);
}

/* CreateMonitoredItemsResponse */
static UA_INLINE size_t
UA_CreateMonitoredItemsResponse_calcSizeBinary(const UA_CreateMonitoredItemsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsResponse_encodeBinary(const UA_CreateMonitoredItemsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateMonitoredItemsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE], NULL);
}

/* MonitoredItemModifyRequest */
static UA_INLINE size_t
UA_MonitoredItemModifyRequest_calcSizeBinary(const UA_MonitoredItemModifyRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyRequest_encodeBinary(const UA_MonitoredItemModifyRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemModifyRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST], NULL);
}

/* MonitoredItemModifyResult */
static UA_INLINE size_t
UA_MonitoredItemModifyResult_calcSizeBinary(const UA_MonitoredItemModifyResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT]);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyResult_encodeBinary(const UA_MonitoredItemModifyResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemModifyResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT], NULL);
}

/* ModifyMonitoredItemsRequest */
static UA_INLINE size_t
UA_ModifyMonitoredItemsRequest_calcSizeBinary(const UA_ModifyMonitoredItemsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsRequest_encodeBinary(const UA_ModifyMonitoredItemsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifyMonitoredItemsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST], NULL);
}

/* ModifyMonitoredItemsResponse */
static UA_INLINE size_t
UA_ModifyMonitoredItemsResponse_calcSizeBinary(const UA_ModifyMonitoredItemsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsResponse_encodeBinary(const UA_ModifyMonitoredItemsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifyMonitoredItemsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE], NULL);
}

/* SetMonitoringModeRequest */
static UA_INLINE size_t
UA_SetMonitoringModeRequest_calcSizeBinary(const UA_SetMonitoringModeRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeRequest_encodeBinary(const UA_SetMonitoringModeRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMonitoringModeRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST], NULL);
}

/* SetMonitoringModeResponse */
static UA_INLINE size_t
UA_SetMonitoringModeResponse_calcSizeBinary(const UA_SetMonitoringModeResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeResponse_encodeBinary(const UA_SetMonitoringModeResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMonitoringModeResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE], NULL);
}

/* SetTriggeringRequest */
static UA_INLINE size_t
UA_SetTriggeringRequest_calcSizeBinary(const UA_SetTriggeringRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_SetTriggeringRequest_encodeBinary(const UA_SetTriggeringRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTriggeringRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTriggeringRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST], NULL);
}

/* SetTriggeringResponse */
static UA_INLINE size_t
UA_SetTriggeringResponse_calcSizeBinary(const UA_SetTriggeringResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_SetTriggeringResponse_encodeBinary(const UA_SetTriggeringResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTriggeringResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTriggeringResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE], NULL);
}

/* DeleteMonitoredItemsRequest */
static UA_INLINE size_t
UA_DeleteMonitoredItemsRequest_calcSizeBinary(const UA_DeleteMonitoredItemsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsRequest_encodeBinary(const UA_DeleteMonitoredItemsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteMonitoredItemsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST], NULL);
}

/* DeleteMonitoredItemsResponse */
static UA_INLINE size_t
UA_DeleteMonitoredItemsResponse_calcSizeBinary(const UA_DeleteMonitoredItemsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsResponse_encodeBinary(const UA_DeleteMonitoredItemsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteMonitoredItemsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE], NULL);
}

/* CreateSubscriptionRequest */
static UA_INLINE size_t
UA_CreateSubscriptionRequest_calcSizeBinary(const UA_CreateSubscriptionRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionRequest_encodeBinary(const UA_CreateSubscriptionRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSubscriptionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST], NULL);
}

/* CreateSubscriptionResponse */
static UA_INLINE size_t
UA_CreateSubscriptionResponse_calcSizeBinary(const UA_CreateSubscriptionResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionResponse_encodeBinary(const UA_CreateSubscriptionResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSubscriptionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE], NULL);
}

/* ModifySubscriptionRequest */
static UA_INLINE size_t
UA_ModifySubscriptionRequest_calcSizeBinary(const UA_ModifySubscriptionRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionRequest_encodeBinary(const UA_ModifySubscriptionRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifySubscriptionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST], NULL);
}

/* ModifySubscriptionResponse */
static UA_INLINE size_t
UA_ModifySubscriptionResponse_calcSizeBinary(const UA_ModifySubscriptionResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionResponse_encodeBinary(const UA_ModifySubscriptionResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifySubscriptionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE], NULL);
}

/* SetPublishingModeRequest */
static UA_INLINE size_t
UA_SetPublishingModeRequest_calcSizeBinary(const UA_SetPublishingModeRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_SetPublishingModeRequest_encodeBinary(const UA_SetPublishingModeRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetPublishingModeRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetPublishingModeRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST], NULL);
}

/* SetPublishingModeResponse */
static UA_INLINE size_t
UA_SetPublishingModeResponse_calcSizeBinary(const UA_SetPublishingModeResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_SetPublishingModeResponse_encodeBinary(const UA_SetPublishingModeResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetPublishingModeResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetPublishingModeResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE], NULL);
}

/* NotificationMessage */
static UA_INLINE size_t
UA_NotificationMessage_calcSizeBinary(const UA_NotificationMessage *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]);
}
static UA_INLINE UA_StatusCode
UA_NotificationMessage_encodeBinary(const UA_NotificationMessage *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NotificationMessage_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NotificationMessage *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE], NULL);
}

/* NotificationData */
static UA_INLINE size_t
UA_NotificationData_calcSizeBinary(const UA_NotificationData *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA]);
}
static UA_INLINE UA_StatusCode
UA_NotificationData_encodeBinary(const UA_NotificationData *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NotificationData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NotificationData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA], NULL);
}

/* MonitoredItemNotification */
static UA_INLINE size_t
UA_MonitoredItemNotification_calcSizeBinary(const UA_MonitoredItemNotification *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemNotification_encodeBinary(const UA_MonitoredItemNotification *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemNotification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemNotification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION], NULL);
}

/* EventFieldList */
static UA_INLINE size_t
UA_EventFieldList_calcSizeBinary(const UA_EventFieldList *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EVENTFIELDLIST]);
}
static UA_INLINE UA_StatusCode
UA_EventFieldList_encodeBinary(const UA_EventFieldList *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTFIELDLIST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventFieldList_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventFieldList *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTFIELDLIST], NULL);
}

/* HistoryEventFieldList */
static UA_INLINE size_t
UA_HistoryEventFieldList_calcSizeBinary(const UA_HistoryEventFieldList *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST]);
}
static UA_INLINE UA_StatusCode
UA_HistoryEventFieldList_encodeBinary(const UA_HistoryEventFieldList *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryEventFieldList_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryEventFieldList *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST], NULL);
}

/* StatusChangeNotification */
static UA_INLINE size_t
UA_StatusChangeNotification_calcSizeBinary(const UA_StatusChangeNotification *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION]);
}
static UA_INLINE UA_StatusCode
UA_StatusChangeNotification_encodeBinary(const UA_StatusChangeNotification *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StatusChangeNotification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StatusChangeNotification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION], NULL);
}

/* SubscriptionAcknowledgement */
static UA_INLINE size_t
UA_SubscriptionAcknowledgement_calcSizeBinary(const UA_SubscriptionAcknowledgement *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]);
}
static UA_INLINE UA_StatusCode
UA_SubscriptionAcknowledgement_encodeBinary(const UA_SubscriptionAcknowledgement *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SubscriptionAcknowledgement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SubscriptionAcknowledgement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT], NULL);
}

/* PublishRequest */
static UA_INLINE size_t
UA_PublishRequest_calcSizeBinary(const UA_PublishRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_PublishRequest_encodeBinary(const UA_PublishRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHREQUEST], NULL);
}

/* PublishResponse */
static UA_INLINE size_t
UA_PublishResponse_calcSizeBinary(const UA_PublishResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_PublishResponse_encodeBinary(const UA_PublishResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE], NULL);
}

/* RepublishRequest */
static UA_INLINE size_t
UA_RepublishRequest_calcSizeBinary(const UA_RepublishRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_RepublishRequest_encodeBinary(const UA_RepublishRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RepublishRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RepublishRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST], NULL);
}

/* RepublishResponse */
static UA_INLINE size_t
UA_RepublishResponse_calcSizeBinary(const UA_RepublishResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_RepublishResponse_encodeBinary(const UA_RepublishResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RepublishResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RepublishResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE], NULL);
}

/* TransferResult */
static UA_INLINE size_t
UA_TransferResult_calcSizeBinary(const UA_TransferResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRANSFERRESULT]);
}
static UA_INLINE UA_StatusCode
UA_TransferResult_encodeBinary(const UA_TransferResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSFERRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TransferResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TransferResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSFERRESULT], NULL);
}

/* TransferSubscriptionsRequest */
static UA_INLINE size_t
UA_TransferSubscriptionsRequest_calcSizeBinary(const UA_TransferSubscriptionsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_TransferSubscriptionsRequest_encodeBinary(const UA_TransferSubscriptionsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TransferSubscriptionsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TransferSubscriptionsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST], NULL);
}

/* TransferSubscriptionsResponse */
static UA_INLINE size_t
UA_TransferSubscriptionsResponse_calcSizeBinary(const UA_TransferSubscriptionsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_TransferSubscriptionsResponse_encodeBinary(const UA_TransferSubscriptionsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TransferSubscriptionsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TransferSubscriptionsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE], NULL);
}

/* DeleteSubscriptionsRequest */
static UA_INLINE size_t
UA_DeleteSubscriptionsRequest_calcSizeBinary(const UA_DeleteSubscriptionsRequest *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]);
}
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsRequest_encodeBinary(const UA_DeleteSubscriptionsRequest *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteSubscriptionsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST], NULL);
}

/* DeleteSubscriptionsResponse */
static UA_INLINE size_t
UA_DeleteSubscriptionsResponse_calcSizeBinary(const UA_DeleteSubscriptionsResponse *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]);
}
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsResponse_encodeBinary(const UA_DeleteSubscriptionsResponse *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteSubscriptionsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE], NULL);
}

/* BuildInfo */
static UA_INLINE size_t
UA_BuildInfo_calcSizeBinary(const UA_BuildInfo *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_BUILDINFO]);
}
static UA_INLINE UA_StatusCode
UA_BuildInfo_encodeBinary(const UA_BuildInfo *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BUILDINFO], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BuildInfo_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BuildInfo *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BUILDINFO], NULL);
}

/* RedundancySupport */
static UA_INLINE size_t
UA_RedundancySupport_calcSizeBinary(const UA_RedundancySupport *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
}
static UA_INLINE UA_StatusCode
UA_RedundancySupport_encodeBinary(const UA_RedundancySupport *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RedundancySupport_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RedundancySupport *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT], NULL);
}

/* ServerState */
static UA_INLINE size_t
UA_ServerState_calcSizeBinary(const UA_ServerState *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SERVERSTATE]);
}
static UA_INLINE UA_StatusCode
UA_ServerState_encodeBinary(const UA_ServerState *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERSTATE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerState_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerState *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERSTATE], NULL);
}

/* RedundantServerDataType */
static UA_INLINE size_t
UA_RedundantServerDataType_calcSizeBinary(const UA_RedundantServerDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_RedundantServerDataType_encodeBinary(const UA_RedundantServerDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RedundantServerDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RedundantServerDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE], NULL);
}

/* EndpointUrlListDataType */
static UA_INLINE size_t
UA_EndpointUrlListDataType_calcSizeBinary(const UA_EndpointUrlListDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EndpointUrlListDataType_encodeBinary(const UA_EndpointUrlListDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndpointUrlListDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndpointUrlListDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE], NULL);
}

/* NetworkGroupDataType */
static UA_INLINE size_t
UA_NetworkGroupDataType_calcSizeBinary(const UA_NetworkGroupDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_NetworkGroupDataType_encodeBinary(const UA_NetworkGroupDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NetworkGroupDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NetworkGroupDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE], NULL);
}

/* SamplingIntervalDiagnosticsDataType */
static UA_INLINE size_t
UA_SamplingIntervalDiagnosticsDataType_calcSizeBinary(const UA_SamplingIntervalDiagnosticsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SamplingIntervalDiagnosticsDataType_encodeBinary(const UA_SamplingIntervalDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SamplingIntervalDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SamplingIntervalDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE], NULL);
}

/* ServerDiagnosticsSummaryDataType */
static UA_INLINE size_t
UA_ServerDiagnosticsSummaryDataType_calcSizeBinary(const UA_ServerDiagnosticsSummaryDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ServerDiagnosticsSummaryDataType_encodeBinary(const UA_ServerDiagnosticsSummaryDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerDiagnosticsSummaryDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerDiagnosticsSummaryDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE], NULL);
}

/* ServerStatusDataType */
static UA_INLINE size_t
UA_ServerStatusDataType_calcSizeBinary(const UA_ServerStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ServerStatusDataType_encodeBinary(const UA_ServerStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE], NULL);
}

/* SessionSecurityDiagnosticsDataType */
static UA_INLINE size_t
UA_SessionSecurityDiagnosticsDataType_calcSizeBinary(const UA_SessionSecurityDiagnosticsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SessionSecurityDiagnosticsDataType_encodeBinary(const UA_SessionSecurityDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionSecurityDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionSecurityDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE], NULL);
}

/* ServiceCounterDataType */
static UA_INLINE size_t
UA_ServiceCounterDataType_calcSizeBinary(const UA_ServiceCounterDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ServiceCounterDataType_encodeBinary(const UA_ServiceCounterDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServiceCounterDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServiceCounterDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE], NULL);
}

/* StatusResult */
static UA_INLINE size_t
UA_StatusResult_calcSizeBinary(const UA_StatusResult *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STATUSRESULT]);
}
static UA_INLINE UA_StatusCode
UA_StatusResult_encodeBinary(const UA_StatusResult *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STATUSRESULT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StatusResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StatusResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STATUSRESULT], NULL);
}

/* SubscriptionDiagnosticsDataType */
static UA_INLINE size_t
UA_SubscriptionDiagnosticsDataType_calcSizeBinary(const UA_SubscriptionDiagnosticsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SubscriptionDiagnosticsDataType_encodeBinary(const UA_SubscriptionDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SubscriptionDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SubscriptionDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE], NULL);
}

/* ModelChangeStructureVerbMask */
static UA_INLINE size_t
UA_ModelChangeStructureVerbMask_calcSizeBinary(const UA_ModelChangeStructureVerbMask *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK]);
}
static UA_INLINE UA_StatusCode
UA_ModelChangeStructureVerbMask_encodeBinary(const UA_ModelChangeStructureVerbMask *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModelChangeStructureVerbMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModelChangeStructureVerbMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK], NULL);
}

/* ModelChangeStructureDataType */
static UA_INLINE size_t
UA_ModelChangeStructureDataType_calcSizeBinary(const UA_ModelChangeStructureDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ModelChangeStructureDataType_encodeBinary(const UA_ModelChangeStructureDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModelChangeStructureDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModelChangeStructureDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE], NULL);
}

/* SemanticChangeStructureDataType */
static UA_INLINE size_t
UA_SemanticChangeStructureDataType_calcSizeBinary(const UA_SemanticChangeStructureDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SemanticChangeStructureDataType_encodeBinary(const UA_SemanticChangeStructureDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SemanticChangeStructureDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SemanticChangeStructureDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE], NULL);
}

/* Range */
static UA_INLINE size_t
UA_Range_calcSizeBinary(const UA_Range *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_RANGE]);
}
static UA_INLINE UA_StatusCode
UA_Range_encodeBinary(const UA_Range *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RANGE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Range_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Range *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RANGE], NULL);
}

/* EUInformation */
static UA_INLINE size_t
UA_EUInformation_calcSizeBinary(const UA_EUInformation *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EUINFORMATION]);
}
static UA_INLINE UA_StatusCode
UA_EUInformation_encodeBinary(const UA_EUInformation *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EUINFORMATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EUInformation_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EUInformation *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EUINFORMATION], NULL);
}

/* AxisScaleEnumeration */
static UA_INLINE size_t
UA_AxisScaleEnumeration_calcSizeBinary(const UA_AxisScaleEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_AxisScaleEnumeration_encodeBinary(const UA_AxisScaleEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AxisScaleEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AxisScaleEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION], NULL);
}

/* ComplexNumberType */
static UA_INLINE size_t
UA_ComplexNumberType_calcSizeBinary(const UA_ComplexNumberType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE]);
}
static UA_INLINE UA_StatusCode
UA_ComplexNumberType_encodeBinary(const UA_ComplexNumberType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ComplexNumberType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ComplexNumberType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE], NULL);
}

/* DoubleComplexNumberType */
static UA_INLINE size_t
UA_DoubleComplexNumberType_calcSizeBinary(const UA_DoubleComplexNumberType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE]);
}
static UA_INLINE UA_StatusCode
UA_DoubleComplexNumberType_encodeBinary(const UA_DoubleComplexNumberType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DoubleComplexNumberType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DoubleComplexNumberType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE], NULL);
}

/* AxisInformation */
static UA_INLINE size_t
UA_AxisInformation_calcSizeBinary(const UA_AxisInformation *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_AXISINFORMATION]);
}
static UA_INLINE UA_StatusCode
UA_AxisInformation_encodeBinary(const UA_AxisInformation *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AXISINFORMATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AxisInformation_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AxisInformation *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AXISINFORMATION], NULL);
}

/* XVType */
static UA_INLINE size_t
UA_XVType_calcSizeBinary(const UA_XVType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_XVTYPE]);
}
static UA_INLINE UA_StatusCode
UA_XVType_encodeBinary(const UA_XVType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_XVTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_XVType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_XVType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_XVTYPE], NULL);
}

/* ProgramDiagnosticDataType */
static UA_INLINE size_t
UA_ProgramDiagnosticDataType_calcSizeBinary(const UA_ProgramDiagnosticDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ProgramDiagnosticDataType_encodeBinary(const UA_ProgramDiagnosticDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ProgramDiagnosticDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ProgramDiagnosticDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE], NULL);
}

/* ProgramDiagnostic2DataType */
static UA_INLINE size_t
UA_ProgramDiagnostic2DataType_calcSizeBinary(const UA_ProgramDiagnostic2DataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ProgramDiagnostic2DataType_encodeBinary(const UA_ProgramDiagnostic2DataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ProgramDiagnostic2DataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ProgramDiagnostic2DataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE], NULL);
}

/* Annotation */
static UA_INLINE size_t
UA_Annotation_calcSizeBinary(const UA_Annotation *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ANNOTATION]);
}
static UA_INLINE UA_StatusCode
UA_Annotation_encodeBinary(const UA_Annotation *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ANNOTATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Annotation_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Annotation *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ANNOTATION], NULL);
}

/* ExceptionDeviationFormat */
static UA_INLINE size_t
UA_ExceptionDeviationFormat_calcSizeBinary(const UA_ExceptionDeviationFormat *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT]);
}
static UA_INLINE UA_StatusCode
UA_ExceptionDeviationFormat_encodeBinary(const UA_ExceptionDeviationFormat *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExceptionDeviationFormat_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExceptionDeviationFormat *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT], NULL);
}

/* EndpointType */
static UA_INLINE size_t
UA_EndpointType_calcSizeBinary(const UA_EndpointType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTTYPE]);
}
static UA_INLINE UA_StatusCode
UA_EndpointType_encodeBinary(const UA_EndpointType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndpointType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndpointType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENDPOINTTYPE], NULL);
}

/* StructureDescription */
static UA_INLINE size_t
UA_StructureDescription_calcSizeBinary(const UA_StructureDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_StructureDescription_encodeBinary(const UA_StructureDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StructureDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StructureDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION], NULL);
}

/* FieldMetaData */
static UA_INLINE size_t
UA_FieldMetaData_calcSizeBinary(const UA_FieldMetaData *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FIELDMETADATA]);
}
static UA_INLINE UA_StatusCode
UA_FieldMetaData_encodeBinary(const UA_FieldMetaData *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FIELDMETADATA], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FieldMetaData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FieldMetaData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FIELDMETADATA], NULL);
}

/* PublishedEventsDataType */
static UA_INLINE size_t
UA_PublishedEventsDataType_calcSizeBinary(const UA_PublishedEventsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PublishedEventsDataType_encodeBinary(const UA_PublishedEventsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishedEventsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishedEventsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE], NULL);
}

/* PubSubGroupDataType */
static UA_INLINE size_t
UA_PubSubGroupDataType_calcSizeBinary(const UA_PubSubGroupDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PubSubGroupDataType_encodeBinary(const UA_PubSubGroupDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PubSubGroupDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PubSubGroupDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE], NULL);
}

/* WriterGroupDataType */
static UA_INLINE size_t
UA_WriterGroupDataType_calcSizeBinary(const UA_WriterGroupDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_WriterGroupDataType_encodeBinary(const UA_WriterGroupDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriterGroupDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriterGroupDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE], NULL);
}

/* FieldTargetDataType */
static UA_INLINE size_t
UA_FieldTargetDataType_calcSizeBinary(const UA_FieldTargetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_FieldTargetDataType_encodeBinary(const UA_FieldTargetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FieldTargetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FieldTargetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE], NULL);
}

/* SubscribedDataSetMirrorDataType */
static UA_INLINE size_t
UA_SubscribedDataSetMirrorDataType_calcSizeBinary(const UA_SubscribedDataSetMirrorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SubscribedDataSetMirrorDataType_encodeBinary(const UA_SubscribedDataSetMirrorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SubscribedDataSetMirrorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SubscribedDataSetMirrorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE], NULL);
}

/* EnumDefinition */
static UA_INLINE size_t
UA_EnumDefinition_calcSizeBinary(const UA_EnumDefinition *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENUMDEFINITION]);
}
static UA_INLINE UA_StatusCode
UA_EnumDefinition_encodeBinary(const UA_EnumDefinition *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENUMDEFINITION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnumDefinition_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnumDefinition *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENUMDEFINITION], NULL);
}

/* ReadEventDetails */
static UA_INLINE size_t
UA_ReadEventDetails_calcSizeBinary(const UA_ReadEventDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READEVENTDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_ReadEventDetails_encodeBinary(const UA_ReadEventDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READEVENTDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadEventDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadEventDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READEVENTDETAILS], NULL);
}

/* ReadProcessedDetails */
static UA_INLINE size_t
UA_ReadProcessedDetails_calcSizeBinary(const UA_ReadProcessedDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_ReadProcessedDetails_encodeBinary(const UA_ReadProcessedDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadProcessedDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadProcessedDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS], NULL);
}

/* ModificationInfo */
static UA_INLINE size_t
UA_ModificationInfo_calcSizeBinary(const UA_ModificationInfo *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_MODIFICATIONINFO]);
}
static UA_INLINE UA_StatusCode
UA_ModificationInfo_encodeBinary(const UA_ModificationInfo *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFICATIONINFO], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModificationInfo_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModificationInfo *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFICATIONINFO], NULL);
}

/* HistoryModifiedData */
static UA_INLINE size_t
UA_HistoryModifiedData_calcSizeBinary(const UA_HistoryModifiedData *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA]);
}
static UA_INLINE UA_StatusCode
UA_HistoryModifiedData_encodeBinary(const UA_HistoryModifiedData *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryModifiedData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryModifiedData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA], NULL);
}

/* HistoryEvent */
static UA_INLINE size_t
UA_HistoryEvent_calcSizeBinary(const UA_HistoryEvent *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_HISTORYEVENT]);
}
static UA_INLINE UA_StatusCode
UA_HistoryEvent_encodeBinary(const UA_HistoryEvent *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_HISTORYEVENT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_HistoryEvent_decodeBinary(const UA_ByteString *src, size_t *offset, UA_HistoryEvent *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_HISTORYEVENT], NULL);
}

/* UpdateEventDetails */
static UA_INLINE size_t
UA_UpdateEventDetails_calcSizeBinary(const UA_UpdateEventDetails *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS]);
}
static UA_INLINE UA_StatusCode
UA_UpdateEventDetails_encodeBinary(const UA_UpdateEventDetails *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UpdateEventDetails_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UpdateEventDetails *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS], NULL);
}

/* DataChangeNotification */
static UA_INLINE size_t
UA_DataChangeNotification_calcSizeBinary(const UA_DataChangeNotification *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]);
}
static UA_INLINE UA_StatusCode
UA_DataChangeNotification_encodeBinary(const UA_DataChangeNotification *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataChangeNotification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataChangeNotification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION], NULL);
}

/* EventNotificationList */
static UA_INLINE size_t
UA_EventNotificationList_calcSizeBinary(const UA_EventNotificationList *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST]);
}
static UA_INLINE UA_StatusCode
UA_EventNotificationList_encodeBinary(const UA_EventNotificationList *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventNotificationList_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventNotificationList *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST], NULL);
}

/* SessionDiagnosticsDataType */
static UA_INLINE size_t
UA_SessionDiagnosticsDataType_calcSizeBinary(const UA_SessionDiagnosticsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SessionDiagnosticsDataType_encodeBinary(const UA_SessionDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE], NULL);
}

/* EnumDescription */
static UA_INLINE size_t
UA_EnumDescription_calcSizeBinary(const UA_EnumDescription *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION]);
}
static UA_INLINE UA_StatusCode
UA_EnumDescription_encodeBinary(const UA_EnumDescription *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnumDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnumDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION], NULL);
}

/* UABinaryFileDataType */
static UA_INLINE size_t
UA_UABinaryFileDataType_calcSizeBinary(const UA_UABinaryFileDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_UABinaryFileDataType_encodeBinary(const UA_UABinaryFileDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UABinaryFileDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UABinaryFileDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE], NULL);
}

/* DataSetMetaDataType */
static UA_INLINE size_t
UA_DataSetMetaDataType_calcSizeBinary(const UA_DataSetMetaDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetMetaDataType_encodeBinary(const UA_DataSetMetaDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetMetaDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetMetaDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE], NULL);
}

/* PublishedDataSetDataType */
static UA_INLINE size_t
UA_PublishedDataSetDataType_calcSizeBinary(const UA_PublishedDataSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PublishedDataSetDataType_encodeBinary(const UA_PublishedDataSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishedDataSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishedDataSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE], NULL);
}

/* DataSetReaderDataType */
static UA_INLINE size_t
UA_DataSetReaderDataType_calcSizeBinary(const UA_DataSetReaderDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DataSetReaderDataType_encodeBinary(const UA_DataSetReaderDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataSetReaderDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataSetReaderDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE], NULL);
}

/* TargetVariablesDataType */
static UA_INLINE size_t
UA_TargetVariablesDataType_calcSizeBinary(const UA_TargetVariablesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_TargetVariablesDataType_encodeBinary(const UA_TargetVariablesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TargetVariablesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TargetVariablesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE], NULL);
}

/* DataTypeSchemaHeader */
static UA_INLINE size_t
UA_DataTypeSchemaHeader_calcSizeBinary(const UA_DataTypeSchemaHeader *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER]);
}
static UA_INLINE UA_StatusCode
UA_DataTypeSchemaHeader_encodeBinary(const UA_DataTypeSchemaHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataTypeSchemaHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataTypeSchemaHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER], NULL);
}

/* ReaderGroupDataType */
static UA_INLINE size_t
UA_ReaderGroupDataType_calcSizeBinary(const UA_ReaderGroupDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ReaderGroupDataType_encodeBinary(const UA_ReaderGroupDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReaderGroupDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReaderGroupDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE], NULL);
}

/* PubSubConnectionDataType */
static UA_INLINE size_t
UA_PubSubConnectionDataType_calcSizeBinary(const UA_PubSubConnectionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PubSubConnectionDataType_encodeBinary(const UA_PubSubConnectionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PubSubConnectionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PubSubConnectionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE], NULL);
}

/* PubSubConfigurationDataType */
static UA_INLINE size_t
UA_PubSubConfigurationDataType_calcSizeBinary(const UA_PubSubConfigurationDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PubSubConfigurationDataType_encodeBinary(const UA_PubSubConfigurationDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PubSubConfigurationDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PubSubConfigurationDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE], NULL);
}

#endif /* TYPES_GENERATED_ENCODING_BINARY_H_ */
