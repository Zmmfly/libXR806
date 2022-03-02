#ifndef __SYS_TOP_LDO_CTRL_H__
#define __SYS_TOP_LDO_CTRL_H__

#include "LL_base.h"
#include "PRCM/LL_PRCM_def.h"

#if CONFIG_CHIP_ARCH_VER == 2
#define LL_PRCM_TOPLDO_Pos      (16U)
#define LL_PRCM_TOPLDO_Mask     (0xFU << LL_PRCM_TOPLDO_Pos)
#define LL_PRCM_TOPLDO_Start    (LL_PRCM_TOPLDO_Pos + 1U)
#define LL_PRCM_TOPLDO_End      (LL_PRCM_TOPLDO_Pos + 4U)
#define LL_PRCM_TOPLDO_1V8      (0x0U)
#define LL_PRCM_TOPLDO_1V4      (0x1U)
#define LL_PRCM_TOPLDO_1V7      (0x2U)
#define LL_PRCM_TOPLDO_1V8      (0x3U)
#define LL_PRCM_TOPLDO_1V9      (0x4U)
#define LL_PRCM_TOPLDO_2V0      (0x5U)
#define LL_PRCM_TOPLDO_2V1      (0x6U)
#define LL_PRCM_TOPLDO_2V4      (0x7U)
#define LL_PRCM_TOPLDO_2V5      (0x8U)
#define LL_PRCM_TOPLDO_2V6      (0x9U)
#define LL_PRCM_TOPLDO_2V9      (0xAU)
#define LL_PRCM_TOPLDO_3V0      (0xBU)
#define LL_PRCM_TOPLDO_3V1      (0xCU)
#define LL_PRCM_TOPLDO_3V3      (0xDU)
#define LL_PRCM_TOPLDO_3V4      (0xEU)
#define LL_PRCM_TOPLDO_3V6      (0xFU)


#elif CONFIG_CHIP_ARCH_VER == 3
#define LL_PRCM_TOPLDO_Pos      (25U)
#define LL_PRCM_TOPLDO_Mask     (0xFU << LL_PRCM_TOPLDO_Pos)
#define LL_PRCM_TOPLDO_Start    (LL_PRCM_TOPLDO_Pos + 1U)
#define LL_PRCM_TOPLDO_End      (LL_PRCM_TOPLDO_Pos + 4U)
#define LL_PRCM_TOPLDO_0V9      (0x0U)
#define LL_PRCM_TOPLDO_1V0      (0x1U)
#define LL_PRCM_TOPLDO_1V1      (0x2U)
#define LL_PRCM_TOPLDO_1V2      (0x3U)
#define LL_PRCM_TOPLDO_1V3      (0x4U)
#define LL_PRCM_TOPLDO_1V4      (0x5U)
#define LL_PRCM_TOPLDO_1V5      (0x6U)
#define LL_PRCM_TOPLDO_1V6      (0x7U)
#define LL_PRCM_TOPLDO_1V7      (0x8U)
#define LL_PRCM_TOPLDO_1V8      (0x9U)
#define LL_PRCM_TOPLDO_1V9      (0xAU)
#define LL_PRCM_TOPLDO_2V0      (0xBU)
#define LL_PRCM_TOPLDO_2V1      (0xCU)
#define LL_PRCM_TOPLDO_2V2      (0xDU)
#define LL_PRCM_TOPLDO_2V3      (0xEU)
#define LL_PRCM_TOPLDO_2V4      (0xFU)
#endif

#if CONFIG_CHIP_ARCH_VER == 3
#define LL_PRCM_SMPS_Pos        (12U)
#define LL_PRCM_SMPS_Mask       (0xFU << LL_PRCM_SMPS_Pos)
#define LL_PRCM_SMPS_Start      (LL_PRCM_SMPS_Pos + 1U)
#define LL_PRCM_SMPS_End        (LL_PRCM_SMPS_Pos + 4U)
#define LL_PRCM_SMPS_1V0        (0x0U)
#define LL_PRCM_SMPS_1V1        (0x1U)
#define LL_PRCM_SMPS_1V2        (0x2U)
#define LL_PRCM_SMPS_1V3        (0x3U)
#define LL_PRCM_SMPS_1V4        (0x4U)
#define LL_PRCM_SMPS_1V5        (0x5U)
#define LL_PRCM_SMPS_1V6        (0x6U)
#define LL_PRCM_SMPS_1V7        (0x7U)
#define LL_PRCM_SMPS_1V8        (0x8U)
#define LL_PRCM_SMPS_1V9        (0x9U)
#define LL_PRCM_SMPS_2V0        (0xAU)
#define LL_PRCM_SMPS_2V1        (0xBU)
#define LL_PRCM_SMPS_2V2        (0xCU)
#define LL_PRCM_SMPS_2V3        (0xDU)
#define LL_PRCM_SMPS_2V4        (0xEU)
#define LL_PRCM_SMPS_2V5        (0xFU)

#define LL_PRCM_BIT_DLDO_OFF_SMPS_ON    LL_bit(9)
#define LL_PRCM_BIT_SYSSTB_SMPS_OFF     LL_bit(8)
#define LL_PRCM_BIT_SMPS_PWM_SEL        LL_bit(7)

#define LL_PRCM_SMPS_PWM_SEL_CLK_Pos        (12U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_Mask       (0xFU << LL_PRCM_SMPS_PWM_SEL_CLK_Pos)
#define LL_PRCM_SMPS_PWM_SEL_CLK_Start      (LL_PRCM_SMPS_PWM_SEL_CLK_Pos + 1U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_End        (LL_PRCM_SMPS_PWM_SEL_CLK_Pos + 4U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_RFIPDPLL   (0x0U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_RFIPDCXO   (0x0U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_WLANPHYEN  (0x0U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_APPCPUEN   (0x0U)
#define LL_PRCM_SMPS_PWM_SEL_CLK_BLERFEN    (0x0U)

#define LL_PRCM_BIT_OVR_SMPS_DET        LL_bit(2)
#define LL_PRCM_BIT_SMPS_DET_VALUE      LL_bit(1)
#define LL_PRCM_BIT_SMPE_DET_EN         LL_bit(0)

#endif

#endif