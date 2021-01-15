#ifndef __S2_ANALOG_PRESET_SINGLE_VAL_1_1_H__
#define __S2_ANALOG_PRESET_SINGLE_VAL_1_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Analog_Preset_Single_Val_1_1_INCLUDE_ONE_DIG_INPUT 0
#define __S2_Analog_Preset_Single_Val_1_1_PRESET_SET_DIG_INPUT 1
#define __S2_Analog_Preset_Single_Val_1_1_PRESET_SAVE_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_Analog_Preset_Single_Val_1_1_PRESET_VAL_ANALOG_INPUT 0
#define __S2_Analog_Preset_Single_Val_1_1_VAL_IN_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/
#define __S2_Analog_Preset_Single_Val_1_1_PRESET_ACTIVE_FB_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_Analog_Preset_Single_Val_1_1_VAL_OUT_ANALOG_OUTPUT 0



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
CREATE_INTARRAY1D( S2_Analog_Preset_Single_Val_1_1, __SLOT, 10 );;
CREATE_INTARRAY1D( S2_Analog_Preset_Single_Val_1_1, __VAL, 10 );;


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

START_GLOBAL_VAR_STRUCT( S2_Analog_Preset_Single_Val_1_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Analog_Preset_Single_Val_1_1 )
{
   DECLARE_INTARRAY( S2_Analog_Preset_Single_Val_1_1, __SLOT );
   DECLARE_INTARRAY( S2_Analog_Preset_Single_Val_1_1, __VAL );
};



#endif //__S2_ANALOG_PRESET_SINGLE_VAL_1_1_H__

