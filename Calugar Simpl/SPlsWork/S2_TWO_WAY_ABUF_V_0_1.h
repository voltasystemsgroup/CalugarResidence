#ifndef __S2_TWO_WAY_ABUF_V_0_1_H__
#define __S2_TWO_WAY_ABUF_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_TWO_WAY_ABUF_V_0_1_ENABLE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_TWO_WAY_ABUF_V_0_1_TX_IN_ANALOG_INPUT 0
#define __S2_TWO_WAY_ABUF_V_0_1_RX_IN_ANALOG_INPUT 1
#define __S2_TWO_WAY_ABUF_V_0_1_RE_PROPOGATE_ANALOG_INPUT 2




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_TWO_WAY_ABUF_V_0_1_TX_OUT_ANALOG_OUTPUT 0
#define __S2_TWO_WAY_ABUF_V_0_1_RX_OUT_ANALOG_OUTPUT 1



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

START_GLOBAL_VAR_STRUCT( S2_TWO_WAY_ABUF_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_TWO_WAY_ABUF_V_0_1 )
{
};



#endif //__S2_TWO_WAY_ABUF_V_0_1_H__

