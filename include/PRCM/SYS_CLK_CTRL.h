#ifndef __SYS_CLK1_CTRL_H__
#define __SYS_CLK1_CTRL_H__

#include "LL_base.h"
#include "LL_PRCM_def.h"

#define LL_PRCM_SYS_CLK_BIT_EN              LL_bit(31)

/* The following bits only for SYS_CLK1_CTRL */
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_Pos     (16U)
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_Msk     (0x3U << LL_PRCM_SYS_CLK1_CPU_CLK_SRC_Pos)
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_Start   LL_PRCM_SYS_CLK1_CPUCLK_SRC_Pos
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_End     (LL_PRCM_SYS_CLK1_CPUCLK_SRC_Pos + 1U)
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_HFCLK   (0x0U)
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_LFCLK   (0x1U)
#define LL_PRCM_SYS_CLK1_CPUCLK_SRC_SYSCLK  (0x2U)

#endif