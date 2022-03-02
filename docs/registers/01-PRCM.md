# PRCM
Base Address: 0x40040000

### 1. SYS_TOP_LDO_CTRL
offset: 0x0000
System TOP_LDO control register

```C
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
```

### 2. SYS_LDO_SW_CTRL
offset: 0x0004
System LDO and switch control register

```C
#if (CONFIG_CHIP_ARCH_VER == 2)
#define LL_PRCM_LDO1_Pos        (24U)
#define LL_PRCM_LDO1_Mask       (0xFU << LL_PRCM_LDO1_Pos)
#define LL_PRCM_LDO1_Start      (LL_PRCM_LDO1_Pos + 1U)
#define LL_PRCM_LDO1_End        (LL_PRCM_LDO1_Pos + 4U)
#define LL_PRCM_LDO1_1125MV     (0x0U)
#define LL_PRCM_LDO1_1025MV     (0x1U)
#define LL_PRCM_LDO1_0925MV     (0x2U)
#define LL_PRCM_LDO1_0825MV     (0x3U)
#define LL_PRCM_LDO1_0725MV     (0x4U)
#define LL_PRCM_LDO1_0625MV     (0x5U)
#define LL_PRCM_LDO1_1175MV     (0x8U)
#define LL_PRCM_LDO1_1225MV     (0x9U)
#define LL_PRCM_LDO1_1275MV     (0xAU)
#define LL_PRCM_LDO1_1325MV     (0xBU)
#define LL_PRCM_LDO1_1375MV     (0xCU)

#elif (CONFIG_CHIP_ARCH_VER == 3)
#define LL_PRCM_DLDO_Pos        (24U)
#define LL_PRCM_DLDO_Mask       (0xFU << LL_PRCM_DLDO_Pos)
#define LL_PRCM_DLDO_Start      (LL_PRCM_DLDO_Pos + 1U)
#define LL_PRCM_DLDO_End        (LL_PRCM_DLDO_Pos + 4U)
#define LL_PRCM_DLDO_1125MV     (0x0U) 
#define LL_PRCM_DLDO_1025MV     (0x1U)
#define LL_PRCM_DLDO_0925MV     (0x2U)
#define LL_PRCM_DLDO_0825MV     (0x3U)
#define LL_PRCM_DLDO_0725MV     (0x4U)
#define LL_PRCM_DLDO_0625MV     (0x5U)
#define LL_PRCM_DLDO_1175MV     (0x8U)
#define LL_PRCM_DLDO_1225MV     (0x9U)
#define LL_PRCM_DLDO_1275MV     (0xAU)
#define LL_PRCM_DLDO_1325MV     (0xBU)
#define LL_PRCM_DLDO_1375MV     (0xCU)

#define LL_PRCM_BIT_EXTLDO_BYPASS       LL_bit(23)

#define LL_PRCM_EXTLDO_SW_TRIM_Pos  (21U)
#define LL_PRCM_EXTLDO_SW_TRIM_Mask (0x3U << LL_PRCM_EXTLDO_SW_TRIM_Pos)

#endif
```

### 3. SYS_LFCLK_CTRL
offset: 0x0008
System LFCLK control register

### 4. SYS_HOSC_CTRL
offset: 0x000C
System HOSC type register

### 5. SYS_RCOSC_CALIB_CTRL
offset: 0x0010
System RCOSC calibration control register

### 6. RESERVED0
offset: 0x0014 ~ 0x001C

### 7. SYS_PLL_CTRL
offset: 0x0020
System PLL control register

### 8. SYS_CLK1_CTRL
offset: 0x0024
System clock 1 control register

### 9. RESERVED28
offset: 0x0028

### 10. SYS_CLK3_CTRL
offset: 0x002C
System clock 3 control register

### 11. AUD_PLL_CTRL(RESERVED30)
offset: 0x0030
Only chip arch v2, Audio PLL control register

### 12. DEV_CLK_CTRL
offset: 0x0034
Device clock control register

### 13. RESERVED1
offset: 0x0038 ~ 0x0040

### 14. AUD_PLL_BIAS(RESERVED)
offset: 0x0044
Only chip arch v2, Audio PLL bias register

### 15. RESERVED2
offset: 0x0048-0x0050

### 16. AUD_PLL_PAT_CTRL(RESERVED)
offset: 0x0054
Only chip arch v2, Audio PLL pattern control register

### 17. DCXO_CTRL
offset: 0x0058
DCXO control register

### 18. HXTALOUT_CTRL(RESERVED)
offset: 0x005C
Only chip arch v2, HXTALOUT control register

### 19. RESERVED
offset: 0x0060 ~ 0x0070

### 20. POWERCTRL_CFG(RESERVED)
offset: 0x0074
Only chip arch v3, power control config register

### 21. RESERVED
offset: 0x0078 ~ 0x007C

### 22. SYS1_RST_STATUS(RESERVED)
offset: 0x0080
Only chip arch v3, system 1 reset status register

### 23. SYS1_STATUS(RESERVED)
offset: 0x0084
Only chip arch v3, system 1 control register

### 24. RESERVED
offset: 0x0088 ~ 0x008C

### 25. SYS3_CTRL
offset: 0x0090
System 3 control register

### 26. SYS3_STATUS
offset: 0x0094
System 3 status register

### 27. SYS1_WAKEUP_CTRL
offset: 0x0098
System 1 wakeup control register

### 28. RESERVED
offset: 0x009C

### 29. SYS1_SLEEP_CTRL
offset: 0x00A0
System 1 sleep control register

### 30. RESERVED
offset: 0x00A4

### 31. DCXO_STABLE_REF_TIME
offset: 0x00A8
DCXO stable reference time register

### 32. DPLL_STABLE_REF_TIME
offset: 0x00AC
DPLL stable reference time register

### 33. LDO_STABLE_REF_TIME
offset: 0x00B0
LDO stable reference time register

### 34. DIG_SWITCH_REF_TIME
offset: 0x00B4
Digital switch reference time register

### 35. RTC_LDO_VOLT_CTRL
offset: 0x00B8
RTC LDO voltage control register

### 36. BANDGAP_STABLE_REF_TIME
offset: 0x00BC
Band gap stable reference time register

### 37. DCDC_STABLE_REF_TIME
offset: 0x00C0
DCDC stable reference time register

### 38. BLE_RTC_RST_CTRL(RESERVED)
offset: 0x00D0
Only chip arch v3, BLE RTC Reset control register

### 39. BLE_RTC_CLK_CTRL(RESERVED)
offset: 0x00D4
Only chip arch v3, BLE RTC Clk control register

### 40. RFAS_CTRL_REG(RESERVED)
offset: 0x00D8
Only chip arch v3, RFAS Reset control register

### 41. CPUA_BOOT_FLAG
offset: 0x0100
CPUA boot flag register

### 42. CPUA_BOOT_ADDR
offset: 0x0104
CPUA boot address register

### 43. CPUA_BOOT_ARG
offset: 0x0108
CPUA boot argument register

### 44. CPUA_PRIV_REG_0T3
offset: 0x010C ~ 0x0118
CPUA private register 0 to 3

### 45. WDG_NORESET_PERIPH
offset: 0x011C
watchdog no reset peripherals

### 46. CPUA_WAKE_TIMER_CNT
offset 0x0120
CPUA wakeup timer counter register

### 47. CPUA_WAKE_TIMER_CMP
offset: 0x0124
CPUA wakeup timer value register

### 48. CPUA_PRIV_TIME_L
offset: 0x0128
CPUA private time register

### 49. CPUA_PRIV_TIME_H
offset: 0x012C
CPUA private time register

### 50. CPUA_WAKE_IO_EN
offset: 0x0130
CPUA IO wakeup enable register

### 51. CPUA_WAKE_IO_MODE(CPUA_WAKE_IO_DEB_CLK)
offset: 0x0134
chip arch v2: CPUA IO wakeup mode register
chip arch v3: CPUA IO wakeup debounce clk register

### 52. CPUA_WAKE_IO_STATUS
offset: 0x0138
CPUA IO wakeup status register

### 53. CPUA_WAKE_IO_HOLD
offset: 0x013C
CPUA IO hold control register

### 54. CPUA_WAKE_IO_GLOBAL_EN
offset: 0x0140
CPUA IO wakeup global enable register

### 55. LDO_MODE_SW_SEL(CPUA_WAKE_IO_DEB_CYCLES0)
offset: 0x0144
chip arch v2: LDO mode software select
chip arch v3: CPUA IO wakeup debounce cycles register

### 56. CPUA_WAKE_IO_DEB_CYCLES1(RESERVED)
offset: 0x0148
Only chip arch v3, CPUA IO wakeup debounce cycles register

### 57. RESERVED
offset: 0x014C

### 58. LDO_MODE_SW_SEL(RESERVED)
offset: 0x0150
Only chip arch v3, LDO mode software select

### 59. RESERVED
offset: 0x015C ~ 0x01FC

### 60. DCDC_PARAM_CTRL
offset: 0x0200
DCDC parameter control register

### 61. ANA_BANDGAP
offset: 0x0204
Analog band gap control register

### 62. CLK_LDO_PARAM
offset: 0x0208
Clock LDO parameter register

### 63. DIG_LDO_PARAM
offset: 0x020C
Digital LDO parameter register

### 64. DPLL_STATUS
offset: 0x0210
DPLL status register

### 65. BONDING_IO
offset: 0x0214
Bonding IO status register

### 66. CPU_RESET_SOURCE
offset: 0x0218
CPU reset source register

### 67. WLAN_HIF_OVERRIDE_CTRL
offset: 0x021C
WLAN HIF override control register

### 68. SRAM_BIST_CTRL
offset: 0x0220
SRAM bist control register

### 69. WLAN_SRAM_SHARE_CTRL(Invalid)
offset: 0x0224
Only chip arch v3, wlan sram share control register

### 70. BLE_16K_SRAM_SHARE_CTRL(Invalid)
offset: 0x0228
Only chip arch v3, ble 16K sram share control register

### 71. RESERVED7(Invalid)
offset: 0x022C
Only chip arch v3

### 72. LPUART0_WAKEUP_CTRL(Invalid)
offset: 0x0230
Only chip arch v3, lpuart0 wakeup control register

### 73. LPUART1_WAKEUP_CTRL(Invalid)
offset: 0x0234
Only chip arch v3, lpuart1 wakeup control register

### 74. GPADC_CLK_CTRL(Invalid)
offset: 0x0238
Only chip arch v3, gpadc clock control register

### 75. CLK_32K_CTRL(Invalid)
offset: 0x023C
Only chip arch v3, 32k clock control register

### 76. WAKEUP_SRC_BUS_CLK_CTRL(Invalid)
offset: 0x0240
Only chip arch v3, wakeup source reset control register

### 77. WAKEUP_SRC_RST_CTRL(Invalid)
offset: 0x0244
Only chip arch v3, wakeup source reset control register

### 78. RESERVED244(Invalid)
offset: 0x0248 ~ 0x024C
Only chip arch v3, 

### 79. FLASH_ENCRYPT_AES_NONCE0(Invalid)
offset: 0x0250
Only chip arch v3

### 80. FLASH_ENCRYPT_AES_NONCE1(Invalid)
offset: 0x0254
Only chip arch v3

### 81. RESERVED260(Invalid)
offset: 0x0258 ~ 0x025C
Only chip arch v3

### 82. BLE_RCOSC_CALIB_CTRL0(Invalid)
offset: 0x0260
Only chip arch v3, ble RCOSC calibration control register0

### 83. BLE_RCOSC_CALIB_CTRL1(Invalid)
offset: 0x0264
Only chip arch v3, ble RCOSC calibration control register1

### 84. BLE_CLK32K_SWITCH0(Invalid)
offset: 0x0268
Only chip arch v3, ble clk 32k switch register0

### 85. BLE_CLK32K_SWITCH1(Invalid)
offset: 0x026C
Only chip arch v3, ble clk 32k switch register1