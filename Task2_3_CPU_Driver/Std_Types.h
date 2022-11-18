/**************************************************************************************************************
 *         File: STD_Types.h
 * 	Description: 
 * 			Gathering mostly used STD Defined types,
 * 			Built over "AUTOSAR SWS of Standard Types"
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
 *************************************************************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char StatusType; /* OSEK compliance */

#define E_OK	0x00
#define E_NOT_OK	0x01

#define STD_HIGH	0x01	/* Physical state 5V or 3.3V */ 
#define STD_LOW		0x00	/* Physical state 0V */ 

#define STD_ACTIVE	0x01	/* Logical state active */ 
#define STD_IDLE	0x00	/* Logical state idle */ 

#define STD_ON		0x01
#define STD_OFF		0x00

/* Extra Types */
#define STD_ENABLE	0x01
#define STD_DISABLE	0x00

#endif /* STD_TYPES_H */
