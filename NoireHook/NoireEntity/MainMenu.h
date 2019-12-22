#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "../NoireEntity.h"
#include "MainMenuItem.h"
#include <vector>

class NOIREHOOK_API MainMenu : public NoireEntity
{
public:
	MainMenu();
	virtual ~MainMenu();

	MainMenuItem* GetItemByPosition(int i);

	MainMenuItem* GetItemByName(std::string name);

private:

	std::vector<MainMenuItem*> items;

	char* DetermineRawAddress();
};

