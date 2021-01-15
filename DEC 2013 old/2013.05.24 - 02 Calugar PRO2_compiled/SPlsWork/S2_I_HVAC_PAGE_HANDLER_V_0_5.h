#ifndef __S2_I_HVAC_PAGE_HANDLER_V_0_5_H__
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_SINGLE_SETPOINT_FB_DIG_INPUT 0
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_DUAL_SETPOINT_FB_DIG_INPUT 1
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_OFF_FB_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HVAC_INDEX_ANALOG_INPUT 0



#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HVAC_TYPE_ANALOG_INPUT 1
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HVAC_TYPE_ARRAY_LENGTH 32

/*
* DIGITAL_OUTPUT
*/
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_SINGLE_SETPOINT_DIG_OUTPUT 0
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_DUAL_SETPOINT_DIG_OUTPUT 1
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_SINGLE_WITH_HUMIDITY_SETPOINT_DIG_OUTPUT 2
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_DUAL_WITH_HUMIDITY_SETPOINT_DIG_OUTPUT 3
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_RADIANT_HEAT_SETPOINT_DIG_OUTPUT 4
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_OFF_SUBPAGE_DIG_OUTPUT 5
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HEAT_COOL_AUTO_MODES_DIG_OUTPUT 6
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HEAT_COOL_AUTO_HUMIDITY_MODES_DIG_OUTPUT 7
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HEAT_COOL_MODES_DIG_OUTPUT 8
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_HEAT_COOL_HUMIDITY_MODES_DIG_OUTPUT 9
#define __S2_I_HVAC_PAGE_HANDLER_V_0_5_RADIANT_HEAT_MODES_DIG_OUTPUT 10


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

START_GLOBAL_VAR_STRUCT( S2_I_HVAC_PAGE_HANDLER_V_0_5 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __HVAC_TYPE );
};

START_NVRAM_VAR_STRUCT( S2_I_HVAC_PAGE_HANDLER_V_0_5 )
{
};



#endif //__S2_I_HVAC_PAGE_HANDLER_V_0_5_H__

