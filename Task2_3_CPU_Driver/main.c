/*************************************************************************************************
*  File Description :-
* ----------------------
*	Filename: IntCtrl.c 
*	   Brief:
* 			IntCtrl Driver, Init function Implementation for NVIC only
*    Details:
*   
**************************************************************************************************/

#include "Std_Types.h"
#include "Platform_Types.h"
#include "CPUDriver.h"
#define  FOREVER  0x01

int main(void) {

	CpuDriver_DisableGlobalInterrupt();
	CpuDriver_EnableGlobalInterrupt();
	
	while(FOREVER);

	return 0;
}
