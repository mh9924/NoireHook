#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "GamePlayer.h"

class NOIREHOOK_API LosAngeles
{
public:
	LosAngeles();
	~LosAngeles();

	GamePlayer* Player;
};