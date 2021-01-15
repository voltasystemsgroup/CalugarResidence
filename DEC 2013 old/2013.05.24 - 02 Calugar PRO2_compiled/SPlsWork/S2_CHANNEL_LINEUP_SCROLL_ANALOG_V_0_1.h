#ifndef __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_H__
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_INITIALIZE_DIG_INPUT 0
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_UP_DIG_INPUT 1
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_DOWN_DIG_INPUT 2
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_WRAP_ENABLE_DIG_INPUT 3


/*
* ANALOG_INPUT
*/
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_POSITION_ANALOG_INPUT 0
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_INCREMENT_ANALOG_INPUT 1
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_NUM_SCROLL_ITEMS_ANALOG_INPUT 2
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_NUM_SCROLL_LINES_ANALOG_INPUT 3



#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_ITEMS_A_ANALOG_INPUT 4
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_ITEMS_A_ARRAY_LENGTH 200

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_SCROLL_POSITION_FB_ANALOG_OUTPUT 0


#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_LINES_A_ANALOG_OUTPUT 1
#define __S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_LINES_A_ARRAY_LENGTH 25

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
CREATE_INTARRAY1D( S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1, __GNSCROLLITEMACTIONSTATE, 200 );;


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

START_GLOBAL_VAR_STRUCT( S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SCROLL_ITEMS_A );
   DECLARE_IO_ARRAY( __LINES_A );
};

START_NVRAM_VAR_STRUCT( S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1 )
{
   unsigned short __GNNUMSCROLLITEMS;
   unsigned short __GNNUMSCROLLLINES;
   DECLARE_INTARRAY( S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1, __GNSCROLLITEMACTIONSTATE );
   short __GNTOPLINEITEMINDEX;
};



#endif //__S2_CHANNEL_LINEUP_SCROLL_ANALOG_V_0_1_H__

