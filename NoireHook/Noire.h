#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "UI.h"
#include "LosAngeles.h"


class NOIREHOOK_API Noire
{
public:
	UI * Interface;
	LosAngeles* World;

	Noire();
	~Noire();
};