/*
 * Copyright (c) 2020-2021, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __tc358748_I2C_TABLES__
#define __tc358748_I2C_TABLES__

#include <media/camera_common.h>

#define tc358748_TABLE_WAIT_MS 0
#define tc358748_TABLE_END 1
#define tc358748_WAIT_MS 1
#define tc358748_STANDBY_REG 0x0100

#define tc358748_reg struct reg_8

static const tc358748_reg tc358748_start[] = {
	{tc358748_STANDBY_REG, 0x1},
	{tc358748_TABLE_WAIT_MS, tc358748_WAIT_MS*3},
	{tc358748_TABLE_END, 0x00}
};

static const tc358748_reg tc358748_stop[] = {
	{tc358748_STANDBY_REG, 0x0},
	{tc358748_TABLE_END, 0x00}
};

static const tc358748_reg tc358748_mode_common[] = {
	/* software reset */
	{0x0103, 0x01},
	{tc358748_TABLE_WAIT_MS, tc358748_WAIT_MS*10},
	{0x0136, 0x18},
	{0x0137, 0x00},
	{0x0808, 0x02},
	{0xE07A, 0x01},
	{0xE000, 0x00},
	{0x4AE9, 0x18},
	{0x4AEA, 0x08},
	{0xF61C, 0x04},
	{0xF61E, 0x04},
	{0x4AE9, 0x21},
	{0x4AEA, 0x80},
	{0x38A8, 0x1F},
	{0x38A9, 0xFF},
	{0x38AA, 0x1F},
	{0x38AB, 0xFF},
	{0x420B, 0x01},
	{0x55D4, 0x00},
	{0x55D5, 0x00},
	{0x55D6, 0x07},
	{0x55D7, 0xFF},
	{0x55E8, 0x07},
	{0x55E9, 0xFF},
	{0x55EA, 0x00},
	{0x55EB, 0x00},
	{0x574C, 0x07},
	{0x574D, 0xFF},
	{0x574E, 0x00},
	{0x574F, 0x00},
	{0x5754, 0x00},
	{0x5755, 0x00},
	{0x5756, 0x07},
	{0x5757, 0xFF},
	{0x5973, 0x04},
	{0x5974, 0x01},
	{0x5D13, 0xC3},
	{0x5D14, 0x58},
	{0x5D15, 0xA3},
	{0x5D16, 0x1D},
	{0x5D17, 0x65},
	{0x5D18, 0x8C},
	{0x5D1A, 0x06},
	{0x5D1B, 0xA9},
	{0x5D1C, 0x45},
	{0x5D1D, 0x3A},
	{0x5D1E, 0xAB},
	{0x5D1F, 0x15},
	{0x5D21, 0x0E},
	{0x5D22, 0x52},
	{0x5D23, 0xAA},
	{0x5D24, 0x7D},
	{0x5D25, 0x57},
	{0x5D26, 0xA8},
	{0x5D37, 0x5A},
	{0x5D38, 0x5A},
	{0x5D77, 0x7F},
	{0x7B7C, 0x00},
	{0x7B7D, 0x00},
	{0x8D1F, 0x00},
	{0x8D27, 0x00},
	{0x9004, 0x03},
	{0x9200, 0x50},
	{0x9201, 0x6C},
	{0x9202, 0x71},
	{0x9203, 0x00},
	{0x9204, 0x71},
	{0x9205, 0x01},
	{0x9371, 0x6A},
	{0x9373, 0x6A},
	{0x9375, 0x64},
	{0x990C, 0x00},
	{0x990D, 0x08},
	{0x9956, 0x8C},
	{0x9957, 0x64},
	{0x9958, 0x50},
	{0x9A48, 0x06},
	{0x9A49, 0x06},
	{0x9A4A, 0x06},
	{0x9A4B, 0x06},
	{0x9A4C, 0x06},
	{0x9A4D, 0x06},
	{0xA001, 0x0A},
	{0xA003, 0x0A},
	{0xA005, 0x0A},
	{0xA006, 0x01},
	{0xA007, 0xC0},
	{0xA009, 0xC0},
	{0x4bd5, 0x16},
	{0x3D8A, 0x01},
	{0x7B3B, 0x01},
	{0x7B4C, 0x00},
	{0x9905, 0x00},
	{0x9907, 0x00},
	{0x9909, 0x00},
	{0x990B, 0x00},
	{0x9944, 0x3C},
	{0x9947, 0x3C},
	{0x994A, 0x8C},
	{0x994B, 0x50},
	{0x994C, 0x1B},
	{0x994D, 0x8C},
	{0x994E, 0x50},
	{0x994F, 0x1B},
	{0x9950, 0x8C},
	{0x9951, 0x1B},
	{0x9952, 0x0A},
	{0x9953, 0x8C},
	{0x9954, 0x1B},
	{0x9955, 0x0A},
	{0x9A13, 0x04},
	{0x9A14, 0x04},
	{0x9A19, 0x00},
	{0x9A1C, 0x04},
	{0x9A1D, 0x04},
	{0x9A26, 0x05},
	{0x9A27, 0x05},
	{0x9A2C, 0x01},
	{0x9A2D, 0x03},
	{0x9A2F, 0x05},
	{0x9A30, 0x05},
	{0x9A41, 0x00},
	{0x9A46, 0x00},
	{0x9A47, 0x00},
	{0x9C17, 0x35},
	{0x9C1D, 0x31},
	{0x9C29, 0x50},
	{0x9C3B, 0x2F},
	{0x9C41, 0x6B},
	{0x9C47, 0x2D},
	{0x9C4D, 0x40},
	{0x9C6B, 0x00},
	{0x9C71, 0xC8},
	{0x9C73, 0x32},
	{0x9C75, 0x04},
	{0x9C7D, 0x2D},
	{0x9C83, 0x40},
	{0x9C94, 0x3F},
	{0x9C95, 0x3F},
	{0x9C96, 0x3F},
	{0x9C97, 0x00},
	{0x9C98, 0x00},
	{0x9C99, 0x00},
	{0x9C9A, 0x3F},
	{0x9C9B, 0x3F},
	{0x9C9C, 0x3F},
	{0x9CA0, 0x0F},
	{0x9CA1, 0x0F},
	{0x9CA2, 0x0F},
	{0x9CA3, 0x00},
	{0x9CA4, 0x00},
	{0x9CA5, 0x00},
	{0x9CA6, 0x1E},
	{0x9CA7, 0x1E},
	{0x9CA8, 0x1E},
	{0x9CA9, 0x00},
	{0x9CAA, 0x00},
	{0x9CAB, 0x00},
	{0x9CAC, 0x09},
	{0x9CAD, 0x09},
	{0x9CAE, 0x09},
	{0x9CBD, 0x50},
	{0x9CBF, 0x50},
	{0x9CC1, 0x50},
	{0x9CC3, 0x40},
	{0x9CC5, 0x40},
	{0x9CC7, 0x40},
	{0x9CC9, 0x0A},
	{0x9CCB, 0x0A},
	{0x9CCD, 0x0A},
	{0x9D17, 0x35},
	{0x9D1D, 0x31},
	{0x9D29, 0x50},
	{0x9D3B, 0x2F},
	{0x9D41, 0x6B},
	{0x9D47, 0x42},
	{0x9D4D, 0x5A},
	{0x9D6B, 0x00},
	{0x9D71, 0xC8},
	{0x9D73, 0x32},
	{0x9D75, 0x04},
	{0x9D7D, 0x42},
	{0x9D83, 0x5A},
	{0x9D94, 0x3F},
	{0x9D95, 0x3F},
	{0x9D96, 0x3F},
	{0x9D97, 0x00},
	{0x9D98, 0x00},
	{0x9D99, 0x00},
	{0x9D9A, 0x3F},
	{0x9D9B, 0x3F},
	{0x9D9C, 0x3F},
	{0x9D9D, 0x1F},
	{0x9D9E, 0x1F},
	{0x9D9F, 0x1F},
	{0x9DA0, 0x0F},
	{0x9DA1, 0x0F},
	{0x9DA2, 0x0F},
	{0x9DA3, 0x00},
	{0x9DA4, 0x00},
	{0x9DA5, 0x00},
	{0x9DA6, 0x1E},
	{0x9DA7, 0x1E},
	{0x9DA8, 0x1E},
	{0x9DA9, 0x00},
	{0x9DAA, 0x00},
	{0x9DAB, 0x00},
	{0x9DAC, 0x09},
	{0x9DAD, 0x09},
	{0x9DAE, 0x09},
	{0x9DC9, 0x0A},
	{0x9DCB, 0x0A},
	{0x9DCD, 0x0A},
	{0x9E17, 0x35},
	{0x9E1D, 0x31},
	{0x9E29, 0x50},
	{0x9E3B, 0x2F},
	{0x9E41, 0x6B},
	{0x9E47, 0x2D},
	{0x9E4D, 0x40},
	{0x9E6B, 0x00},
	{0x9E71, 0xC8},
	{0x9E73, 0x32},
	{0x9E75, 0x04},
	{0x9E94, 0x0F},
	{0x9E95, 0x0F},
	{0x9E96, 0x0F},
	{0x9E97, 0x00},
	{0x9E98, 0x00},
	{0x9E99, 0x00},
	{0x9EA0, 0x0F},
	{0x9EA1, 0x0F},
	{0x9EA2, 0x0F},
	{0x9EA3, 0x00},
	{0x9EA4, 0x00},
	{0x9EA5, 0x00},
	{0x9EA6, 0x3F},
	{0x9EA7, 0x3F},
	{0x9EA8, 0x3F},
	{0x9EA9, 0x00},
	{0x9EAA, 0x00},
	{0x9EAB, 0x00},
	{0x9EAC, 0x09},
	{0x9EAD, 0x09},
	{0x9EAE, 0x09},
	{0x9EC9, 0x0A},
	{0x9ECB, 0x0A},
	{0x9ECD, 0x0A},
	{0x9F17, 0x35},
	{0x9F1D, 0x31},
	{0x9F29, 0x50},
	{0x9F3B, 0x2F},
	{0x9F41, 0x6B},
	{0x9F47, 0x42},
	{0x9F4D, 0x5A},
	{0x9F6B, 0x00},
	{0x9F71, 0xC8},
	{0x9F73, 0x32},
	{0x9F75, 0x04},
	{0x9F94, 0x0F},
	{0x9F95, 0x0F},
	{0x9F96, 0x0F},
	{0x9F97, 0x00},
	{0x9F98, 0x00},
	{0x9F99, 0x00},
	{0x9F9A, 0x2F},
	{0x9F9B, 0x2F},
	{0x9F9C, 0x2F},
	{0x9F9D, 0x00},
	{0x9F9E, 0x00},
	{0x9F9F, 0x00},
	{0x9FA0, 0x0F},
	{0x9FA1, 0x0F},
	{0x9FA2, 0x0F},
	{0x9FA3, 0x00},
	{0x9FA4, 0x00},
	{0x9FA5, 0x00},
	{0x9FA6, 0x1E},
	{0x9FA7, 0x1E},
	{0x9FA8, 0x1E},
	{0x9FA9, 0x00},
	{0x9FAA, 0x00},
	{0x9FAB, 0x00},
	{0x9FAC, 0x09},
	{0x9FAD, 0x09},
	{0x9FAE, 0x09},
	{0x9FC9, 0x0A},
	{0x9FCB, 0x0A},
	{0x9FCD, 0x0A},
	{0xA14B, 0xFF},
	{0xA151, 0x0C},
	{0xA153, 0x50},
	{0xA155, 0x02},
	{0xA157, 0x00},
	{0xA1AD, 0xFF},
	{0xA1B3, 0x0C},
	{0xA1B5, 0x50},
	{0xA1B9, 0x00},
	{0xA24B, 0xFF},
	{0xA257, 0x00},
	{0xA2AD, 0xFF},
	{0xA2B9, 0x00},
	{0xB21F, 0x04},
	{0xB35C, 0x00},
	{0xB35E, 0x08},
	{tc358748_TABLE_END, 0x0000}

};

static const tc358748_reg tc358748_mode_3840x2160_30fps[] = {
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x0114, 0x01},
	{0x0342, 0x2B},
	{0x0343, 0xC0},
	{0x0340, 0x09},
	{0x0341, 0xC4},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x01},
	{0x0347, 0xB8},
	{0x0348, 0x0F},
	{0x0349, 0xD7},
	{0x034A, 0x0A},
	{0x034B, 0x27},
	{0x00E3, 0x00},
	{0x00E4, 0x00},
	{0x00FC, 0x0A},
	{0x00FD, 0x0A},
	{0x00FE, 0x0A},
	{0x00FF, 0x0A},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x11},
	{0x0902, 0x02},
	{0x3140, 0x02},
	{0x3C00, 0x00},
	{0x3C01, 0x03},
	{0x3C02, 0xDC},
	{0x3F0D, 0x00},
	{0x5748, 0x07},
	{0x5749, 0xFF},
	{0x574A, 0x00},
	{0x574B, 0x00},
	{0x7B75, 0x0E},
	{0x7B76, 0x09},
	{0x7B77, 0x0C},
	{0x7B78, 0x06},
	{0x7B79, 0x3B},
	{0x7B53, 0x01},
	{0x9369, 0x5A},
	{0x936B, 0x55},
	{0x936D, 0x28},
	{0x9304, 0x03},
	{0x9305, 0x00},
	{0x9E9A, 0x2F},
	{0x9E9B, 0x2F},
	{0x9E9C, 0x2F},
	{0x9E9D, 0x00},
	{0x9E9E, 0x00},
	{0x9E9F, 0x00},
	{0xA2A9, 0x60},
	{0xA2B7, 0x00},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x6C},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x0F},
	{0x040D, 0x00},
	{0x040E, 0x08},
	{0x040F, 0x70},
	{0x034C, 0x0F},
	{0x034D, 0x00},
	{0x034E, 0x08},
	{0x034F, 0x70},
	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x02},
	{0x0306, 0x00},
	{0x0307, 0xAF},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x030D, 0x02},
	{0x030E, 0x00},
	{0x030F, 0x7D},
	{0x0310, 0x01},
	{0x0820, 0x0B},
	{0x0821, 0xB8},
	{0x0822, 0x00},
	{0x0823, 0x00},
	{0x080A, 0x00},
	{0x080B, 0x97},
	{0x080C, 0x00},
	{0x080D, 0x5F},
	{0x080E, 0x00},
	{0x080F, 0x9F},
	{0x0810, 0x00},
	{0x0811, 0x6F},
	{0x0812, 0x00},
	{0x0813, 0x6F},
	{0x0814, 0x00},
	{0x0815, 0x57},
	{0x0816, 0x01},
	{0x0817, 0x87},
	{0x0818, 0x00},
	{0x0819, 0x4F},
	{0xE04C, 0x00},
	{0xE04D, 0x9F},
	{0xE04E, 0x00},
	{0xE04F, 0x1F},
	{0x3E20, 0x01},
	{0x3E37, 0x00},
	{0x3F50, 0x00},
	{0x3F56, 0x01},
	{0x3F57, 0x40},
	{tc358748_TABLE_WAIT_MS, tc358748_WAIT_MS},
	{tc358748_TABLE_END, 0x0000}
};

static const tc358748_reg tc358748_mode_1920x1080_60fps[] = {
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x0114, 0x01},
	{0x0342, 0x1B},
	{0x0343, 0x58},
	{0x0340, 0x07},
	{0x0341, 0xD0},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x01},
	{0x0347, 0xB8},
	{0x0348, 0x0F},
	{0x0349, 0xD7},
	{0x034A, 0x0A},
	{0x034B, 0x27},
	{0x00E3, 0x00},
	{0x00E4, 0x00},
	{0x00FC, 0x0A},
	{0x00FD, 0x0A},
	{0x00FE, 0x0A},
	{0x00FF, 0x0A},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x01},
	{0x0901, 0x22},
	{0x0902, 0x02},
	{0x3140, 0x02},
	{0x3C00, 0x00},
	{0x3C01, 0x01},
	{0x3C02, 0x9C},
	{0x3F0D, 0x00},
	{0x5748, 0x00},
	{0x5749, 0x00},
	{0x574A, 0x00},
	{0x574B, 0xA4},
	{0x7B75, 0x0E},
	{0x7B76, 0x09},
	{0x7B77, 0x08},
	{0x7B78, 0x06},
	{0x7B79, 0x34},
	{0x7B53, 0x00},
	{0x9369, 0x73},
	{0x936B, 0x64},
	{0x936D, 0x5F},
	{0x9304, 0x03},
	{0x9305, 0x80},
	{0x9E9A, 0x2F},
	{0x9E9B, 0x2F},
	{0x9E9C, 0x2F},
	{0x9E9D, 0x00},
	{0x9E9E, 0x00},
	{0x9E9F, 0x00},
	{0xA2A9, 0x27},
	{0xA2B7, 0x03},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x36},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x07},
	{0x040D, 0x80},
	{0x040E, 0x04},
	{0x040F, 0x38},
	{0x034C, 0x07},
	{0x034D, 0x80},
	{0x034E, 0x04},
	{0x034F, 0x38},
	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x02},
	{0x0306, 0x00},
	{0x0307, 0xAF},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x030D, 0x02},
	{0x030E, 0x00},
	{0x030F, 0x7D},
	{0x0310, 0x01},
	{0x0820, 0x0B},
	{0x0821, 0xB8},
	{0x0822, 0x00},
	{0x0823, 0x00},
	{0x080A, 0x00},
	{0x080B, 0x97},
	{0x080C, 0x00},
	{0x080D, 0x5F},
	{0x080E, 0x00},
	{0x080F, 0x9F},
	{0x0810, 0x00},
	{0x0811, 0x6F},
	{0x0812, 0x00},
	{0x0813, 0x6F},
	{0x0814, 0x00},
	{0x0815, 0x57},
	{0x0816, 0x01},
	{0x0817, 0x87},
	{0x0818, 0x00},
	{0x0819, 0x4F},
	{0xE04C, 0x00},
	{0xE04D, 0x9F},
	{0xE04E, 0x00},
	{0xE04F, 0x1F},
	{0x3E20, 0x01},
	{0x3E37, 0x00},
	{0x3F50, 0x00},
	{0x3F56, 0x00},
	{0x3F57, 0xC8},
	{0X3FF9, 0x01},
	{tc358748_TABLE_WAIT_MS, tc358748_WAIT_MS},
	{tc358748_TABLE_END, 0x0000}
};

enum {
	tc358748_MODE_3840x2160_30FPS,
	tc358748_MODE_1920x1080_60FPS,
	tc358748_MODE_COMMON,
	tc358748_START_STREAM,
	tc358748_STOP_STREAM,
};

static const tc358748_reg *mode_table[] = {
	[tc358748_MODE_3840x2160_30FPS] = tc358748_mode_3840x2160_30fps,
	[tc358748_MODE_1920x1080_60FPS] = tc358748_mode_1920x1080_60fps,
	[tc358748_MODE_COMMON] = tc358748_mode_common,
	[tc358748_START_STREAM] = tc358748_start,
	[tc358748_STOP_STREAM] = tc358748_stop,
};

static const int tc358748_30_fr[] = {
	30,
};

static const int tc358748_60_fr[] = {
	60,
};

static const struct camera_common_frmfmt tc358748_frmfmt[] = {
	{{3840, 2160}, tc358748_30_fr, 1, 0, tc358748_MODE_3840x2160_30FPS},
	{{1920, 1080}, tc358748_60_fr, 1, 0, tc358748_MODE_1920x1080_60FPS},
};
#endif /* __tc358748_I2C_TABLES__ */
