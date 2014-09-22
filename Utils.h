/* =========================================
			
		FCNPC - Fully Controllable NPC
			----------------------

	- File: Utils.cpp
	- Author(s): OrMisicL

  =========================================*/

#ifndef UTILS_H
#define UTILS_H

// Linux
#ifndef _WIN32

int GetTickCount();
void TickCountLoad();

#endif

float GetDistance3D(CVector *vecPosition, CVector *_vecPosition);
bool IsPlayerConnected(int playerid);
const char* GetWeaponName(BYTE weaponid);
BYTE GetWeaponSlot(BYTE weaponid);

int CFGLoad(char const * const name, char * const dest, size_t dlen);
#endif