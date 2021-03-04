/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-02-09     shelton      the first version
 */

#ifndef __DRV_FLASH_H__
#define __DRV_FLASH_H__

#include <rtthread.h>
#include "rtdevice.h"
#include <rthw.h>

#ifdef __cplusplus
extern "C" {
#endif

int at32_flash_read(rt_uint32_t addr, rt_uint8_t *buf, size_t size);
int at32_flash_write(rt_uint32_t addr, const rt_uint8_t *buf, size_t size);
int at32_flash_erase(rt_uint32_t addr, size_t size);

#ifdef __cplusplus
}
#endif

#endif  /* __DRV_FLASH_H__ */
