/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
<<<<<<<< HEAD:hal/phydm/halrf/rtl8821a/halrf_iqk_8821a_win.h

#ifndef __PHYDM_IQK_8821A_H__
#define __PHYDM_IQK_8821A_H__

/*--------------------------Define Parameters-------------------------------*/
========
#ifndef	__ODM_RTL8821A_H__
#define __ODM_RTL8821A_H__

s8 phydm_cck_rssi_8821a(struct dm_struct *dm, u16 lna_idx, u8 vga_idx);

void
phydm_set_ext_band_switch_8821A(
	void		*dm_void,
	u32		band
);

void
odm_hw_setting_8821a(
	struct dm_struct		*dm
);
>>>>>>>> 006c821ae82f0675d98db5c569a30591f5fc2a70:hal/phydm/rtl8821a/phydm_rtl8821a.h


/*---------------------------End Define Parameters-------------------------------*/
#if !(DM_ODM_SUPPORT_TYPE & ODM_AP)
void
do_iqk_8821a(
	struct dm_struct	*dm,
	u8		delta_thermal_index,
	u8		thermal_value,
	u8		threshold
);
void
phy_iq_calibrate_8821a(
	void		*dm_void,
	boolean	is_recovery
);
#else
void
_phy_iq_calibrate_8821a(
	struct dm_struct		*dm
);
#endif
#endif	/*  #ifndef __PHYDM_IQK_8821A_H__ */
