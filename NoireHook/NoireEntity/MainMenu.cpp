#include "stdafx.h"
#include "MainMenu.h"
#include "../NoireEntity.h"
#include "../MemoryEnums.h"


MainMenu::MainMenu()
{
	RawAddress = DetermineRawAddress();

	if (RawAddress != NULL)
	{
		MainMenuItem* NEW = new MainMenuItem(RawAddress + OFFSET * NEW_MULT);
		MainMenuItem* RESUME = new MainMenuItem(RawAddress + OFFSET * RESUME_MULT);
		MainMenuItem* CASES = new MainMenuItem(RawAddress + OFFSET * CASES_MULT);
		MainMenuItem* OPTIONS = new MainMenuItem(RawAddress + OFFSET * OPTIONS_MULT);
		MainMenuItem* EXTRAS = new MainMenuItem(RawAddress + OFFSET * EXTRAS_MULT);
		
		items.push_back(NEW);
		items.push_back(RESUME);
		items.push_back(CASES);
		items.push_back(OPTIONS);
		items.push_back(EXTRAS);
	}
}


MainMenu::~MainMenu()
{
	for (int i = 0; i < items.size(); i++)
		delete items[i];
}

MainMenuItem* MainMenu::GetItemByPosition(int i)
{
	return items[i];
}

MainMenuItem* MainMenu::GetItemByName(std::string name)
{
	for (int i = 0; i < items.size(); i++)
		if (items[i]->GetName() == name)
			return items[i];

	return nullptr;
}

char* MainMenu::DetermineRawAddress()
{
	/* Determines the start memory address for LA Noire's main menu. Check header enums for addresses/constants for current game version. */
	
	char* startMin = (char*)START_MIN;
	char* startMax = (char*)START_MAX;

	for (char* i = startMin; i <= startMax; i += START_OFFSET)
	{
		// char message[256];
		// sprintf_s(message, sizeof(message), "Trying address: %d", i);
		// MessageBoxA(0, message, "NoireHook", MB_OK);

		if (*i == START_CHAR)
			return i;
	}

	return nullptr;
}