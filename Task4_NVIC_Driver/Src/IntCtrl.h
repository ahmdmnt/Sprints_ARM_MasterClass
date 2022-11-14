/*************************************************************************************************
*  File Description :-
* ----------------------
*	Filename: IntCtrl.h

*	   Brief:
* 
*    Details:
*   
**************************************************************************************************/

#ifndef INTCTRL_H_
#define INTCTRL_H_


#include "Compiler.h"
#include "Platform_Types.h"
#include "Std_Types.h"


#define PRIx_MASK0	0xFFFFFF1F
#define PRIx_MASK1	0xFFFF1FFF
#define PRIx_MASK2	0xFF1FFFFF
#define PRIx_MASK3	0x1FFFFFFF 

typedef enum {
	RESERV_0, EXCEPT_1, EXCEPT_2, EXCEPT_3, EXCEPT_4, EXCEPT_5, EXCEPT_6, RESERV_7,
	RESERV_8, RESERV_9, RESERV_10, EXCEPT_11, EXCEPT_12, RESERV_13, EXCEPT_14, EXCEPT_15,
	INT_0, INT_1, INT_2, INT_3, INT_4, INT_5, INT_6, INT_7, INT_8, INT_9, INT_10, INT_11, INT_12, INT_13, INT_14, INT_15,
	INT_16, INT_17, INT_18, INT_19, INT_20, INT_21, INT_22, INT_23, INT_24, INT_25, INT_26, INT_27, INT_28, INT_29, INT_30,
	INT_31, INT_32, INT_33, INT_34, INT_35, INT_36, INT_37, INT_38, INT_39, INT_40, INT_41, INT_42, INT_43, INT_44, INT_45,
	INT_46, INT_47, INT_48, INT_49, INT_50, INT_51, INT_52, INT_53, INT_54, INT_55, INT_56, INT_57, INT_58, INT_59, INT_60,
	INT_61, INT_62, INT_63, INT_64, INT_65, INT_66, INT_67, INT_68, INT_69, INT_70, INT_71, INT_72, INT_73, INT_74, NT_75,
	INT_76, INT_77, INT_78, INT_79, INT_80, INT_81, INT_82, INT_83, INT_84, INT_85, INT_86, INT_87, INT_88, INT_89, INT_90,
	INT_91, INT_92, INT_93, INT_94, INT_95, INT_96, INT_97, INT_98, INT_99, INT_100, INT_101, INT_102, INT_103, INT_104,
	INT_105, INT_106, INT_107, INT_108, INT_109, INT_110, INT_111, INT_112, INT_113, INT_114, INT_115, INT_116, INT_117,
	INT_118, INT_119, INT_120, INT_121, INT_122, INT_123, INT_124, INT_125, INT_126, INT_127, INT_128, INT_129, INT_130,
	INT_131, INT_132, INT_133, INT_134, INT_135, INT_136, INT_137, INT_138
} IntId_Type;

typedef enum {
	XXX=4, XXY, XYY, YYY
} IntPriLevel_Type;

typedef struct {
	IntId_Type IntId;
	uint8 IntPriGrp;
	uint8 IntIntPriSubGrp;
} Int_ConfigType;


void IntCtrl_Init(void);

#endif /* INTCTRL_H_ */
