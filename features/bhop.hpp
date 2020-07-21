#pragma once
#include "../helpers/math.hpp"
#include "../options.hpp"

class C_BasePlayer;
class CUserCmd;

namespace BunnyHop
{
    void OnCreateMove(CUserCmd* cmd);
	void AutoStrafe(CUserCmd* cmd, QAngle va);
}