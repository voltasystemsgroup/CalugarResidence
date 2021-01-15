#ifndef __S2_CLOCK_DISPLAY_V_0_2_H__
#define __S2_CLOCK_DISPLAY_V_0_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_CLOCK_DISPLAY_V_0_2__24_HOUR_CLOCK_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_CLOCK_DISPLAY_V_0_2_HOUR_ANALOG_INPUT 0
#define __S2_CLOCK_DISPLAY_V_0_2_MINUTE_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_CLOCK_DISPLAY_V_0_2_DISPLAY_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_CLOCK_DISPLAY_V_0_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_CLOCK_DISPLAY_V_0_2 )
{
   unsigned short __GNINITCOMPLETE;
   unsigned short __GNMINUTE;
   unsigned short __GNHOUR;
};



#endif //__S2_CLOCK_DISPLAY_V_0_2_H__

