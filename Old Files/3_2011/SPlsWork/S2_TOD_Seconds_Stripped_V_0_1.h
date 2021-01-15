#ifndef __S2_TOD_SECONDS_STRIPPED_V_0_1_H__
#define __S2_TOD_SECONDS_STRIPPED_V_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_TOD_Seconds_Stripped_V_0_1_TOD_STRING_INPUT 0
#define __S2_TOD_Seconds_Stripped_V_0_1_TOD_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_TOD_Seconds_Stripped_V_0_1, __TOD, __S2_TOD_Seconds_Stripped_V_0_1_TOD_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_TOD_Seconds_Stripped_V_0_1_TOD_STRIPPED_STRING_OUTPUT 0


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
#define __S2_TOD_Seconds_Stripped_V_0_1_GSTODSTRIPPED_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_TOD_Seconds_Stripped_V_0_1, __GSTODSTRIPPED, __S2_TOD_Seconds_Stripped_V_0_1_GSTODSTRIPPED_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_TOD_Seconds_Stripped_V_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_TOD_Seconds_Stripped_V_0_1, __GSTODSTRIPPED );
   DECLARE_STRING_STRUCT( S2_TOD_Seconds_Stripped_V_0_1, __TOD );
};

START_NVRAM_VAR_STRUCT( S2_TOD_Seconds_Stripped_V_0_1 )
{
};



#endif //__S2_TOD_SECONDS_STRIPPED_V_0_1_H__

