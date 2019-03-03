#pragma once
/*
==============================================================================

SendKeysM.h

This file is part of MIDI2LR. Copyright 2015 by Rory Jaffe.

MIDI2LR is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

MIDI2LR is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
MIDI2LR.  If not, see <http://www.gnu.org/licenses/>.
==============================================================================
*/
#ifndef MIDI2LR_SENDKEYSM_H_INCLUDED
#define MIDI2LR_SENDKEYSM_H_INCLUDED
#ifndef _WIN32
#include <string>
#include <Carbon/Carbon.h>

UniChar Utf8ToUtf16(const std::string& param);
#endif
#endif