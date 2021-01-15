#ifndef __S2_DYNDNS_UPDATE_CLIENT_V1_00_H__
#define __S2_DYNDNS_UPDATE_CLIENT_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_DynDNS_Update_Client_v1_00__DEBUG__DIG_INPUT 0
#define __S2_DynDNS_Update_Client_v1_00_GET_IP_ADDRESS_DIG_INPUT 1


/*
* ANALOG_INPUT
*/

#define __S2_DynDNS_Update_Client_v1_00_HOST_NAME_STRING_INPUT 0
#define __S2_DynDNS_Update_Client_v1_00_HOST_NAME_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __HOST_NAME, __S2_DynDNS_Update_Client_v1_00_HOST_NAME_STRING_MAX_LEN );
#define __S2_DynDNS_Update_Client_v1_00_FORCE_IP_ADDRESS_STRING_INPUT 1
#define __S2_DynDNS_Update_Client_v1_00_FORCE_IP_ADDRESS_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __FORCE_IP_ADDRESS, __S2_DynDNS_Update_Client_v1_00_FORCE_IP_ADDRESS_STRING_MAX_LEN );
#define __S2_DynDNS_Update_Client_v1_00_BASE64_UID_PWD_STRING_INPUT 2
#define __S2_DynDNS_Update_Client_v1_00_BASE64_UID_PWD_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __BASE64_UID_PWD, __S2_DynDNS_Update_Client_v1_00_BASE64_UID_PWD_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_DynDNS_Update_Client_v1_00_IP_ADDRESS_STRING_OUTPUT 0


/*
* Direct Socket Variables
*/

#define __S2_DynDNS_Update_Client_v1_00_GETIPTCPCLIENT_SOCKET 3
#define __S2_DynDNS_Update_Client_v1_00_GETIPTCPCLIENT_STRING_MAX_LEN 4096
START_SOCKET_DEFINITION( S2_DynDNS_Update_Client_v1_00, __GETIPTCPCLIENT )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_DynDNS_Update_Client_v1_00, SocketRxBuf, __S2_DynDNS_Update_Client_v1_00_GETIPTCPCLIENT_STRING_MAX_LEN );
};
#define __S2_DynDNS_Update_Client_v1_00_UPDATETCPCLIENT_SOCKET 4
#define __S2_DynDNS_Update_Client_v1_00_UPDATETCPCLIENT_STRING_MAX_LEN 4096
START_SOCKET_DEFINITION( S2_DynDNS_Update_Client_v1_00, __UPDATETCPCLIENT )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_DynDNS_Update_Client_v1_00, SocketRxBuf, __S2_DynDNS_Update_Client_v1_00_UPDATETCPCLIENT_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_DynDNS_Update_Client_v1_00_GSIPADDRESS_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __GSIPADDRESS, __S2_DynDNS_Update_Client_v1_00_GSIPADDRESS_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_DynDNS_Update_Client_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __HOST_NAME );
   DECLARE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __FORCE_IP_ADDRESS );
   DECLARE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __BASE64_UID_PWD );
   DECLARE_SOCKET( S2_DynDNS_Update_Client_v1_00, __GETIPTCPCLIENT );
   DECLARE_SOCKET( S2_DynDNS_Update_Client_v1_00, __UPDATETCPCLIENT );
};

START_NVRAM_VAR_STRUCT( S2_DynDNS_Update_Client_v1_00 )
{
   DECLARE_STRING_STRUCT( S2_DynDNS_Update_Client_v1_00, __GSIPADDRESS );
};



#endif //__S2_DYNDNS_UPDATE_CLIENT_V1_00_H__

