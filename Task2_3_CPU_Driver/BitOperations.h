/*************************************************************************
 *         File: BitOperations.h
 * 	Description: 
 * 			Gathering mostly used Bit Operation MACROs.
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
*/

#ifndef BIT_OPERATIONS_H
#define BIT_OPERATIONS_H

#include "Platform_Types.h"

/* Normal Bit Operations Marcos */
#define SET_BIT(BINARY, BIT) (BINARY |= (1<<BIT))				/* Set a certain bit in any binary */
#define CLR_BIT(BINARY, BIT) (BINARY &= (~(1<<BIT)))			/* Clear a certain bit in any binary */
#define TGL_BIT(BINARY, BIT) (BINARY ^= (1<<BIT))				/* Toggle a certain bit in any binary */
#define GET_BIT(BINARY, BIT) ((BINARY & (1<<BIT))>>BIT)			/* Fetch Value of a specific bit in any binary*/


/* BitBanding - Bit Operations Marcos */

/*
	BIT_OFFSET(REG, BASE_ADDR, BIT) 	->  REG: should be casted by (volatile uint32 *const)
*/
#define BIT_OFFSET(REG, BASE_ADDR, BIT) (((REG-BASE_ADDR)*32)+BIT)	// ((REG-BASE_ADDR)/4) No Need to divied by 4 because casting is implemented

#define BB_PERIPHERAL_ALIAS_BASE_ADDR	(volatile uint32 *const)0x42000000
#define BB_PERIPHERAL_BASE_ADDR			(volatile uint32 *const)0x40000000
#define BITBAND_PERIPHERAL_SET_BIT(REG, BIT) *(BB_PERIPHERAL_ALIAS_BASE_ADDR + (BIT_OFFSET(REG, BASE_ADDR, BIT)*4)) = 0x1
#define BITBAND_PERIPHERAL_CLR_BIT(REG, BIT) *(BB_PERIPHERAL_ALIAS_BASE_ADDR + (BIT_OFFSET(REG, BASE_ADDR, BIT)*4)) = 0x0

#define BB_SRAM_ALIAS_BASE_ADDR	(volatile uint32 *const)0x22000000
#define BB_SRAM_BASE_ADDR		(volatile uint32 *const)0x20000000
#define BITBAND_SRAM_SET_BIT(REG, BIT) *(BB_SRAM_ALIAS_BASE_ADDR + (BIT_OFFSET(REG, BASE_ADDR, BIT)*4)) = 0x1
#define BITBAND_SRAM_CLR_BIT(REG, BIT) *(BB_SRAM_ALIAS_BASE_ADDR + (BIT_OFFSET(REG, BASE_ADDR, BIT)*4)) = 0x0

#endif /* BIT_OPERATIONS_H */
