#include "stdafx.h"
#include "Noire.h"
#include "UI.h"

#include <iostream>
#include <thread>


Noire::Noire()
{
	Interface = new UI();
	World = new LosAngeles();
}

Noire::~Noire()
{
	delete Interface;
	delete World;
}
