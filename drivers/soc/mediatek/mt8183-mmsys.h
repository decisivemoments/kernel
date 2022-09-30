/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __SOC_MEDIATEK_MT8183_MMSYS_H
#define __SOC_MEDIATEK_MT8183_MMSYS_H

#define MT8183_DISP_OVL0_MOUT_EN		0xf00
#define MT8183_DISP_OVL0_2L_MOUT_EN		0xf04
#define MT8183_DISP_OVL1_2L_MOUT_EN		0xf08
#define MT8183_DISP_DITHER0_MOUT_EN		0xf0c
#define MT8183_DISP_PATH0_SEL_IN		0xf24
#define MT8183_DISP_DSI0_SEL_IN			0xf2c
#define MT8183_DISP_DPI0_SEL_IN			0xf30
#define MT8183_DISP_RDMA0_SOUT_SEL_IN		0xf50
#define MT8183_DISP_RDMA1_SOUT_SEL_IN		0xf54

#define MT8183_OVL0_MOUT_EN_OVL0_2L		BIT(4)
#define MT8183_OVL0_2L_MOUT_EN_DISP_PATH0	BIT(0)
#define MT8183_OVL1_2L_MOUT_EN_RDMA1		BIT(4)
#define MT8183_DITHER0_MOUT_IN_DSI0		BIT(0)
#define MT8183_DISP_PATH0_SEL_IN_OVL0_2L	0x1
#define MT8183_DSI0_SEL_IN_RDMA0		0x1
#define MT8183_DSI0_SEL_IN_RDMA1		0x3
#define MT8183_DPI0_SEL_IN_RDMA0		0x1
#define MT8183_DPI0_SEL_IN_RDMA1		0x2
#define MT8183_RDMA0_SOUT_COLOR0		0x1
#define MT8183_RDMA1_SOUT_DSI0			0x1

#define MT8183_MMSYS_SW0_RST_B			0x140

static const struct mtk_mmsys_routes mmsys_mt8183_routing_table[] = {
	{
		DDP_COMPONENT_OVL0, DDP_COMPONENT_OVL_2L0,
		MT8183_DISP_OVL0_MOUT_EN, MT8183_OVL0_MOUT_EN_OVL0_2L,
		MT8183_OVL0_MOUT_EN_OVL0_2L
	}, {
		DDP_COMPONENT_OVL_2L0, DDP_COMPONENT_RDMA0,
		MT8183_DISP_OVL0_2L_MOUT_EN, MT8183_OVL0_2L_MOUT_EN_DISP_PATH0,
		MT8183_OVL0_2L_MOUT_EN_DISP_PATH0
	}, {
		DDP_COMPONENT_OVL_2L1, DDP_COMPONENT_RDMA1,
		MT8183_DISP_OVL1_2L_MOUT_EN, MT8183_OVL1_2L_MOUT_EN_RDMA1,
		MT8183_OVL1_2L_MOUT_EN_RDMA1
	}, {
		DDP_COMPONENT_DITHER0, DDP_COMPONENT_DSI0,
		MT8183_DISP_DITHER0_MOUT_EN, MT8183_DITHER0_MOUT_IN_DSI0,
		MT8183_DITHER0_MOUT_IN_DSI0
	}, {
		DDP_COMPONENT_OVL_2L0, DDP_COMPONENT_RDMA0,
		MT8183_DISP_PATH0_SEL_IN, MT8183_DISP_PATH0_SEL_IN_OVL0_2L,
		MT8183_DISP_PATH0_SEL_IN_OVL0_2L
	}, {
		DDP_COMPONENT_RDMA1, DDP_COMPONENT_DPI0,
		MT8183_DISP_DPI0_SEL_IN, MT8183_DPI0_SEL_IN_RDMA1,
		MT8183_DPI0_SEL_IN_RDMA1
	}, {
		DDP_COMPONENT_RDMA0, DDP_COMPONENT_COLOR0,
		MT8183_DISP_RDMA0_SOUT_SEL_IN, MT8183_RDMA0_SOUT_COLOR0,
		MT8183_RDMA0_SOUT_COLOR0
	}
};

#endif /* __SOC_MEDIATEK_MT8183_MMSYS_H */

