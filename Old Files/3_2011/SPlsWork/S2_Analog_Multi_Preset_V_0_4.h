#ifndef __S2_ANALOG_MULTI_PRESET_V_0_4_H__
#define __S2_ANALOG_MULTI_PRESET_V_0_4_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Analog_Multi_Preset_V_0_4_PRESET_SAVE_DIG_INPUT 0
#define __S2_Analog_Multi_Preset_V_0_4_PRESET_TRIG_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_Analog_Multi_Preset_V_0_4_PRESET_INDEX_ANALOG_INPUT 0



#define __S2_Analog_Multi_Preset_V_0_4_VAL_IN_ANALOG_INPUT 1
#define __S2_Analog_Multi_Preset_V_0_4_VAL_IN_ARRAY_LENGTH 16

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Analog_Multi_Preset_V_0_4_VAL_OUT_ANALOG_OUTPUT 0
#define __S2_Analog_Multi_Preset_V_0_4_VAL_OUT_ARRAY_LENGTH 16

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

CREATE_INTARRAY2D( S2_Analog_Multi_Preset_V_0_4, __NINDEX, 16, 16 );;

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

START_GLOBAL_VAR_STRUCT( S2_Analog_Multi_Preset_V_0_4 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VAL_IN );
   DECLARE_IO_ARRAY( __VAL_OUT );
};

START_NVRAM_VAR_STRUCT( S2_Analog_Multi_Preset_V_0_4 )
{
   DECLARE_INTARRAY( S2_Analog_Multi_Preset_V_0_4, __NINDEX );
};



#endif //__S2_ANALOG_MULTI_PRESET_V_0_4_H__

