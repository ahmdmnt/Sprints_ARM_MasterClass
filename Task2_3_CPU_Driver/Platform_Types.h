/************************************************************************************************************
 *         File: Platform_Types.h
 * 	Description: 
 * 			Gathering mostly used MCPU Platform Defined Datatypes
 * 			Built over "AUTOSAR SWS of Platform Types"
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
 **********************************************************************************************************/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

typedef unsigned char		uint8;
typedef signed char			sint8;
typedef unsigned short		uint16;
typedef signed short		sint16;
typedef unsigned long		uint32;
typedef signed long			sint32;
typedef unsigned long long	uint64;
typedef signed long long	sint64;
typedef float				float32;
typedef double				float64;

typedef enum {
	FALSE, TRUE
} boolean;

typedef enum {
	CPU_TYPE_8, CPU_TYPE_16, CPU_TYPE_32, CPU_TYPE_64
} CPU_TYPE;

typedef enum {
	MSB_FIRST, LSB_FIRST
} CPU_BIT_ORDER;

typedef enum {
	HIGH_BYTE_FIRST, LOW_BYTE_FIRST
} CPU_BYTE_ORDER;

#endif /* PLATFORM_TYPES_H */
