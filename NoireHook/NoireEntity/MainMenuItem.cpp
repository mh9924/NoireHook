#include "stdafx.h"
#include "MainMenuItem.h"


MainMenuItem::MainMenuItem()
{
}

std::string MainMenuItem::GetName()
{
	char* itemStart = RawAddress;
	std::vector<char> characters;

	for (int i = 0; i < MENUSTR_MAXLEN; i++)
	{
		char* curChar = itemStart + i * 2;

		if (*curChar != 0x00)
			characters.push_back(*curChar);
		else
			break;
	}

	return std::string(characters.begin(), characters.end());
}

void MainMenuItem::SetName(std::string newName)
{
	char* itemStart = RawAddress;

	for (int i = 0; i < MENUSTR_MAXLEN; i++)
	{
		char* curChar = itemStart + i * 2;
		
		if (i < newName.length())
			*curChar = newName[i];
		else
			*curChar = 0x00;
	}
}


MainMenuItem::~MainMenuItem()
{
}
