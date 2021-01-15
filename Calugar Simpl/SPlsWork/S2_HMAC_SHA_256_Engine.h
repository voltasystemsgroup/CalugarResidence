#ifndef __S2_HMAC_SHA_256_ENGINE_H__
#define __S2_HMAC_SHA_256_ENGINE_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_HMAC_SHA_256_Engine_ARRAYSIZE_ANALOG_INPUT 0

#define __S2_HMAC_SHA_256_Engine_SECRETKEY$_STRING_INPUT 1
#define __S2_HMAC_SHA_256_Engine_SECRETKEY$_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_HMAC_SHA_256_Engine, __SECRETKEY$, __S2_HMAC_SHA_256_Engine_SECRETKEY$_STRING_MAX_LEN );

#define __S2_HMAC_SHA_256_Engine_MESSAGE$_BUFFER_INPUT 2
#define __S2_HMAC_SHA_256_Engine_MESSAGE$_BUFFER_MAX_LEN 10000
CREATE_STRING_STRUCT( S2_HMAC_SHA_256_Engine, __MESSAGE$, __S2_HMAC_SHA_256_Engine_MESSAGE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_HMAC_SHA_256_Engine_HMAC_SHA256_STRING_OUTPUT 0
#define __S2_HMAC_SHA_256_Engine_SHA256_DEBUG$_STRING_OUTPUT 1


/*
* Direct Socket Variables
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
CREATE_DYNAMIC_LONGARRAY1D( S2_HMAC_SHA_256_Engine, __MESSAGE, 1 );;
CREATE_LONGARRAY1D( S2_HMAC_SHA_256_Engine, __K, 63 );;

CREATE_DYNAMIC_LONGARRAY2D( S2_HMAC_SHA_256_Engine, __MESSAGECHUNK, 1, 16 );;

/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_HMAC_SHA_256_Engine )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned long __H0;
   unsigned long __H1;
   unsigned long __H2;
   unsigned long __H3;
   unsigned long __H4;
   unsigned long __H5;
   unsigned long __H6;
   unsigned long __H7;
   DECLARE_DYNAMIC_LONGARRAY( S2_HMAC_SHA_256_Engine, __MESSAGE );
   DECLARE_LONGARRAY( S2_HMAC_SHA_256_Engine, __K );
   DECLARE_DYNAMIC_LONGARRAY( S2_HMAC_SHA_256_Engine, __MESSAGECHUNK );
   DECLARE_STRING_STRUCT( S2_HMAC_SHA_256_Engine, __SECRETKEY$ );
   DECLARE_STRING_STRUCT( S2_HMAC_SHA_256_Engine, __MESSAGE$ );
};

START_NVRAM_VAR_STRUCT( S2_HMAC_SHA_256_Engine )
{
};



#endif //__S2_HMAC_SHA_256_ENGINE_H__
