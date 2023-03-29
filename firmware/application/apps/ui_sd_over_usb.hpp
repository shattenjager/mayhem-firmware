/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2023 Bernd Herzog
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __UI_SD_OVER_USB_H__
#define __UI_SD_OVER_USB_H__

#include "ui_widget.hpp"
#include "ui_navigation.hpp"
#include "string_format.hpp"
#include "ff.h"
#include "baseband_api.hpp"
#include "core_control.hpp"

#include <cstdint>

namespace ui {

class SdOverUsbView : public View {
public:
	SdOverUsbView(NavigationView& nav);
	~SdOverUsbView();

	void focus() override;

	std::string title() const override { return "Flash Utility"; };	

private:
	NavigationView& nav_;
	
	Labels labels {
		{ { 4, 4 }, "Use USB", Color::white() }
	};

	Button button_close {
		{ 2 * 8, 15 * 16, 12 * 8, 3 * 16 },
		"Close" 
	};		


};

} /* namespace ui */

#endif /*__UI_SD_OVER_USB_H__*/
