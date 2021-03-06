/*
 * Copyright (c) 2015 Samsung Electronics Co., Ltd. All rights reserved.
 *		http://www.samsung.com
 *
 * Chip Abstraction Layer for local/system power down support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __EXYNOS7570_CMUSFR_H__
#define __EXYNOS7570_CMUSFR_H__

#include "S5E7570-sfrbase.h"

#define CLK_CON_MUX_CLKCMU_APM_USER	((void *)(CMU_APM_BASE + 0x0200))
#define CLK_STAT_MUX_CLKCMU_APM_USER	((void *)(CMU_APM_BASE + 0x0600))
#define CLK_ENABLE_CLKCMU_APM_USER	((void *)(CMU_APM_BASE + 0x080C))
#define CLKOUT_CMU_APM	((void *)(CMU_APM_BASE + 0x0D00))
#define CLKOUT_CMU_APM_DIV_STAT	((void *)(CMU_APM_BASE + 0x0D04))
#define CMU_APM_SPARE0	((void *)(CMU_APM_BASE + 0x0D08))
#define CMU_APM_SPARE1	((void *)(CMU_APM_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_APM	((void *)(CMU_APM_BASE + 0x0E00))
#define APM_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_APM_BASE + 0x0F00))

#define CPUCL0_PLL_LOCK	((void *)(CMU_CPUCL0_BASE + 0x0000))
#define CPUCL0_PLL_CON0	((void *)(CMU_CPUCL0_BASE + 0x0100))
#define CPUCL0_PLL_CON1	((void *)(CMU_CPUCL0_BASE + 0x0104))
#define CLK_CON_MUX_CPUCL0_PLL	((void *)(CMU_CPUCL0_BASE + 0x0200))
#define CLK_CON_MUX_CLKCMU_CPUCL0_SWITCH_USER	((void *)(CMU_CPUCL0_BASE + 0x0204))
#define CLK_CON_MUX_CLK_CPUCL0	((void *)(CMU_CPUCL0_BASE + 0x0208))
#define CLK_CON_DIV_CLK_CPUCL0_1	((void *)(CMU_CPUCL0_BASE + 0x0400))
#define CLK_CON_DIV_CLK_CPUCL0_2	((void *)(CMU_CPUCL0_BASE + 0x0404))
#define CLK_CON_DIV_CLK_CPUCL0_ACLK	((void *)(CMU_CPUCL0_BASE + 0x0408))
#define CLK_CON_DIV_CLK_CPUCL0_PCLK	((void *)(CMU_CPUCL0_BASE + 0x040C))
#define CLK_CON_DIV_CLK_CPUCL0_ATCLK	((void *)(CMU_CPUCL0_BASE + 0x0410))
#define CLK_CON_DIV_CLK_CPUCL0_PCLKDBG	((void *)(CMU_CPUCL0_BASE + 0x0414))
#define CLK_CON_DIV_CLK_CPUCL0_CNTCLK	((void *)(CMU_CPUCL0_BASE + 0x0418))
#define CLK_CON_DIV_CLK_CPUCL0_RUN_MONITOR	((void *)(CMU_CPUCL0_BASE + 0x041C))
#define CLK_CON_DIV_CLK_CPUCL0_HPM	((void *)(CMU_CPUCL0_BASE + 0x0420))
#define CLK_CON_DIV_CLK_CPUCL0_PLL	((void *)(CMU_CPUCL0_BASE + 0x0424))
#define CLK_STAT_MUX_CPUCL0_PLL	((void *)(CMU_CPUCL0_BASE + 0x0600))
#define CLK_STAT_MUX_CLKCMU_CPUCL0_SWITCH_USER	((void *)(CMU_CPUCL0_BASE + 0x0604))
#define CLK_STAT_MUX_CLK_CPUCL0	((void *)(CMU_CPUCL0_BASE + 0x0608))
#define CLK_ENABLE_CLK_CPUCL0_OSCCLK	((void *)(CMU_CPUCL0_BASE + 0x0800))
#define CLK_ENABLE_CLK_CPUCL0_ACLK	((void *)(CMU_CPUCL0_BASE + 0x0808))
#define CLK_ENABLE_CLK_CPUCL0_PCLK	((void *)(CMU_CPUCL0_BASE + 0x080C))
#define CLK_ENABLE_CLK_CPUCL0_ATCLK	((void *)(CMU_CPUCL0_BASE + 0x0810))
#define CLK_ENABLE_CLK_CPUCL0_PCLKDBG	((void *)(CMU_CPUCL0_BASE + 0x0814))
#define CLK_ENABLE_CLK_CPUCL0_HPM	((void *)(CMU_CPUCL0_BASE + 0x0820))
#define CLKOUT_CMU_CPUCL0	((void *)(CMU_CPUCL0_BASE + 0x0D00))
#define CLKOUT_CMU_CPUCL0_DIV_STAT	((void *)(CMU_CPUCL0_BASE + 0x0D04))
#define CMU_CPUCL0_SPARE0	((void *)(CMU_CPUCL0_BASE + 0x0D08))
#define CMU_CPUCL0_SPARE1	((void *)(CMU_CPUCL0_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_CPUCL0	((void *)(CMU_CPUCL0_BASE + 0x0E00))
#define CPUCL0_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_CPUCL0_BASE + 0x0F00))
#define ARMCLK_STOPCTRL	((void *)(CMU_CPUCL0_BASE + 0x1000))
#define PWR_CTRL	((void *)(CMU_CPUCL0_BASE + 0x1020))
#define PWR_CTRL2	((void *)(CMU_CPUCL0_BASE + 0x1024))
#define PWR_CTRL3	((void *)(CMU_CPUCL0_BASE + 0x1028))
#define INTR_SPREAD_ENABLE	((void *)(CMU_CPUCL0_BASE + 0x1080))
#define INTR_SPREAD_USE_STANDBYWFI	((void *)(CMU_CPUCL0_BASE + 0x1084))
#define INTR_SPREAD_BLOCKING_DURATION	((void *)(CMU_CPUCL0_BASE + 0x1088))

#define AUD_PLL_LOCK	((void *)(CMU_DISPAUD_BASE + 0x00C0))
#define AUD_PLL_CON0	((void *)(CMU_DISPAUD_BASE + 0x01C0))
#define AUD_PLL_CON1	((void *)(CMU_DISPAUD_BASE + 0x01C4))
#define AUD_PLL_CON2	((void *)(CMU_DISPAUD_BASE + 0x01C8))
#define CLK_CON_MUX_AUD_PLL	((void *)(CMU_DISPAUD_BASE + 0x0204))
#define CLK_CON_MUX_CLKCMU_DISPAUD_BUS_USER	((void *)(CMU_DISPAUD_BASE + 0x0210))
#define CLK_CON_MUX_CLKCMU_DISPAUD_DECON_INT_VCLK_USER	((void *)(CMU_DISPAUD_BASE + 0x0214))
#define CLK_CON_MUX_CLKCMU_DISPAUD_DECON_INT_ECLK_USER	((void *)(CMU_DISPAUD_BASE + 0x0218))
#define CLK_CON_MUX_CLKPHY_DISPAUD_MIPIPHY_TXBYTECLKHS_USER	((void *)(CMU_DISPAUD_BASE + 0x0224))
#define CLK_CON_MUX_CLKPHY_DISPAUD_MIPIPHY_RXCLKESC0_USER	((void *)(CMU_DISPAUD_BASE + 0x0228))
#define CLK_CON_DIV_CLK_DISPAUD_APB	((void *)(CMU_DISPAUD_BASE + 0x0400))
#define CLK_CON_DIV_CLK_DISPAUD_DECON_INT_VCLK	((void *)(CMU_DISPAUD_BASE + 0x0404))
#define CLK_CON_DIV_CLK_DISPAUD_DECON_INT_ECLK	((void *)(CMU_DISPAUD_BASE + 0x0408))
#define CLK_CON_DIV_CLK_DISPAUD_MI2S	((void *)(CMU_DISPAUD_BASE + 0x040C))
#define CLK_CON_DIV_CLK_DISPAUD_MIXER	((void *)(CMU_DISPAUD_BASE + 0x0410))
#define CLK_CON_DIV_CLK_DISPAUD_OSCCLK_FM_52M_DIV	((void *)(CMU_DISPAUD_BASE + 0x0414))
#define CLK_STAT_MUX_AUD_PLL	((void *)(CMU_DISPAUD_BASE + 0x0604))
#define CLK_STAT_MUX_CLKCMU_DISPAUD_BUS_USER	((void *)(CMU_DISPAUD_BASE + 0x0610))
#define CLK_STAT_MUX_CLKCMU_DISPAUD_DECON_INT_VCLK_USER	((void *)(CMU_DISPAUD_BASE + 0x0614))
#define CLK_STAT_MUX_CLKCMU_DISPAUD_DECON_INT_ECLK_USER	((void *)(CMU_DISPAUD_BASE + 0x0618))
#define CLK_STAT_MUX_CLKPHY_DISPAUD_MIPIPHY_TXBYTECLKHS_USER	((void *)(CMU_DISPAUD_BASE + 0x0624))
#define CLK_STAT_MUX_CLKPHY_DISPAUD_MIPIPHY_RXCLKESC0_USER	((void *)(CMU_DISPAUD_BASE + 0x0628))
#define CLK_ENABLE_CLK_DISPAUD_OSCCLK	((void *)(CMU_DISPAUD_BASE + 0x0800))
#define CLK_ENABLE_CLK_DISPAUD_BUS	((void *)(CMU_DISPAUD_BASE + 0x0810))
#define CLK_ENABLE_CLK_DISPAUD_APB	((void *)(CMU_DISPAUD_BASE + 0x0814))
#define CLK_ENABLE_CLK_DISPAUD_APB_SECURE_SMMU_DISP	((void *)(CMU_DISPAUD_BASE + 0x0818))
#define SECURE_ENABLE_SMMU_DISP	((void *)(CMU_DISPAUD_BASE + 0x081C))
#define CLK_ENABLE_CLK_DISPAUD_DECON_INT_VCLK	((void *)(CMU_DISPAUD_BASE + 0x0820))
#define CLK_ENABLE_CLKPHY_DISPAUD_MIPIPHY_TXBYTECLKHS	((void *)(CMU_DISPAUD_BASE + 0x0824))
#define CLK_ENABLE_CLKPHY_DISPAUD_MIPIPHY_RXCLKESC0	((void *)(CMU_DISPAUD_BASE + 0x0828))
#define CLK_ENABLE_CLK_DISPAUD_MI2S	((void *)(CMU_DISPAUD_BASE + 0x082C))
#define CLK_ENABLE_CLK_DISPAUD_MIXER	((void *)(CMU_DISPAUD_BASE + 0x0830))
#define CLK_ENABLE_CLKIO_DISPAUD_MIXER_BCLK_CP	((void *)(CMU_DISPAUD_BASE + 0x083C))
#define CLK_ENABLE_CLK_OSCCLK_FM_52M	((void *)(CMU_DISPAUD_BASE + 0x0844))
#define CLK_ENABLE_CLK_OSCCLK_FM_52M_DIV	((void *)(CMU_DISPAUD_BASE + 0x0848))
#define CLKOUT_CMU_DISPAUD	((void *)(CMU_DISPAUD_BASE + 0x0D00))
#define CLKOUT_CMU_DISPAUD_DIV_STAT	((void *)(CMU_DISPAUD_BASE + 0x0D04))
#define CMU_DISPAUD_SPARE0	((void *)(CMU_DISPAUD_BASE + 0x0D08))
#define CMU_DISPAUD_SPARE1	((void *)(CMU_DISPAUD_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_DISPAUD	((void *)(CMU_DISPAUD_BASE + 0x0E00))
#define DISPAUD_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_DISPAUD_BASE + 0x0F00))

#define CLK_CON_MUX_CLKPHY_FSYS_USB20DRD_PHYCLOCK_USER	((void *)(CMU_FSYS_BASE + 0x0230))
#define CLK_STAT_MUX_CLKPHY_FSYS_USB20DRD_PHYCLOCK_USER	((void *)(CMU_FSYS_BASE + 0x0630))
#define CLK_ENABLE_CLK_FSYS_OSCCLK	((void *)(CMU_FSYS_BASE + 0x0800))
#define CLK_ENABLE_CLK_FSYS_BUS	((void *)(CMU_FSYS_BASE + 0x0804))
#define CLK_ENABLE_CLK_FSYS_SECURE_RTIC	((void *)(CMU_FSYS_BASE + 0x0808))
#define CLK_ENABLE_CLK_FSYS_SECURE_SSS	((void *)(CMU_FSYS_BASE + 0x080C))
#define CLK_ENABLE_CLK_FSYS_MMC_EMBD	((void *)(CMU_FSYS_BASE + 0x0814))
#define CLK_ENABLE_CLK_FSYS_MMC_CARD	((void *)(CMU_FSYS_BASE + 0x081C))
#define CLK_ENABLE_CLK_FSYS_USB20DRD_REFCLK	((void *)(CMU_FSYS_BASE + 0x0828))
#define CLK_ENABLE_CLKPHY_FSYS_USB20DRD_PHYCLOCK	((void *)(CMU_FSYS_BASE + 0x0830))
#define CLK_ENABLE_CLK_FSYS_USB20PHY_CLKCORE	((void *)(CMU_FSYS_BASE + 0x083C))
#define SECURE_ENABLE_BUSD0_FSYS	((void *)(CMU_FSYS_BASE + 0x08D0))
#define CLKOUT_CMU_FSYS	((void *)(CMU_FSYS_BASE + 0x0D00))
#define CLKOUT_CMU_FSYS_DIV_STAT	((void *)(CMU_FSYS_BASE + 0x0D04))
#define CMU_FSYS_SPARE0	((void *)(CMU_FSYS_BASE + 0x0D08))
#define CMU_FSYS_SPARE1	((void *)(CMU_FSYS_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_FSYS	((void *)(CMU_FSYS_BASE + 0x0E00))
#define FSYS_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_FSYS_BASE + 0x0F00))
#define USBPLL_CON0	((void *)(CMU_FSYS_BASE + 0x1000))
#define USBPLL_CON1	((void *)(CMU_FSYS_BASE + 0x1004))

#define CLK_CON_MUX_CLKCMU_G3D_USER	((void *)(CMU_G3D_BASE + 0x0204))
#define CLK_CON_DIV_CLK_G3D_BUS	((void *)(CMU_G3D_BASE + 0x0400))
#define CLK_CON_DIV_CLK_G3D_APB	((void *)(CMU_G3D_BASE + 0x0404))
#define CLK_STAT_MUX_CLKCMU_G3D_USER	((void *)(CMU_G3D_BASE + 0x0604))
#define CLK_ENABLE_CLK_G3D_OSCCLK	((void *)(CMU_G3D_BASE + 0x0800))
#define CLK_ENABLE_CLK_G3D_BUS	((void *)(CMU_G3D_BASE + 0x0804))
#define CLK_ENABLE_CLK_G3D_APB	((void *)(CMU_G3D_BASE + 0x0808))
#define CLK_ENABLE_CLK_G3D_BUS_SECURE_CFW_G3D	((void *)(CMU_G3D_BASE + 0x0810))
#define CLK_ENABLE_CLK_G3D_APB_SECURE_CFW_G3D	((void *)(CMU_G3D_BASE + 0x0814))
#define CLKOUT_CMU_G3D	((void *)(CMU_G3D_BASE + 0x0D00))
#define CLKOUT_CMU_G3D_DIV_STAT	((void *)(CMU_G3D_BASE + 0x0D04))
#define CMU_G3D_SPARE0	((void *)(CMU_G3D_BASE + 0x0D08))
#define CMU_G3D_SPARE1	((void *)(CMU_G3D_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_G3D	((void *)(CMU_G3D_BASE + 0x0E00))
#define G3D_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_G3D_BASE + 0x0F00))
#define CLK_STOPCTRL	((void *)(CMU_G3D_BASE + 0x1000))

#define CLK_CON_MUX_CLKCMU_ISP_VRA_USER	((void *)(CMU_ISP_BASE + 0x0210))
#define CLK_CON_MUX_CLKCMU_ISP_CAM_USER	((void *)(CMU_ISP_BASE + 0x0214))
#define CLK_CON_MUX_CLKPHY_ISP_S_RXBYTECLKHS0_S4_USER	((void *)(CMU_ISP_BASE + 0x0230))
#define CLK_CON_DIV_CLK_ISP_CAM_HALF	((void *)(CMU_ISP_BASE + 0x0404))
#define CLK_STAT_MUX_CLKCMU_ISP_VRA_USER	((void *)(CMU_ISP_BASE + 0x0610))
#define CLK_STAT_MUX_CLKCMU_ISP_CAM_USER	((void *)(CMU_ISP_BASE + 0x0614))
#define CLK_STAT_MUX_CLKPHY_ISP_S_RXBYTECLKHS0_S4_USER	((void *)(CMU_ISP_BASE + 0x0630))
#define CLK_ENABLE_CLK_ISP_OSCCLK	((void *)(CMU_ISP_BASE + 0x0800))
#define CLK_ENABLE_CLK_ISP_VRA	((void *)(CMU_ISP_BASE + 0x0810))
#define CLK_ENABLE_CLK_ISP_CAM	((void *)(CMU_ISP_BASE + 0x081C))
#define CLK_ENABLE_CLKPHY_ISP_S_RXBYTECLKHS0_S4	((void *)(CMU_ISP_BASE + 0x0828))
#define CLKOUT_CMU_ISP	((void *)(CMU_ISP_BASE + 0x0D00))
#define CLKOUT_CMU_ISP_DIV_STAT	((void *)(CMU_ISP_BASE + 0x0D04))
#define CMU_ISP_SPARE0	((void *)(CMU_ISP_BASE + 0x0D08))
#define CMU_ISP_SPARE1	((void *)(CMU_ISP_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_ISP	((void *)(CMU_ISP_BASE + 0x0E00))
#define ISP_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_ISP_BASE + 0x0F00))

#define CLK_CON_MUX_CLKCMU_MFCMSCL_MSCL_USER	((void *)(CMU_MFCMSCL_BASE + 0x0200))
#define CLK_CON_MUX_CLKCMU_MFCMSCL_MFC_USER	((void *)(CMU_MFCMSCL_BASE + 0x0204))
#define CLK_CON_DIV_CLK_MFCMSCL_APB	((void *)(CMU_MFCMSCL_BASE + 0x0400))
#define CLK_STAT_MUX_CLKCMU_MFCMSCL_MSCL_USER	((void *)(CMU_MFCMSCL_BASE + 0x0600))
#define CLK_STAT_MUX_CLKCMU_MFCMSCL_MFC_USER	((void *)(CMU_MFCMSCL_BASE + 0x0604))
#define CLK_ENABLE_CLK_MFCMSCL_OSCCLK	((void *)(CMU_MFCMSCL_BASE + 0x0800))
#define CLK_ENABLE_CLK_MFCMSCL_MSCL	((void *)(CMU_MFCMSCL_BASE + 0x0804))
#define CLK_ENABLE_CLK_MFCMSCL_MFC	((void *)(CMU_MFCMSCL_BASE + 0x0808))
#define CLK_ENABLE_CLK_MFCMSCL_APB	((void *)(CMU_MFCMSCL_BASE + 0x080C))
#define CLK_ENABLE_CLK_MFCMSCL_APB_SMMU_MSCL	((void *)(CMU_MFCMSCL_BASE + 0x0810))
#define SECURE_ENABLE_SMMU_MSCL	((void *)(CMU_MFCMSCL_BASE + 0x0814))
#define CLKOUT_CMU_MFCMSCL	((void *)(CMU_MFCMSCL_BASE + 0x0D00))
#define CLKOUT_CMU_MFCMSCL_DIV_STAT	((void *)(CMU_MFCMSCL_BASE + 0x0D04))
#define CMU_MFCMSCL_SPARE0	((void *)(CMU_MFCMSCL_BASE + 0x0D08))
#define CMU_MFCMSCL_SPARE1	((void *)(CMU_MFCMSCL_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_MFCMSCL	((void *)(CMU_MFCMSCL_BASE + 0x0E00))
#define MFCMSCL_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_MFCMSCL_BASE + 0x0F00))

#define SHARED0_PLL_LOCK	((void *)(CMU_MIF_BASE + 0x0000))
#define SHARED1_PLL_LOCK	((void *)(CMU_MIF_BASE + 0x0020))
#define SHARED2_PLL_LOCK	((void *)(CMU_MIF_BASE + 0x0040))
#define SHARED0_PLL_CON0	((void *)(CMU_MIF_BASE + 0x0100))
#define SHARED0_PLL_CON1	((void *)(CMU_MIF_BASE + 0x0104))
#define SHARED1_PLL_CON0	((void *)(CMU_MIF_BASE + 0x0120))
#define SHARED1_PLL_CON1	((void *)(CMU_MIF_BASE + 0x0124))
#define SHARED2_PLL_CON0	((void *)(CMU_MIF_BASE + 0x0140))
#define SHARED2_PLL_CON1	((void *)(CMU_MIF_BASE + 0x0144))
#define CLK_CON_MUX_SHARED0_PLL	((void *)(CMU_MIF_BASE + 0x0200))
#define CLK_CON_MUX_SHARED1_PLL	((void *)(CMU_MIF_BASE + 0x0204))
#define CLK_CON_MUX_SHARED2_PLL	((void *)(CMU_MIF_BASE + 0x0208))
#define CLK_CON_MUX_CLK_MIF_PHY_CLK_A	((void *)(CMU_MIF_BASE + 0x0210))
#define CLK_CON_MUX_CLK_MIF_PHY_CLK_B	((void *)(CMU_MIF_BASE + 0x0214))
#define CLK_CON_MUX_CLK_MIF_BUSD	((void *)(CMU_MIF_BASE + 0x0220))
#define CLK_CON_MUX_CLKCMU_G3D	((void *)(CMU_MIF_BASE + 0x0228))
#define CLK_CON_MUX_CLKCMU_ISP_VRA	((void *)(CMU_MIF_BASE + 0x022C))
#define CLK_CON_MUX_CLKCMU_ISP_CAM	((void *)(CMU_MIF_BASE + 0x0230))
#define CLK_CON_MUX_CLKCMU_DISPAUD_BUS	((void *)(CMU_MIF_BASE + 0x0234))
#define CLK_CON_MUX_CLKCMU_DISPAUD_DECON_INT_VCLK	((void *)(CMU_MIF_BASE + 0x0238))
#define CLK_CON_MUX_CLKCMU_MFCMSCL_MSCL	((void *)(CMU_MIF_BASE + 0x0240))
#define CLK_CON_MUX_CLKCMU_MFCMSCL_MFC	((void *)(CMU_MIF_BASE + 0x0244))
#define CLK_CON_MUX_CLKCMU_FSYS_BUS	((void *)(CMU_MIF_BASE + 0x0248))
#define CLK_CON_MUX_CLKCMU_FSYS_MMC0	((void *)(CMU_MIF_BASE + 0x024C))
#define CLK_CON_MUX_CLKCMU_FSYS_MMC2	((void *)(CMU_MIF_BASE + 0x0250))
#define CLK_CON_MUX_CLKCMU_FSYS_USB20DRD_REFCLK	((void *)(CMU_MIF_BASE + 0x0254))
#define CLK_CON_MUX_CLKCMU_PERI_BUS	((void *)(CMU_MIF_BASE + 0x0258))
#define CLK_CON_MUX_CLKCMU_PERI_UART_DEBUG	((void *)(CMU_MIF_BASE + 0x0260))
#define CLK_CON_MUX_CLKCMU_PERI_UART_SENSOR	((void *)(CMU_MIF_BASE + 0x0264))
#define CLK_CON_MUX_CLKCMU_PERI_SPI_REARFROM	((void *)(CMU_MIF_BASE + 0x026C))
#define CLK_CON_MUX_CLKCMU_PERI_SPI_ESE	((void *)(CMU_MIF_BASE + 0x0270))
#define CLK_CON_MUX_CLKCMU_PERI_USI_0	((void *)(CMU_MIF_BASE + 0x0274))
#define CLK_CON_MUX_CLKCMU_PERI_USI_1	((void *)(CMU_MIF_BASE + 0x0278))
#define CLK_CON_MUX_CLKCMU_APM	((void *)(CMU_MIF_BASE + 0x027C))
#define CLK_CON_MUX_CLKCMU_ISP_SENSOR0	((void *)(CMU_MIF_BASE + 0x0280))
#define CLK_CON_DIV_CLK_MIF_PHY_CLK2X	((void *)(CMU_MIF_BASE + 0x0400))
#define CLK_CON_DIV_CLK_MIF_PHY_CLKM	((void *)(CMU_MIF_BASE + 0x0404))
#define CLK_CON_DIV_CLKCMU_CP_SHARED0_PLL	((void *)(CMU_MIF_BASE + 0x0408))
#define CLK_CON_DIV_CLKCMU_CP_SHARED1_PLL	((void *)(CMU_MIF_BASE + 0x040C))
#define CLK_CON_DIV_CLKCMU_CP_SHARED2_PLL	((void *)(CMU_MIF_BASE + 0x0410))
#define CLK_CON_DIV_CLK_MIF_BUSD	((void *)(CMU_MIF_BASE + 0x0414))
#define CLK_CON_DIV_CLK_MIF_APB	((void *)(CMU_MIF_BASE + 0x0418))
#define CLK_CON_DIV_CLKCMU_CPUCL0_SWITCH	((void *)(CMU_MIF_BASE + 0x0420))
#define CLK_CON_DIV_CLKCMU_G3D	((void *)(CMU_MIF_BASE + 0x0424))
#define CLK_CON_DIV_CLKCMU_ISP_VRA	((void *)(CMU_MIF_BASE + 0x0428))
#define CLK_CON_DIV_CLKCMU_ISP_CAM	((void *)(CMU_MIF_BASE + 0x042C))
#define CLK_CON_DIV_CLKCMU_DISPAUD_BUS	((void *)(CMU_MIF_BASE + 0x0430))
#define CLK_CON_DIV_CLKCMU_DISPAUD_DECON_INT_VCLK	((void *)(CMU_MIF_BASE + 0x0434))
#define CLK_CON_DIV_CLKCMU_MFCMSCL_MSCL	((void *)(CMU_MIF_BASE + 0x043C))
#define CLK_CON_DIV_CLKCMU_MFCMSCL_MFC	((void *)(CMU_MIF_BASE + 0x0440))
#define CLK_CON_DIV_CLKCMU_FSYS_BUS	((void *)(CMU_MIF_BASE + 0x0444))
#define CLK_CON_DIV_CLKCMU_FSYS_MMC0	((void *)(CMU_MIF_BASE + 0x0448))
#define CLK_CON_DIV_CLKCMU_FSYS_MMC2	((void *)(CMU_MIF_BASE + 0x044C))
#define CLK_CON_DIV_CLKCMU_FSYS_USB20DRD_REFCLK	((void *)(CMU_MIF_BASE + 0x0450))
#define CLK_CON_DIV_CLKCMU_PERI_BUS	((void *)(CMU_MIF_BASE + 0x0454))
#define CLK_CON_DIV_CLKCMU_PERI_UART_DEBUG	((void *)(CMU_MIF_BASE + 0x045C))
#define CLK_CON_DIV_CLKCMU_PERI_UART_SENSOR	((void *)(CMU_MIF_BASE + 0x0460))
#define CLK_CON_DIV_CLKCMU_PERI_SPI_REARFROM	((void *)(CMU_MIF_BASE + 0x0468))
#define CLK_CON_DIV_CLKCMU_PERI_SPI_ESE	((void *)(CMU_MIF_BASE + 0x046C))
#define CLK_CON_DIV_CLKCMU_PERI_USI_0	((void *)(CMU_MIF_BASE + 0x0470))
#define CLK_CON_DIV_CLKCMU_PERI_USI_1	((void *)(CMU_MIF_BASE + 0x0474))
#define CLK_CON_DIV_CLKCMU_APM	((void *)(CMU_MIF_BASE + 0x0478))
#define CLK_CON_DIV_CLKCMU_ISP_SENSOR0	((void *)(CMU_MIF_BASE + 0x04C4))
#define CLK_CON_DIV_CLKCMU_GNSS_EXTPLL_SCAN	((void *)(CMU_MIF_BASE + 0x04C8))
#define CLK_CON_DIV_CLKCMU_WLBT_EXTPLL_SCAN	((void *)(CMU_MIF_BASE + 0x04CC))
#define CLK_STAT_MUX_SHARED0_PLL	((void *)(CMU_MIF_BASE + 0x0600))
#define CLK_STAT_MUX_SHARED1_PLL	((void *)(CMU_MIF_BASE + 0x0604))
#define CLK_STAT_MUX_SHARED2_PLL	((void *)(CMU_MIF_BASE + 0x0608))
#define CLK_STAT_MUX_CLK_MIF_PHY_CLK_A	((void *)(CMU_MIF_BASE + 0x0610))
#define CLK_STAT_MUX_CLK_MIF_PHY_CLK_B	((void *)(CMU_MIF_BASE + 0x0614))
#define CLK_STAT_MUX_CLK_MIF_BUSD	((void *)(CMU_MIF_BASE + 0x0620))
#define CLK_STAT_MUX_CLKCMU_G3D	((void *)(CMU_MIF_BASE + 0x0628))
#define CLK_STAT_MUX_CLKCMU_ISP_VRA	((void *)(CMU_MIF_BASE + 0x062C))
#define CLK_STAT_MUX_CLKCMU_ISP_CAM	((void *)(CMU_MIF_BASE + 0x0630))
#define CLK_STAT_MUX_CLKCMU_DISPAUD_BUS	((void *)(CMU_MIF_BASE + 0x0634))
#define CLK_STAT_MUX_CLKCMU_DISPAUD_DECON_INT_VCLK	((void *)(CMU_MIF_BASE + 0x0638))
#define CLK_STAT_MUX_CLKCMU_MFCMSCL_MSCL	((void *)(CMU_MIF_BASE + 0x0640))
#define CLK_STAT_MUX_CLKCMU_MFCMSCL_MFC	((void *)(CMU_MIF_BASE + 0x0644))
#define CLK_STAT_MUX_CLKCMU_FSYS_BUS	((void *)(CMU_MIF_BASE + 0x0648))
#define CLK_STAT_MUX_CLKCMU_FSYS_MMC0	((void *)(CMU_MIF_BASE + 0x064C))
#define CLK_STAT_MUX_CLKCMU_FSYS_MMC2	((void *)(CMU_MIF_BASE + 0x0650))
#define CLK_STAT_MUX_CLKCMU_FSYS_USB20DRD_REFCLK	((void *)(CMU_MIF_BASE + 0x0654))
#define CLK_STAT_MUX_CLKCMU_PERI_BUS	((void *)(CMU_MIF_BASE + 0x0658))
#define CLK_STAT_MUX_CLKCMU_PERI_UART_DEBUG	((void *)(CMU_MIF_BASE + 0x0660))
#define CLK_STAT_MUX_CLKCMU_PERI_UART_SENSOR	((void *)(CMU_MIF_BASE + 0x0664))
#define CLK_STAT_MUX_CLKCMU_PERI_SPI_REARFROM	((void *)(CMU_MIF_BASE + 0x066C))
#define CLK_STAT_MUX_CLKCMU_PERI_SPI_ESE	((void *)(CMU_MIF_BASE + 0x0670))
#define CLK_STAT_MUX_CLKCMU_PERI_USI_0	((void *)(CMU_MIF_BASE + 0x0674))
#define CLK_STAT_MUX_CLKCMU_PERI_USI_1	((void *)(CMU_MIF_BASE + 0x0678))
#define CLK_STAT_MUX_CLKCMU_APM	((void *)(CMU_MIF_BASE + 0x067C))
#define CLK_STAT_MUX_CLKCMU_ISP_SENSOR0	((void *)(CMU_MIF_BASE + 0x0680))
#define CLK_ENABLE_CLK_MIF_OSCCLK	((void *)(CMU_MIF_BASE + 0x0800))
#define CLK_ENABLE_CLK_MIF_PHY_CLK2X	((void *)(CMU_MIF_BASE + 0x0804))
#define CLK_ENABLE_CLK_MIF_PHY_CLKM	((void *)(CMU_MIF_BASE + 0x0808))
#define CLK_ENABLE_CLK_MIF_DDRPHY0	((void *)(CMU_MIF_BASE + 0x080C))
#define CLK_ENABLE_CLK_MIF_BUSD	((void *)(CMU_MIF_BASE + 0x0810))
#define CLK_ENABLE_CLK_MIF_APB	((void *)(CMU_MIF_BASE + 0x0814))
#define CLK_ENABLE_CLK_MIF_APB_SECURE_DMC0	((void *)(CMU_MIF_BASE + 0x0818))
#define CLK_ENABLE_CLK_MIF_APB_SECURE_MAILBOX_SECURE	((void *)(CMU_MIF_BASE + 0x081C))
#define CLK_ENABLE_CLKCMU_CP_SHARED0_PLL	((void *)(CMU_MIF_BASE + 0x0820))
#define CLK_ENABLE_CLKCMU_CP_SHARED1_PLL	((void *)(CMU_MIF_BASE + 0x0824))
#define CLK_ENABLE_CLKCMU_CP_SHARED2_PLL	((void *)(CMU_MIF_BASE + 0x0828))
#define CLK_ENABLE_CLKCMU_CPUCL0_SWITCH	((void *)(CMU_MIF_BASE + 0x082C))
#define CLK_ENABLE_CLKCMU_G3D	((void *)(CMU_MIF_BASE + 0x0830))
#define CLK_ENABLE_CLKCMU_ISP_VRA	((void *)(CMU_MIF_BASE + 0x0834))
#define CLK_ENABLE_CLKCMU_ISP_CAM	((void *)(CMU_MIF_BASE + 0x0838))
#define CLK_ENABLE_CLKCMU_DISPAUD_BUS	((void *)(CMU_MIF_BASE + 0x083C))
#define CLK_ENABLE_CLKCMU_DISPAUD_DECON_INT_VCLK	((void *)(CMU_MIF_BASE + 0x0840))
#define CLK_ENABLE_CLKCMU_MFCMSCL_MFC	((void *)(CMU_MIF_BASE + 0x0848))
#define CLK_ENABLE_CLKCMU_MFCMSCL_MSCL	((void *)(CMU_MIF_BASE + 0x084C))
#define CLK_ENABLE_CLKCMU_FSYS_BUS	((void *)(CMU_MIF_BASE + 0x0850))
#define CLK_ENABLE_CLKCMU_FSYS_MMC0	((void *)(CMU_MIF_BASE + 0x0854))
#define CLK_ENABLE_CLKCMU_FSYS_MMC2	((void *)(CMU_MIF_BASE + 0x0858))
#define CLK_ENABLE_CLKCMU_FSYS_USB20DRD_REFCLK	((void *)(CMU_MIF_BASE + 0x085C))
#define CLK_ENABLE_CLKCMU_PERI_BUS	((void *)(CMU_MIF_BASE + 0x0860))
#define CLK_ENABLE_CLKCMU_PERI_UART_DEBUG	((void *)(CMU_MIF_BASE + 0x0868))
#define CLK_ENABLE_CLKCMU_PERI_UART_SENSOR	((void *)(CMU_MIF_BASE + 0x086C))
#define CLK_ENABLE_CLKCMU_PERI_SPI_REARFROM	((void *)(CMU_MIF_BASE + 0x0874))
#define CLK_ENABLE_CLKCMU_PERI_SPI_ESE	((void *)(CMU_MIF_BASE + 0x0878))
#define CLK_ENABLE_CLKCMU_PERI_USI_0	((void *)(CMU_MIF_BASE + 0x087C))
#define CLK_ENABLE_CLKCMU_PERI_USI_1	((void *)(CMU_MIF_BASE + 0x0880))
#define CLK_ENABLE_CLKCMU_APM	((void *)(CMU_MIF_BASE + 0x0884))
#define CLK_ENABLE_CLKCMU_ISP_SENSOR0	((void *)(CMU_MIF_BASE + 0x0888))
#define CLK_ENABLE_CLKCMU_GNSS_EXTPLL_SCAN	((void *)(CMU_MIF_BASE + 0x088C))
#define CLK_ENABLE_CLKCMU_WLBT_EXTPLL_SCAN	((void *)(CMU_MIF_BASE + 0x0890))
#define SECURE_ENABLE_CLKCMU_FSYS_BUS	((void *)(CMU_MIF_BASE + 0x0894))
#define CLK_ENABLE_CLK_MIF_TCXO	((void *)(CMU_MIF_BASE + 0x089C))
#define CLKOUT_CMU_MIF	((void *)(CMU_MIF_BASE + 0x0D00))
#define CLKOUT_CMU_MIF_DIV_STAT	((void *)(CMU_MIF_BASE + 0x0D04))
#define CMU_MIF_SPARE0	((void *)(CMU_MIF_BASE + 0x0D08))
#define CMU_MIF_SPARE1	((void *)(CMU_MIF_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_MIF	((void *)(CMU_MIF_BASE + 0x0E00))
#define MIF_SFR_IGNORE_REQ_SYSCLK	((void *)(CMU_MIF_BASE + 0x0F00))
#define MIF_ROOTCLKEN	((void *)(CMU_MIF_BASE + 0x0F04))
#define MIF_ROOTCLKEN_ON_GATE	((void *)(CMU_MIF_BASE + 0x0F10))
#define DREX_FREQ_CTRL0	((void *)(CMU_MIF_BASE + 0x1000))
#define DREX_FREQ_CTRL1	((void *)(CMU_MIF_BASE + 0x1004))
#define PAUSE	((void *)(CMU_MIF_BASE + 0x1008))
#define DDRPHY_LOCK_CTRL	((void *)(CMU_MIF_BASE + 0x100C))
#define CP_CTRL_SPEEDY_ENABLE	((void *)(CMU_MIF_BASE + 0x1014))
#define CP_CTRL_ADCIF_ENABLE	((void *)(CMU_MIF_BASE + 0x1018))
#define FAKE_PAUSE	((void *)(CMU_MIF_BASE + 0x1020))
#define CG_CTRL_VAL_CLK_MIF_DDRPHY0	((void *)(CMU_MIF_BASE + 0x1800))
#define CG_CTRL_VAL_CLK_MIF_BUSD	((void *)(CMU_MIF_BASE + 0x1804))
#define CG_CTRL_VAL_CLK_MIF_APB	((void *)(CMU_MIF_BASE + 0x1808))
#define CG_CTRL_MAN_CLK_MIF_DDRPHY0	((void *)(CMU_MIF_BASE + 0x1900))
#define CG_CTRL_MAN_CLK_MIF_BUSD	((void *)(CMU_MIF_BASE + 0x1904))
#define CG_CTRL_MAN_CLK_MIF_APB	((void *)(CMU_MIF_BASE + 0x1908))
#define CG_CTRL_STAT_CLK_MIF_DDRPHY0	((void *)(CMU_MIF_BASE + 0x1A00))
#define CG_CTRL_STAT_CLK_MIF_BUSD_1	((void *)(CMU_MIF_BASE + 0x1A04))
#define CG_CTRL_STAT_CLK_MIF_BUSD_2	((void *)(CMU_MIF_BASE + 0x1A08))
#define CG_CTRL_STAT_CLK_MIF_APB_1	((void *)(CMU_MIF_BASE + 0x1A0C))
#define CG_CTRL_STAT_CLK_MIF_APB_2	((void *)(CMU_MIF_BASE + 0x1A10))
#define QCH_CTRL_UID_TREX_MIF_D	((void *)(CMU_MIF_BASE + 0x2000))
#define QCH_CTRL_UID_ASYNCM_LH_G3D0_MIF_D_NRT	((void *)(CMU_MIF_BASE + 0x2004))
#define QCH_CTRL_UID_ASYNCM_LH_MFCMSCL0_MIF_D_NRT	((void *)(CMU_MIF_BASE + 0x2008))
#define QCH_CTRL_UID_ASYNCM_LH_FSYS_MIF_D_NRT	((void *)(CMU_MIF_BASE + 0x200C))
#define QCH_CTRL_UID_ASYNCM_LH_ISP_MIF_D_RT	((void *)(CMU_MIF_BASE + 0x2010))
#define QCH_CTRL_UID_ASYNCM_LH_DISPAUD_MIF_D_RT	((void *)(CMU_MIF_BASE + 0x2014))
#define QCH_CTRL_UID_ASYNCM_LH_WFBT_MIF_D_CP	((void *)(CMU_MIF_BASE + 0x201C))
#define QCH_CTRL_UID_ASYNCS_LH_APM_P	((void *)(CMU_MIF_BASE + 0x2024))
#define QCH_CTRL_UID_ASYNCM_LH_CP_MIF_D_CP	((void *)(CMU_MIF_BASE + 0x2028))
#define QCH_CTRL_UID_ASYNCM_LH_GNSS_MIF_D_CP	((void *)(CMU_MIF_BASE + 0x202C))
#define QCH_CTRL_UID_TREX_MIF_P	((void *)(CMU_MIF_BASE + 0x2030))
#define QCH_CTRL_UID_ASYNCM_LH_APM_D	((void *)(CMU_MIF_BASE + 0x2034))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_CPUCL0	((void *)(CMU_MIF_BASE + 0x2038))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_DISPAUD	((void *)(CMU_MIF_BASE + 0x203C))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_FSYS	((void *)(CMU_MIF_BASE + 0x2040))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_G3D	((void *)(CMU_MIF_BASE + 0x2044))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_ISP	((void *)(CMU_MIF_BASE + 0x2048))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_MFCMSCL	((void *)(CMU_MIF_BASE + 0x204C))
#define QCH_CTRL_UID_ASYNCS_LH_MIF_P_PERI	((void *)(CMU_MIF_BASE + 0x2050))

#define CLK_CON_DIV_CLK_PERI_USI_0_SPI	((void *)(CMU_PERI_BASE + 0x0400))
#define CLK_CON_DIV_CLK_PERI_USI_1_SPI	((void *)(CMU_PERI_BASE + 0x0404))
#define CLK_ENABLE_CLK_PERI_OSCCLK	((void *)(CMU_PERI_BASE + 0x0800))
#define CLK_ENABLE_CLK_PERI_OSCCLK_SECURE_CHIPID	((void *)(CMU_PERI_BASE + 0x0804))
#define CLK_ENABLE_CLK_PERI_BUS0	((void *)(CMU_PERI_BASE + 0x0810))
#define CLK_ENABLE_CLK_PERI_BUS1	((void *)(CMU_PERI_BASE + 0x0814))
#define CLK_ENABLE_CLK_PERI_BUS_SECURE_TZPC	((void *)(CMU_PERI_BASE + 0x0818))
#define CLK_ENABLE_CLK_PERI_BUS_SECURE_CHIPID	((void *)(CMU_PERI_BASE + 0x081C))
#define CLK_ENABLE_CLK_PERI_BUS_SECURE_OTP_CON_TOP	((void *)(CMU_PERI_BASE + 0x0820))
#define CLK_ENABLE_CLK_PERI_BUS_SECURE_RTC_ALIVE	((void *)(CMU_PERI_BASE + 0x0824))
#define CLK_ENABLE_CLK_PERI_BUS_SECURE_RTC_TOP	((void *)(CMU_PERI_BASE + 0x0828))
#define CLK_ENABLE_CLK_PERI_UART_DEBUG	((void *)(CMU_PERI_BASE + 0x0834))
#define CLK_ENABLE_CLK_PERI_UART_SENSOR	((void *)(CMU_PERI_BASE + 0x0838))
#define CLK_ENABLE_CLK_PERI_SPI_REARFROM	((void *)(CMU_PERI_BASE + 0x0840))
#define CLK_ENABLE_CLK_PERI_SPI_ESE	((void *)(CMU_PERI_BASE + 0x0844))
#define CLK_ENABLE_CLK_PERI_USI_0	((void *)(CMU_PERI_BASE + 0x0850))
#define CLK_ENABLE_CLK_PERI_USI_1	((void *)(CMU_PERI_BASE + 0x0854))
#define CLK_ENABLE_CLK_PERI_USI_0_SPI	((void *)(CMU_PERI_BASE + 0x0858))
#define CLK_ENABLE_CLK_PERI_USI_1_SPI	((void *)(CMU_PERI_BASE + 0x085C))
#define CLKOUT_CMU_PERI	((void *)(CMU_PERI_BASE + 0x0D00))
#define CLKOUT_CMU_PERI_DIV_STAT	((void *)(CMU_PERI_BASE + 0x0D04))
#define CMU_PERI_SPARE0	((void *)(CMU_PERI_BASE + 0x0D08))
#define CMU_PERI_SPARE1	((void *)(CMU_PERI_BASE + 0x0D0C))
#define CLK_ENABLE_PDN_PERI	((void *)(CMU_PERI_BASE + 0x0E00))

#define CPUCL0_EMA_CON		((void *)(SYSREG_CPUCL0_BASE + 0x0330))
#define CPUCL0_EMA		((void *)(SYSREG_CPUCL0_BASE + 0x0340))
#define G3D_EMA_RA1_HS_CON	((void *)(SYSREG_G3D_BASE + 0x0304))
#define G3D_EMA_RF1_HS_CON	((void *)(SYSREG_G3D_BASE + 0x0314))
#define G3D_EMA_RF2_HS_CON	((void *)(SYSREG_G3D_BASE + 0x031C))
#define G3D_EMA_UHD_CON		((void *)(SYSREG_G3D_BASE + 0x0320))

#if !defined(CONFIG_PM_RUNTIME) && !defined(CONFIG_CAL_SYS_PWRDOWN)
struct exynos_pd_clk {
	void __iomem *reg;
	u8 bit_offset;
	char *domain_name;
};

struct exynos_pd_reg {
	void __iomem *reg;
	u8 bit_offset;
};

struct sfr_save {
	void __iomem *reg;
};
#endif
#endif
