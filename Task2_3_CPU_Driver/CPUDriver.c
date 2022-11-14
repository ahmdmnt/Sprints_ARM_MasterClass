/*************************************************************************
 *         File: CpuDriver.c
 * 	Description: 
 * 			Global Interrupt and Critical Section handling
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
*************************************************************************/

/*************************************************************************
 * STATIC FUNCTIONS PROTOTYPE :
*************************************************************************/
static void CpuDriver_EnablePrivilegeMode(void);
static void CpuDriver_DisablePrivilegeMode(void);


/*************************************************************************
 * FUNCTIONS DEFINITION :
*************************************************************************/
void CpuDriver_EnableGlobalInterrupt(void) {
	/* TODO : Enable Privilege Mode */
	CpuDriver_EnablePrivilegeMode();
	/* TODO : Enable Programmable Priority Interrupts */
	__asm("CPSIE i\n");
	/* TODO : Disable Privilege Mode */
	CpuDriver_DisablePrivilegeMode();
}
void CpuDriver_DisableGlobalInterrupt(void) {
	/* TODO : Enable Privilege Mode */
	CpuDriver_EnablePrivilegeMode();
	/* TODO : Disable Programmable Priority Interrupts */
	__asm("CPSID i\n");
	/* TODO : Disable Privilege Mode */
	CpuDriver_DisablePrivilegeMode();
}

/*************************************************************************
 * STATIC FUNCTIONS DEFINITION :
*************************************************************************/
static void CpuDriver_EnablePrivilegeMode(void) {
	__asm("SVC #1");
}
static void CpuDriver_DisablePrivilegeMode(void) {
	__asm("MOV R0, 0x1\n");
	__asm("MSR CONTROL, R0\n");	
}

/*************************************************************************
 * ISR DEFINITION :
*************************************************************************/
void SVC_Handler(void) {
	__asm("MOV R0, 0x0\n");
	__asm("MSR CONTROL, R0\n");
}