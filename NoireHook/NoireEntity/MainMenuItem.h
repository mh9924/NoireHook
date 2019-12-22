#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "../NoireEntity.h"
#include <string>
#include <vector>

class NOIREHOOK_API MainMenuItem : public NoireEntity
{
public:
	using NoireEntity::NoireEntity;

	MainMenuItem();
	virtual ~MainMenuItem();

	void SetName(std::string newName);
	std::string GetName();

private:
	enum MemoryConsts
	{
		/* Each menu item string has a max length of 16. */
		/* Each char of menu item string is delimited by 0x00, so use 8. */
		MENUSTR_MAXLEN = 8
	};
};

