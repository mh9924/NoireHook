#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "NoireEntity/MainMenu.h"

class NOIREHOOK_API UI
{
public:
	MainMenu* MenuMain;

	UI();
	~UI();
};