#include "stdafx.h"
#include "GamePlayer.h"
#include "MemoryEnums.h"

#include <sstream>

GamePlayer::GamePlayer()
{
}

GameCharacter* GamePlayer::GetCurrentCharacter()
{
	char** p_gameCharacters = (char**)CHARACTERS;
	char* gameCharacters = *p_gameCharacters;

	char** p_playerGameCharacter = (char**)(gameCharacters + PLAYER_OFFSET);
	char* playerGameCharacter = *p_playerGameCharacter;

	return new GameCharacter(playerGameCharacter);
}

GamePlayer::~GamePlayer()
{
}