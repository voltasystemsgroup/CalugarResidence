#ifndef __S2_CLOCK_VALS_V_0_1_H__
#define __S2_CLOCK_VALS_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_CLOCK_VALS_V_0_1_TOD_STRING_INPUT 0
#define __S2_CLOCK_VALS_V_0_1_TOD_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_CLOCK_VALS_V_0_1, __TOD, __S2_CLOCK_VALS_V_0_1_TOD_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_CLOCK_VALS_V_0_1_MONTH_NUM_ANALOG_OUTPUT 0
#define __S2_CLOCK_VALS_V_0_1_DAY_NUM_ANALOG_OUTPUT 1
#define __S2_CLOCK_VALS_V_0_1_YEAR_NUM_ANALOG_OUTPUT 2
#define __S2_CLOCK_VALS_V_0_1_HOUR_NUM_ANALOG_OUTPUT 3
#define __S2_CLOCK_VALS_V_0_1_MINUTE_NUM_ANALOG_OUTPUT 4
#define __S2_CLOCK_VALS_V_0_1_SECOND_NUM_ANALOG_OUTPUT 5



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

START_GLOBAL_VAR_STRUCT( S2_CLOCK_VALS_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_CLOCK_VALS_V_0_1, __TOD );
};

START_NVRAM_VAR_STRUCT( S2_CLOCK_VALS_V_0_1 )
{
   unsigned short __GNMONTH;
   unsigned short __GNDAY;
   unsigned short __GNYEAR;
   unsigned short __GNHOUR;
   unsigned short __GNMINUTE;
   unsigned short __GNSECOND;
};



#endif //__S2_CLOCK_VALS_V_0_1_H__

