/**
* @file RoboCupGameControlData.h
* The file encapsulates definitions in the file RoboCupGameControlData.h
* that is provided with the GameController in a namespace.
* @author <a href="mailto:Thomas.Roefer@dfki.de">Thomas Röfer</a>
*/

#pragma once

#include <cstdint>

namespace RoboCup
{
#define teamColour teamColor
#include <RoboCupGameControlData.h>
#include <SPLStandardMessage.h>
#undef teamColour

// This should be defined in one of the includes above
// but it isn't so i will just leave this here
#define DROPIN_INTENTION_DEFAULT 0
#define DROPIN_INTENTION_KEEPER 1
#define DROPIN_INTENTION_DEFENSIVE 2
#define DROPIN_INTENTION_KICK 3
#define DROPIN_INTENTION_LOST 4
}
