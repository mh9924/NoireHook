#include "stdafx.h"
#include "NoireEntity/MainMenu.h"
#include "UI.h"


UI::UI()
{
	MenuMain = new MainMenu();
}


UI::~UI()
{
	delete MenuMain;
}
