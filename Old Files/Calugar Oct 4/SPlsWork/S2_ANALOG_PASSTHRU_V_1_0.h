#ifndef __S2_ANALOG_PASSTHRU_V_1_0_H__
#define __S2_ANALOG_PASSTHRU_V_1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_ANALOG_PASSTHRU_V_1_0_ENABLE_DIG_INPUT 0
#define __S2_ANALOG_PASSTHRU_V_1_0_REPROP_ON_ENABLE_DIG_INPUT 1
#define __S2_ANALOG_PASSTHRU_V_1_0_DISABLE_VALUE_0_DIG_INPUT 2

#define __S2_ANALOG_PASSTHRU_V_1_0_DISABLE_VALUE_DIG_INPUT 3
#define __S2_ANALOG_PASSTHRU_V_1_0_DISABLE_VALUE_ARRAY_LENGTH 32

/*
* ANALOG_INPUT
*/
#define __S2_ANALOG_PASSTHRU_V_1_0_IN_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_ANALOG_PASSTHRU_V_1_0_OUT_ANALOG_OUTPUT 0
#define __S2_ANALOG_PASSTHRU_V_1_0_OUT_ARRAY_LENGTH 32

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_ANALOG_PASSTHRU_V_1_0_DELAY_TIME_INTEGER_PARAMETER 10
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

START_GLOBAL_VAR_STRUCT( S2_ANALOG_PASSTHRU_V_1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DISABLE_VALUE );
   DECLARE_IO_ARRAY( __OUT );
};

START_NVRAM_VAR_STRUCT( S2_ANALOG_PASSTHRU_V_1_0 )
{
   unsigned short __GNINITCOMPLETE;
};



#endif //__S2_ANALOG_PASSTHRU_V_1_0_H__

