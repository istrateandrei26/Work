#pragma once
/* libs */
#include <winsock.h>



#define PORT 9909	//specified
#define STREAM SOCK_STREAM
#define TCP_NETWORK AF_INET
#define TCP_PROTOCOL IPPROTO_TCP
#define SOCKET_OPTIONS SOL_SOCKET
#define ALLOW_LOCAL_ADDRESS_REUSE SO_REUSEADDR

#define FAILED -1
#define SUCCEEDED 0

#define MAXIMUM_NUMBER_OF_QUEUED_CONNECTIONS_REQUESTS 5

#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000

#define PADDING RSA_PKCS1_PADDING
#define NO_ACTION 199						// the last valid type id is 200 -> see MACRO_Protocol.h