#ifndef __SYS_LFCLK_CTRL_H__
#define __SYS_LFCLK_CTRL_H__

#include "LL_base.h"
#include "LL_PRCM_def.h"

#define LL_PRCM_LFCLK_BIT_EXT32K_EN      LL_bit(31)
#define LL_PRCM_LFCLK_BIT_INT32K_EN      LL_bit(30)

#define LL_PRCM_LFCLK_BASE_SRC_Pos       (24U)
#define LL_PRCM_LFCLK_BASE_SRC_Msk       (0x1U << LL_PRCM_LFCLK_BASE_SRC_Pos)
#define LL_PRCM_LFCLK_BASE_SRC_Start     (LL_PRCM_LFCLK_BASE_SRC_Pos)
#define LL_PRCM_LFCLK_BASE_SRC_End       (LL_PRCM_LFCLK_BASE_SRC_Pos)
#define LL_PRCM_LFCLK_BASE_SRC_INT32K    (0x0U << LL_PRCM_LFCLK_BASE_SRC_Pos)
#define LL_PRCM_LFCLK_BASE_SRC_EXT32K    (0x1U << LL_PRCM_LFCLK_BASE_SRC_Pos)

#define LL_PRCM_LFCLK_PADCLK_OUT_FM_Pos      (8U)
#define LL_PRCM_LFLCKCTL_PADCLK_OUT_FM_Msk      (0xFFFFU << LL_PRCM_LFCLK_PADCLK_OUT_FM_Pos)
#define LL_PRCM_LFCLK_PADCLK_OUT_FM_Start    (LL_PRCM_LFCLK_PADCLK_OUT_FM_Pos)
#define LL_PRCM_LFCLK_PADCLK_OUT_FM_End      (LL_PRCM_LFCLK_PADCLK_OUT_FM_Pos + 15U)

#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_Pos             (1U)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_Msk             (0x3U << LL_PRCM_LFCLK_PADCLK_OUT_SRC_Pos)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_Start           (LL_PRCM_LFCLK_PADCLK_OUT_SRC_Pos)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_End             (LL_PRCM_LFCLK_PADCLK_OUT_SRC_Pos + 1U)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_LFCLK_RC        (0x0U)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_LFCLH_CRYSTAL   (0x1U)
#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_HFCLK_CRYSTAL   (0x2U)
#elif (CONFIG_CHIP_ARCH_VER == 3)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_LFCLK_RCOCALIB  (0x2U)
#define LL_PRCM_LFCLK_PADCLK_OUT_SRC_HFCLK_CRYSTAL   (0x3U)
#endif /* CONFIG_CHIP_ARCH_VER */

#define LL_PRCM_LFCLK_BIT_PADCLK_OUT_EN              LL_bit(0)

/* drv: PowerCtrl, CPU, BUS, LPUART, GPADC, Keyboard */
#define LL_PRCM_LFCLK_MODULE_SYS                        (0x0U)
#if (CONFIG_CHIP_ARCH_VER == 3)
/* drv: WakeupTimer */
#define LL_PRCM_LFCLK_MODULE_WKTIMER                    (0x1U)
#define LL_PRCM_LFCLK_MODULE_WLAN                       (0x2U)
#define LL_PRCM_LFCLK_MODULE_BLE                        (0x3U)
#define LL_PRCM_LFCLK_MODULE_RTC                        (0x4U)
#define LL_PRCM_LFCLK_MODULE_MAX                        (0x5U)
#else
#define LL_PRCM_LFCLK_MODULE_MAX                        (0x1U)
#endif

#define LL_PRCM_LFCLK_SRC_LOSC      (0x0U)  /* External, 32.768Khz */
#define LL_PRCM_LFCLK_SRC_RCOSC     (0x1U)  /* RCOSC/32, 20~50Khz */
#define LL_PRCM_LFCLK_SRC_RCCAL     (0x2U)  /* RCOSC Calibration, about 32Khz */
#define LL_PRCM_LFCLK_SRC_DIV32K    (0x3U)  /* from 32M or HOSC division, 32Khz */
#define LL_PRCM_LFCLK_SRC_MAX       (0x4U)

#endif /* __SYS_FCLK_CTRL_H__ */
