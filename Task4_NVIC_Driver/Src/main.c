/*************************************************************************************************
*  File Description :-
* ----------------------
*	Filename: IntCtrl.c 
*	   Brief:
* 			IntCtrl Driver, Init function Implementation for NVIC only
*    Details:
*   
**************************************************************************************************/

#include "IntCtrl.h"
#include "Std_Types.h"
#include "Platform_Types.h"
#define  FOREVER  0x01

int main(void) {

	IntCtrl_Init();
	
	while(FOREVER);

	return 0;
}
