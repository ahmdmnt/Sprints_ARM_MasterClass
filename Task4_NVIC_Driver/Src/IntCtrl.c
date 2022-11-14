/*************************************************************************************************
*  File Description :-
* ----------------------
*	Filename: IntCtrl.c 
*	   Brief:
* 			IntCtrl Driver, Init function Implementation for NVIC only
*    Details:
*   
**************************************************************************************************/

#include "Mcu_Hw.h"
#include "Std_Types.h"
#include "BitOperations.h"
#include "IntCtrl.h"
#include "IntCtrl_Cfg.h"


void IntCtrl_Init(void) {
	uint8 i;
	IntId_Type intId;
	uint32 intPriGrp, intPriSubGrp;
	uint8 registerOffset_ENx = 0x0;
	uint8 bitOffset_ENx = 0x0;
	uint8 registerOffset_PRIx = 0x0;
	uint8 bitOffset_PRIx = 0x0;
	uint32 priMask = PRIx_MASK0;
	uint32 intPriCombination;
	
	/* TODO: Configure Grouping and SubGrouping System in APINT */
	*APINT = VECT_KEY+((uint32)(IntPriLevel<<5));
	
	
	for(i=0; i<MAX_USER_CFG_INTERRUPTS ;i++) {
		intId = NvicConfigInt[i].IntId;
		intPriGrp = NvicConfigInt[i].IntPriGrp;
		intPriSubGrp = NvicConfigInt[i].IntIntPriSubGrp;
		
		/* TODO: Assign User-Config Interrupts Grp/SubGrp Priorities */
		registerOffset_PRIx = intId/4;
		bitOffset_PRIx = (intId%4)+5;
		switch(intId%4)
		{
			case 0:
				priMask = PRIx_MASK0;
				break;
			case 1:
				priMask = PRIx_MASK1;
				break;
			case 2:
				priMask = PRIx_MASK2;
				break;
			case 3:
				priMask = PRIx_MASK3;
				break;
		}
			
		switch(IntPriLevel) {
			case XXX:
				*(PRIx_BASE_ADDR+registerOffset_PRIx) = ((*(PRIx_BASE_ADDR+registerOffset_PRIx))&priMask) | (intPriGrp<<bitOffset_PRIx);
				break;
			case XXY:
				intPriCombination = (intPriGrp<<1) + intPriSubGrp;
				*(PRIx_BASE_ADDR+registerOffset_PRIx) = ((*(PRIx_BASE_ADDR+registerOffset_PRIx))&priMask) | (intPriCombination<<bitOffset_PRIx);
				break;
			case XYY:
				intPriCombination = (intPriGrp<<2) + intPriSubGrp;
				*(PRIx_BASE_ADDR+registerOffset_PRIx) = ((*(PRIx_BASE_ADDR+registerOffset_PRIx))&priMask) | (intPriCombination<<bitOffset_PRIx);
				break;
			case YYY:
				*(PRIx_BASE_ADDR+registerOffset_PRIx) = ((*(PRIx_BASE_ADDR+registerOffset_PRIx))&priMask) | (intPriSubGrp<<bitOffset_PRIx);
				break;
		}
			

		/* TODO: Enable User-Config NVIC Registers */
		registerOffset_ENx = intId/32;																		//Calculate Register Offset from Int ID
		bitOffset_ENx = intId%32;																					//Calculate Bit Offset from Int ID	
		SET_BIT((*(ENx_BASE_ADDR+registerOffset_ENx)), bitOffset_ENx);		//Set the Corresponding Enable Int Bit by 1
	}
}

//PRIx_BASE_ADDR
