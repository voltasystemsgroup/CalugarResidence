#ifndef __S2_DATA_SELECTOR_ANALOG_32X48_V_0_1_H__
#define __S2_DATA_SELECTOR_ANALOG_32X48_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_DATA_SELECTOR_ANALOG_32x48_V_0_1_DATA_ANALOG_INPUT 0
#define __S2_DATA_SELECTOR_ANALOG_32x48_V_0_1_DATA_ARRAY_LENGTH 49
#define __S2_DATA_SELECTOR_ANALOG_32x48_V_0_1_OUTPUT_DATA_INDEX_ANALOG_INPUT 49
#define __S2_DATA_SELECTOR_ANALOG_32x48_V_0_1_OUTPUT_DATA_INDEX_ARRAY_LENGTH 33

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_DATA_SELECTOR_ANALOG_32x48_V_0_1_OUTPUT_ANALOG_OUTPUT 0
#define __S2_DATA_SELECTOR_ANALOG_32x48_V_0_1_OUTPUT_ARRAY_LENGTH 33

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

START_GLOBAL_VAR_STRUCT( S2_DATA_SELECTOR_ANALOG_32x48_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DATA );
   DECLARE_IO_ARRAY( __OUTPUT_DATA_INDEX );
   DECLARE_IO_ARRAY( __OUTPUT );
};

START_NVRAM_VAR_STRUCT( S2_DATA_SELECTOR_ANALOG_32x48_V_0_1 )
{
   unsigned short __GNINITCOMPLETE;
};



#endif //__S2_DATA_SELECTOR_ANALOG_32X48_V_0_1_H__

