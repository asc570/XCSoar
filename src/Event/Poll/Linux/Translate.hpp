/*
Copyright_License {

  XCSoar Glide Computer - http://www.xcsoar.org/
  Copyright (C) 2000-2015 The XCSoar Project
  A detailed list of copyright holders can be found in the file "AUTHORS".

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
}
*/

#ifndef XCSOAR_EVENT_LINUX_TRANSLATE_HPP
#define XCSOAR_EVENT_LINUX_TRANSLATE_HPP

#include "Asset.hpp"

#include <linux/input.h>

gcc_const
static unsigned
TranslateKeyCode(unsigned key_code)
{
  if (IsKobo()) {
    switch (key_code) {
    case KEY_HOME:
      /* the Kobo Touch "home" button shall open the menu */
      return KEY_MENU;
    }
  }

  return key_code;
}

/* these macros conflict with Event::Type */
#undef KEY_UP
#undef KEY_DOWN

/* wrong meaning */
#undef KEY_NEXT

#endif
