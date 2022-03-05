#ifndef __SYS_HOSC_CTRL_H__
#define __SYS_HOSC_CTRL_H__

#include "LL_base.h"
#include "LL_PRCM_def.h"

//TODO - add register description

#define LL_PRCM_HOSC_TYPE_Pos   (0U)
#define LL_PRCM_HOSC_TYPE_Msk   (0x3U << LL_PRCM_HOSCTYPE_Pos)
#define LL_PRCM_HOSC_TYPE_Start LL_PRCM_HOSC_TYPE_Pos
#define LL_PRCM_HOSC_TYPE_End   (LL_PRCM_HOSC_TYPE_Pos + 1U)
#define LL_PRCM_HOSC_TYPE_26M   (0x0U)
#define LL_PRCM_HOSC_TYPE_40M   (0x1U)
#define LL_PRCM_HOSC_TYPE_24M   (0x2U)
#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_HOSC_TYPE_52M   (0x3U)
#elif (CONFIG_CHIP_ARCH_VER == 3)
#define LL_PRCM_HOSC_TYPE_32M   (0x3U)
#endif /* CONFIG_CHIP_ARCH_VER */

#endif // __SYS_HOSC_CTRL_H__