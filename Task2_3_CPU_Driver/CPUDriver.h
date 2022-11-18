/*************************************************************************
 *         File: CpuDriver.h
 * 	Description: 
 * 			Global Interrupt and Critical Section handling
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
*************************************************************************/

#ifndef CPU_DRIVER_H
#define CPU_DRIVER_H

/*************************************************************************
 * FUNCTIONS PROTOTYPE :
*************************************************************************/
	void CpuDriver_EnableGlobalInterrupt(void);
	void CpuDriver_DisableGlobalInterrupt(void);

#endif /* CPU_DRIVER_H */
