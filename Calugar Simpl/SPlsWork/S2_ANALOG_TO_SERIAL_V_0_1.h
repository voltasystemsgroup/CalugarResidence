#ifndef __S2_ANALOG_TO_SERIAL_V_0_1_H__
#define __S2_ANALOG_TO_SERIAL_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_ANALOG_TO_SERIAL_V_0_1_IN_ANALOG_INPUT 0
#define __S2_ANALOG_TO_SERIAL_V_0_1_IN_ARRAY_LENGTH 200

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_ANALOG_TO_SERIAL_V_0_1_OUT_STRING_OUTPUT 0
#define __S2_ANALOG_TO_SERIAL_V_0_1_OUT_ARRAY_LENGTH 200

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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_ANALOG_TO_SERIAL_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __IN );
   DECLARE_IO_ARRAY( __OUT );
};

START_NVRAM_VAR_STRUCT( S2_ANALOG_TO_SERIAL_V_0_1 )
{
};



#endif //__S2_ANALOG_TO_SERIAL_V_0_1_H__

