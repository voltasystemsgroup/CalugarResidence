#ifndef __S2_A2D_V_0_1_H__
#define __S2_A2D_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_A2D_V_0_1_INPUT_ANALOG_INPUT 0
#define __S2_A2D_V_0_1_DELAY_TIME_ANALOG_INPUT 1
#define __S2_A2D_V_0_1_PULSE_TIME_ANALOG_INPUT 2




/*
* DIGITAL_OUTPUT
*/
#define __S2_A2D_V_0_1_ENTER_DIG_OUTPUT 0

#define __S2_A2D_V_0_1_OUT_DIG_OUTPUT 1
#define __S2_A2D_V_0_1_OUT_ARRAY_LENGTH 10

/*
* ANALOG_OUTPUT
*/



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

START_GLOBAL_VAR_STRUCT( S2_A2D_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUT );
};

START_NVRAM_VAR_STRUCT( S2_A2D_V_0_1 )
{
   unsigned short __NBUSY;
};



#endif //__S2_A2D_V_0_1_H__

