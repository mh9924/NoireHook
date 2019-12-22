#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "NoireEntity/GameCharacter.h"

class NOIREHOOK_API GamePlayer
{
public:
	GamePlayer();
	GameCharacter * GetCurrentCharacter();
	~GamePlayer();
};