#ifndef __S2_COUNTDOWN_TIMER_V_0_2_H__
#define __S2_COUNTDOWN_TIMER_V_0_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_COUNTDOWN_TIMER_V_0_2_SECOND_PULSE_DIG_INPUT 0
#define __S2_COUNTDOWN_TIMER_V_0_2_START_DIG_INPUT 1
#define __S2_COUNTDOWN_TIMER_V_0_2_STOP_DIG_INPUT 2
#define __S2_COUNTDOWN_TIMER_V_0_2_RESET_DIG_INPUT 3


/*
* ANALOG_INPUT
*/
#define __S2_COUNTDOWN_TIMER_V_0_2_COUNT_DAY_ANALOG_INPUT 0
#define __S2_COUNTDOWN_TIMER_V_0_2_COUNT_HOUR_ANALOG_INPUT 1
#define __S2_COUNTDOWN_TIMER_V_0_2_COUNT_MINUTE_ANALOG_INPUT 2
#define __S2_COUNTDOWN_TIMER_V_0_2_COUNT_SECOND_ANALOG_INPUT 3




/*
* DIGITAL_OUTPUT
*/
#define __S2_COUNTDOWN_TIMER_V_0_2_COUNTDOWN_STARTED_DIG_OUTPUT 0
#define __S2_COUNTDOWN_TIMER_V_0_2_COUNTDOWN_FINISHED_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_COUNTDOWN_TIMER_V_0_2_WATCH_DAY_ANALOG_OUTPUT 0
#define __S2_COUNTDOWN_TIMER_V_0_2_WATCH_HOUR_ANALOG_OUTPUT 1
#define __S2_COUNTDOWN_TIMER_V_0_2_WATCH_MINUTE_ANALOG_OUTPUT 2
#define __S2_COUNTDOWN_TIMER_V_0_2_WATCH_SECOND_ANALOG_OUTPUT 3

#define __S2_COUNTDOWN_TIMER_V_0_2_TIME_REMAINING_STRING_OUTPUT 4


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

START_GLOBAL_VAR_STRUCT( S2_COUNTDOWN_TIMER_V_0_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_COUNTDOWN_TIMER_V_0_2 )
{
   unsigned short __GNCOUNTDOWNSTARTED;
   short __GNWATCHDAY;
   short __GNWATCHHOUR;
   short __GNWATCHMINUTE;
   short __GNWATCHSECOND;
};



#endif //__S2_COUNTDOWN_TIMER_V_0_2_H__
