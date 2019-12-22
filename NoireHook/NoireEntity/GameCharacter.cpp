#include "stdafx.h"
#include "GameCharacter.h"
#include "../MemoryEnums.h"

#include <sstream>


GameCharacter::GameCharacter(char* RawAddress)
{
	YPosition = (float*) (RawAddress + CHARACTER_Y_POS);
	ZPosition = YPosition + 1;
	XPosition = ZPosition + 1;

	Animation = (int*) (RawAddress + CHARACTER_ANIMATION1);
	Animation2 = Animation + 1;
}

GameCharacter::~GameCharacter()
{
}

float GameCharacter::GetXPosition()
{
	return *XPosition;
}

float GameCharacter::GetYPosition()
{
	return *YPosition;
}

float GameCharacter::GetZPosition()
{
	return *ZPosition;
}

int GameCharacter::GetAnimation()
{
	return *Animation;
}

int GameCharacter::GetAnimation2()
{
	return *Animation2;
}

void GameCharacter::SetXPosition(float position)
{
	*XPosition = position;
}

void GameCharacter::SetYPosition(float position)
{
	*YPosition = position;
}

void GameCharacter::SetZPosition(float position)
{
	*ZPosition = position;
}

void GameCharacter::SetAnimation(int animationId)
{
	*Animation = animationId;
}

void GameCharacter::SetAnimation2(int animationId)
{
	*Animation2 = animationId;
}