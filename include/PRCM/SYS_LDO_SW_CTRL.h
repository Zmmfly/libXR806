#ifndef __SYS_LDO_SW_CTRL_H__
#define __SYS_LDO_SW_CTRL_H__

#include "LL_base.h"

#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_LDO1_RET_Pos        (24U)
#define LL_PRCM_LDO1_RET_Mask       (0xFU << LL_PRCM_LDO1_RET_Pos)
#define LL_PRCM_LDO1_RET_Start      (LL_PRCM_LDO1_RET_Pos + 1U)
#define LL_PRCM_LDO1_RET_End        (LL_PRCM_LDO1_RET_Pos + 4U)
#define LL_PRCM_LDO1_RET_1125MV     (0x0U)
#define LL_PRCM_LDO1_RET_1025MV     (0x1U)
#define LL_PRCM_LDO1_RET_0925MV     (0x2U)
#define LL_PRCM_LDO1_RET_0825MV     (0x3U)
#define LL_PRCM_LDO1_RET_0725MV     (0x4U)
#define LL_PRCM_LDO1_RET_0625MV     (0x5U)
#define LL_PRCM_LDO1_RET_1175MV     (0x8U)
#define LL_PRCM_LDO1_RET_1225MV     (0x9U)
#define LL_PRCM_LDO1_RET_1275MV     (0xAU)
#define LL_PRCM_LDO1_RET_1325MV     (0xBU)
#define LL_PRCM_LDO1_RET_1375MV     (0xCU)

#elif (CONFIG_CHIP_ARCH_VER == 3)
#define LL_PRCM_DLDO_RET_Pos        (24U)
#define LL_PRCM_DLDO_RET_Mask       (0xFU << LL_PRCM_DLDO_RET_Pos)
#define LL_PRCM_DLDO_RET_Start      (LL_PRCM_DLDO_RET_Pos + 1U)
#define LL_PRCM_DLDO_RET_End        (LL_PRCM_DLDO_RET_Pos + 4U)
#define LL_PRCM_DLDO_RET_1125MV     (0x0U) 
#define LL_PRCM_DLDO_RET_1025MV     (0x1U)
#define LL_PRCM_DLDO_RET_0925MV     (0x2U)
#define LL_PRCM_DLDO_RET_0825MV     (0x3U)
#define LL_PRCM_DLDO_RET_0725MV     (0x4U)
#define LL_PRCM_DLDO_RET_0625MV     (0x5U)
#define LL_PRCM_DLDO_RET_1175MV     (0x8U)
#define LL_PRCM_DLDO_RET_1225MV     (0x9U)
#define LL_PRCM_DLDO_RET_1275MV     (0xAU)
#define LL_PRCM_DLDO_RET_1325MV     (0xBU)
#define LL_PRCM_DLDO_RET_1375MV     (0xCU)

#define LL_PRCM_BIT_EXTLDO_BYPASS       LL_bit(23)

#define LL_PRCM_EXTLDO_SW_TRIM_Pos  (21U)
#define LL_PRCM_EXTLDO_SW_TRIM_Mask (0x3U << LL_PRCM_EXTLDO_SW_TRIM_Pos)
#define LL_PRCM_EXTLDO_SW_TRIM_Start (LL_PRCM_EXTLDO_SW_TRIM_Pos + 1U)
#define LL_PRCM_EXTLDO_SW_TRIM_End   (LL_PRCM_EXTLDO_SW_TRIM_Pos + 2U)

#define LL_PRCM_BIT_EXTLDO_SW_MODE      LL_bit(20)

#endif /* CONFIG_CHIP_ARCH_VER */

#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_EXTLDO_Pos      (18U)
#define LL_PRCM_EXTLDO_Mask     (0x1U << LL_PRCM_EXTLDO_Pos)
#define LL_PRCM_EXTLDO_Start    (LL_PRCM_EXTLDO_Pos)
#define LL_PRCM_EXTLDO_End      (LL_PRCM_EXTLDO_Pos)
#define LL_PRCM_EXTLDO_3V3      (0x0U)
#define LL_PRCM_EXTLDO_3V1      (0x1U)
#elif (CONFIG_CHIP_ARCH_VER == 3)
#define LL_PRCM_EXTLDO_Pos      (18U)
#define LL_PRCM_EXTLDO_Mask     (0x3U << LL_PRCM_EXTLDO_Pos)
#define LL_PRCM_EXTLDO_Start    (LL_PRCM_EXTLDO_Pos + 1U)
#define LL_PRCM_EXTLDO_End      (LL_PRCM_EXTLDO_Pos + 2U)
#define LL_PRCM_EXTLDO_3V3      (0x0U)
#define LL_PRCM_EXTLDO_3V1      (0x1U)
#define LL_PRCM_EXTLDO_2V8      (0x2U)
#define LL_PRCM_EXTLDO_2V5      (0x3U)
#endif /* CONFIG_CHIP_ARCH_VER */

#define LL_PRCM_EXTLDO_MODE_Pos             (16U)
#define LL_PRCM_EXTLDO_MODE_Mask            (0x3U << LL_PRCM_EXTLDO_MODE_Pos)
#define LL_PRCM_EXTLDO_MODE_Start           (LL_PRCM_EXTLDO_MODE_Pos + 1U)
#define LL_PRCM_EXTLDO_MODE_End             (LL_PRCM_EXTLDO_MODE_Pos + 2U)
#define LL_PRCM_EXTLDO_MODE_OFF             (0x0U)
#define LL_PRCM_EXTLDO_MODE_SAME_TOPLDO     (0x1U)
#define LL_PRCM_EXTLDO_MODE_ON              (0x2U)

#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_BIT_SR_SW3      LL_bit(15)
#endif /* CONFIG_CHIP_ARCH_VER */

#define LL_PRCM_BIT_SW5_STATUS  LL_bit(14)
#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_BIT_SW4_STATUS  LL_bit(13)
#define LL_PRCM_BIT_SW3_STATUS  LL_bit(12)
#define LL_PRCM_BIT_SW2_STATUS  LL_bit(11)
#endif /* CONFIG_CHIP_ARCH_VER */
#define LL_PRCM_BIT_SW1_STATUS  LL_bit(8)

#if (CONFIG_CHIP_ARCH_VER == 2)
//TODO hal_prcm.h:336
#endif /* CONFIG_CHIP_ARCH_VER */

#endif /* __SYS_LDO_SW_CTRL_H__ */
