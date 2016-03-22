#pragma once
/*
  ==============================================================================

	LRCommands.h
	Created: 31 Jul 2015 10:21:12pm
	Author:  Parth, Jaffe

This file is part of MIDI2LR. Copyright 2015-2016 by Rory Jaffe.

MIDI2LR is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

MIDI2LR is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
MIDI2LR.  If not, see <http://www.gnu.org/licenses/>.  
  ==============================================================================
*/
#ifndef LRCOMMANDS_H_INCLUDED
#define LRCOMMANDS_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>

/**********************************************************************************************//**
* @class   LRCommandList
*
* @brief   Lightroom command list.
*
* @author  Rory Jaffe
* @date    3/20/2016
**************************************************************************************************/

class LRCommandList
{
public:
	// Strings that LR uses
	static const std::vector<String> LRStringList;

	// Sectioned and readable develop param strings
    static const std::vector<String> General;
    static const std::vector<String> Library;
    static const std::vector<String> Develop;
    static const std::vector<String> BasicAdjustments;
    static const std::vector<String> ToneCurve;
    static const std::vector<String> Mixer;
    static const std::vector<String> ResetMixer;
    static const std::vector<String> SplitToning;
    static const std::vector<String> Detail;
    static const std::vector<String> LensCorrections;
    static const std::vector<String> Effects;
    static const std::vector<String> Calibration;
    static const std::vector<String> DevelopPresets;
    static const std::vector<String> LocalAdjustments;
    static const std::vector<String> Crop;
    static const std::vector<String> ToolModulePanel;
    static const std::vector<String> ViewModes;
    static const std::vector<String> ProgramProfiles;
    // MIDI2LR commands
	static const std::vector<String> NextPrevProfile;

	// Map of command strings to indices
	static int getIndexOfCommand(const String& command);

private:
	LRCommandList();
};

#endif  // LRCOMMANDS_H_INCLUDED
