/***************************************************************************
 *   Copyright (C) 2010~2012 by CSSlayer                                   *
 *   wengxt@gmail.com                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.              *
 ***************************************************************************/

#include "eim.h"

/* USE fcitx provided macro to bind config and variable */
CONFIG_BINDING_BEGIN(FcitxHangulConfig)
CONFIG_BINDING_REGISTER("Hangul", "Keyboard", keyboardLayout)
CONFIG_BINDING_REGISTER("Hangul", "HanjaModeToggleKey", hkHanjaMode)
CONFIG_BINDING_REGISTER("Hangul", "HanjaMode", hanjaMode)
CONFIG_BINDING_REGISTER("Hangul", "AutoReorder", autoReorder)
CONFIG_BINDING_REGISTER("Hangul", "WordCommit", wordCommit)
CONFIG_BINDING_REGISTER("Hangul", "BaseLayout", baseLayout)
CONFIG_BINDING_END()
