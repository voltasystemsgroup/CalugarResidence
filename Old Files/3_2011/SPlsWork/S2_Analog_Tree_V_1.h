#ifndef __S2_ANALOG_TREE_V_1_H__
#define __S2_ANALOG_TREE_V_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Analog_Tree_V_1_SLOT_VAL_ANALOG_INPUT 0
#define __S2_Analog_Tree_V_1_VAL_IN_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Analog_Tree_V_1_VAL_OUT_ANALOG_OUTPUT 0
#define __S2_Analog_Tree_V_1_VAL_OUT_ARRAY_LENGTH 48

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

START_GLOBAL_VAR_STRUCT( S2_Analog_Tree_V_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VAL_OUT );
};

START_NVRAM_VAR_STRUCT( S2_Analog_Tree_V_1 )
{
};



#endif //__S2_ANALOG_TREE_V_1_H__

