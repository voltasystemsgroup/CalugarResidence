#ifndef __S2_ALL_ON_OFF_V_2_0_H__
#define __S2_ALL_ON_OFF_V_2_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_ALL_ON_OFF_V_2_0_ON_FB_DIG_INPUT 0
#define __S2_ALL_ON_OFF_V_2_0_ALL_ON_DIG_INPUT 1
#define __S2_ALL_ON_OFF_V_2_0_ALL_OFF_DIG_INPUT 2
#define __S2_ALL_ON_OFF_V_2_0_ALL_TOGGLE_DIG_INPUT 3


/*
* ANALOG_INPUT
*/
#define __S2_ALL_ON_OFF_V_2_0_ONVAL_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/
#define __S2_ALL_ON_OFF_V_2_0_ON_PULSE_DIG_OUTPUT 0
#define __S2_ALL_ON_OFF_V_2_0_OFF_PULSE_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_ALL_ON_OFF_V_2_0_ANALOG_OUT_ANALOG_OUTPUT 0



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

START_GLOBAL_VAR_STRUCT( S2_ALL_ON_OFF_V_2_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_ALL_ON_OFF_V_2_0 )
{
};



#endif //__S2_ALL_ON_OFF_V_2_0_H__

