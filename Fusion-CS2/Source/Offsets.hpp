/*

fixed by @mystorik
credits: a2x repo: cs2-dumper

*/

#pragma once

#include <cstddef>

namespace Offsets {
	// These change almost every update
	constexpr std::ptrdiff_t EntityList = 0x1A292F0;	// dwEntityList			(offsets.hpp)
	constexpr std::ptrdiff_t LocalPlayer = 0x187CEF0;	// dwLocalPlayerPawn	(offsets.hpp)
	
	constexpr std::ptrdiff_t ViewMatrix = 0x1A942F0;	// dwViewMatrix			(offsets.hpp)
	constexpr std::ptrdiff_t ViewAngles = 0x1A9E400;	// dwViewAngles			(offsets.hpp)

	// These don't change as often
	constexpr std::ptrdiff_t Player = 0x80C;			// m_hPlayerPawn		(client_dll.hpp)

	constexpr std::ptrdiff_t Name = 0x660;				// m_iszPlayerName		(client_dll.hpp)
	constexpr std::ptrdiff_t Health = 0x344;			// m_iHealth			(client_dll.hpp)
	constexpr std::ptrdiff_t Team = 0x3E3;				// m_iTeamNum			(client_dll.hpp)

	constexpr std::ptrdiff_t OldOrigin = 0x1324;		// m_vOldOrigin			(client_dll.hpp)

    constexpr std::ptrdiff_t SceneNode = 0x8;			// m_pSceneNode			(client_dll.hpp)
	constexpr std::ptrdiff_t ModelState = 0x170;		// m_modelState			(client_dll.hpp)

	constexpr std::ptrdiff_t ViewOffset = 0xCB0;		// m_vecViewOffset		(client_dll.hpp)
}
