#ifndef __S2_SUBPAGE_HANDLER_V_0_2_H__
#define __S2_SUBPAGE_HANDLER_V_0_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_SUBPAGE_HANDLER_V_0_2_SUBPAGE_DIG_INPUT 0
#define __S2_SUBPAGE_HANDLER_V_0_2_SUBPAGE_ARRAY_LENGTH 32

/*
* ANALOG_INPUT
*/
#define __S2_SUBPAGE_HANDLER_V_0_2_PAGE_POSITION_INDEX_ANALOG_INPUT 0



#define __S2_SUBPAGE_HANDLER_V_0_2_PAGE_POSITION_SUBPAGE_INDEX_IN_ANALOG_INPUT 1
#define __S2_SUBPAGE_HANDLER_V_0_2_PAGE_POSITION_SUBPAGE_INDEX_IN_ARRAY_LENGTH 8

/*
* DIGITAL_OUTPUT
*/

#define __S2_SUBPAGE_HANDLER_V_0_2_SUBPAGE_FB_DIG_OUTPUT 0
#define __S2_SUBPAGE_HANDLER_V_0_2_SUBPAGE_FB_ARRAY_LENGTH 32

/*
* ANALOG_OUTPUT
*/


#define __S2_SUBPAGE_HANDLER_V_0_2_PAGE_POSITION_SUBPAGE_INDEX_OUT_ANALOG_OUTPUT 0
#define __S2_SUBPAGE_HANDLER_V_0_2_PAGE_POSITION_SUBPAGE_INDEX_OUT_ARRAY_LENGTH 8

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
CREATE_INTARRAY1D( S2_SUBPAGE_HANDLER_V_0_2, __GNPAGEPOSITIONSUBPAGEINDEX, 8 );;


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

START_GLOBAL_VAR_STRUCT( S2_SUBPAGE_HANDLER_V_0_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SUBPAGE );
   DECLARE_IO_ARRAY( __SUBPAGE_FB );
   DECLARE_IO_ARRAY( __PAGE_POSITION_SUBPAGE_INDEX_IN );
   DECLARE_IO_ARRAY( __PAGE_POSITION_SUBPAGE_INDEX_OUT );
   unsigned short __GNINITCOMPLETE;
   DECLARE_INTARRAY( S2_SUBPAGE_HANDLER_V_0_2, __GNPAGEPOSITIONSUBPAGEINDEX );
};

START_NVRAM_VAR_STRUCT( S2_SUBPAGE_HANDLER_V_0_2 )
{
};



#endif //__S2_SUBPAGE_HANDLER_V_0_2_H__

