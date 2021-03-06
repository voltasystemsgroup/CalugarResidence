#ifndef __S2_CHANNEL_LINEUP_PRESET_V_0_1_H__
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_HELD_DIG_INPUT 0
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_HELD_ARRAY_LENGTH 32
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_NOT_HELD_DIG_INPUT 32
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_NOT_HELD_ARRAY_LENGTH 32

/*
* ANALOG_INPUT
*/
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_CURRENT_CHANNEL_NUMBER_ANALOG_INPUT 1

#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_CURRENT_CHANNEL_NAME_STRING_INPUT 0
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_CURRENT_CHANNEL_NAME_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_CHANNEL_LINEUP_PRESET_V_0_1, __CURRENT_CHANNEL_NAME, __S2_CHANNEL_LINEUP_PRESET_V_0_1_CURRENT_CHANNEL_NAME_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/

#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_FB_DIG_OUTPUT 0
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_FB_ARRAY_LENGTH 32

/*
* ANALOG_OUTPUT
*/
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_DIRECT_CHANNEL_CALL_ANALOG_OUTPUT 0


#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_CHANNEL_NUMBER_ANALOG_OUTPUT 1
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_CHANNEL_NUMBER_ARRAY_LENGTH 32
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_NAME_STRING_OUTPUT 33
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_PRESET_NAME_ARRAY_LENGTH 32

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
CREATE_INTARRAY1D( S2_CHANNEL_LINEUP_PRESET_V_0_1, __GNPRESETCHANNELNUMBER, 32 );;


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
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_GSBOOTFIRST_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_CHANNEL_LINEUP_PRESET_V_0_1, __GSBOOTFIRST, __S2_CHANNEL_LINEUP_PRESET_V_0_1_GSBOOTFIRST_STRING_MAX_LEN );
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_GSPRESETNAME_ARRAY_NUM_ELEMS 32
#define __S2_CHANNEL_LINEUP_PRESET_V_0_1_GSPRESETNAME_ARRAY_NUM_CHARS 64
CREATE_STRING_ARRAY( S2_CHANNEL_LINEUP_PRESET_V_0_1, __GSPRESETNAME, __S2_CHANNEL_LINEUP_PRESET_V_0_1_GSPRESETNAME_ARRAY_NUM_ELEMS, __S2_CHANNEL_LINEUP_PRESET_V_0_1_GSPRESETNAME_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_CHANNEL_LINEUP_PRESET_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __PRESET_HELD );
   DECLARE_IO_ARRAY( __PRESET_NOT_HELD );
   DECLARE_IO_ARRAY( __PRESET_FB );
   DECLARE_IO_ARRAY( __PRESET_CHANNEL_NUMBER );
   DECLARE_IO_ARRAY( __PRESET_NAME );
   DECLARE_STRING_STRUCT( S2_CHANNEL_LINEUP_PRESET_V_0_1, __CURRENT_CHANNEL_NAME );
};

START_NVRAM_VAR_STRUCT( S2_CHANNEL_LINEUP_PRESET_V_0_1 )
{
   DECLARE_STRING_STRUCT( S2_CHANNEL_LINEUP_PRESET_V_0_1, __GSBOOTFIRST );
   DECLARE_STRING_ARRAY( S2_CHANNEL_LINEUP_PRESET_V_0_1, __GSPRESETNAME );
   DECLARE_INTARRAY( S2_CHANNEL_LINEUP_PRESET_V_0_1, __GNPRESETCHANNELNUMBER );
};



#endif //__S2_CHANNEL_LINEUP_PRESET_V_0_1_H__

