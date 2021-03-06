/******************************************************************************
 *
 * Copyright (c) 2014 - 2016 Samsung Electronics Co., Ltd. All rights reserved
 *
 *****************************************************************************/

#ifndef __MX_IOCTL_H__
#define __MX_IOCTL_H__

#include <linux/if.h>
#include <linux/netdevice.h>

struct android_wifi_priv_cmd {
	char *buf;
	int  used_len;
	int  total_len;
};

int slsi_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);

struct slsi_supported_channels {
	int start_chan_num;
	int channel_count;
	int increment;
	int band;
};
#endif /*  __MX_IOCTL_H__ */
