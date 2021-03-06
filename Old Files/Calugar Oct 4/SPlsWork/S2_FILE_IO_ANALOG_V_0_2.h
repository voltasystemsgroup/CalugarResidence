#ifndef __S2_FILE_IO_ANALOG_V_0_2_H__
#define __S2_FILE_IO_ANALOG_V_0_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_FILE_IO_ANALOG_V_0_2_ENABLE_DIG_INPUT 0
#define __S2_FILE_IO_ANALOG_V_0_2_AUTO_WRITE_DIG_INPUT 1
#define __S2_FILE_IO_ANALOG_V_0_2_AUTO_WRITE_DELAY_FB_DIG_INPUT 2
#define __S2_FILE_IO_ANALOG_V_0_2_READ_DIG_INPUT 3
#define __S2_FILE_IO_ANALOG_V_0_2_WRITE_DIG_INPUT 4


/*
* ANALOG_INPUT
*/

#define __S2_FILE_IO_ANALOG_V_0_2_PATH_STRING_INPUT 0
#define __S2_FILE_IO_ANALOG_V_0_2_PATH_STRING_MAX_LEN 128
CREATE_STRING_STRUCT( S2_FILE_IO_ANALOG_V_0_2, __PATH, __S2_FILE_IO_ANALOG_V_0_2_PATH_STRING_MAX_LEN );


#define __S2_FILE_IO_ANALOG_V_0_2_VALUE_IN_ANALOG_INPUT 34
#define __S2_FILE_IO_ANALOG_V_0_2_VALUE_IN_ARRAY_LENGTH 33
#define __S2_FILE_IO_ANALOG_V_0_2_FIELD_STRING_INPUT 1
#define __S2_FILE_IO_ANALOG_V_0_2_FIELD_ARRAY_NUM_ELEMS 33
#define __S2_FILE_IO_ANALOG_V_0_2_FIELD_ARRAY_NUM_CHARS 16
CREATE_STRING_ARRAY( S2_FILE_IO_ANALOG_V_0_2, __FIELD, __S2_FILE_IO_ANALOG_V_0_2_FIELD_ARRAY_NUM_ELEMS, __S2_FILE_IO_ANALOG_V_0_2_FIELD_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_FILE_IO_ANALOG_V_0_2_VALUE_CHANGE_DIG_OUTPUT 0
#define __S2_FILE_IO_ANALOG_V_0_2_READ_FB_DIG_OUTPUT 1
#define __S2_FILE_IO_ANALOG_V_0_2_WRITE_FB_DIG_OUTPUT 2


/*
* ANALOG_OUTPUT
*/


#define __S2_FILE_IO_ANALOG_V_0_2_VALUE_OUT_ANALOG_OUTPUT 0
#define __S2_FILE_IO_ANALOG_V_0_2_VALUE_OUT_ARRAY_LENGTH 33

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


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_FILE_IO_ANALOG_V_0_2_GSPATH_STRING_MAX_LEN 128
CREATE_STRING_STRUCT( S2_FILE_IO_ANALOG_V_0_2, __GSPATH, __S2_FILE_IO_ANALOG_V_0_2_GSPATH_STRING_MAX_LEN );
#define __S2_FILE_IO_ANALOG_V_0_2_GSBUF_STRING_MAX_LEN 1024
CREATE_STRING_STRUCT( S2_FILE_IO_ANALOG_V_0_2, __GSBUF, __S2_FILE_IO_ANALOG_V_0_2_GSBUF_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_FILE_IO_ANALOG_V_0_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VALUE_IN );
   DECLARE_IO_ARRAY( __VALUE_OUT );
   unsigned short __GNREADFB;
   unsigned short __GNWRITEFB;
   unsigned short __GNDUMPING;
   DECLARE_STRING_STRUCT( S2_FILE_IO_ANALOG_V_0_2, __GSPATH );
   DECLARE_STRING_STRUCT( S2_FILE_IO_ANALOG_V_0_2, __GSBUF );
   DECLARE_STRING_STRUCT( S2_FILE_IO_ANALOG_V_0_2, __PATH );
   DECLARE_STRING_ARRAY( S2_FILE_IO_ANALOG_V_0_2, __FIELD );
};

START_NVRAM_VAR_STRUCT( S2_FILE_IO_ANALOG_V_0_2 )
{
   unsigned short __GNINITCOMPLETE;
};



#endif //__S2_FILE_IO_ANALOG_V_0_2_H__

