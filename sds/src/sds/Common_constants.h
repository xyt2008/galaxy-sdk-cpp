#include "../client/undefine.h"
/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Common_CONSTANTS_H
#define Common_CONSTANTS_H

#include "Common_types.h"



class CommonConstants {
 public:
  CommonConstants();

  double DEFAULT_CLIENT_TIMEOUT;
  double DEFAULT_MAX_CLIENT_TIMEOUT;
  double DEFAULT_ADMIN_CLIENT_TIMEOUT;
  double DEFAULT_CLIENT_CONN_TIMEOUT;
  std::string DEFAULT_SERVICE_ENDPOINT;
  std::string DEFAULT_SECURE_SERVICE_ENDPOINT;
  std::string API_ROOT_PATH;
  std::string AUTH_SERVICE_PATH;
  std::string ADMIN_SERVICE_PATH;
  std::string TABLE_SERVICE_PATH;
  std::string SCAN_COUNT;
  std::string DEFAULT_THRIFT_HEADER;
  std::string THRIFT_JSON_HEADER;
  std::string THRIFT_COMPACT_HEADER;
  std::string THRIFT_BINARY_HEADER;
  std::string THRIFT_JSON_PROTOCOL_CLASS;
  std::string THRIFT_BINARY_PROTOCOL_CLASS;
  std::string THRIFT_COMPACT_PROTOCOL_CLASS;
  std::map<ThriftProtocol::type, std::string>  THRIFT_HEADER_MAP;
  std::map<ThriftProtocol::type, std::string>  THRIFT_PROTOCOL_MAP;
  std::map<std::string, ThriftProtocol::type>  HEADER_THRIFT_MAP;
  std::string HK_REQUEST_TIMEOUT;
  std::string HK_ERROR_CODE_HEADER;
  int32_t MAX_CONTENT_SIZE;
};

extern const CommonConstants g_Common_constants;



#endif