#pragma once

enum CharactersConsts
{
	/* At least the protagonist and partner character pointers can be accessed after dereferencing the following pointer. */
	/* Pointer to array of game characters. */
	CHARACTERS = 0x013E1608,

	/* Add the offset and deference again to get to the game character struct. */
	PLAYER_OFFSET = 0x10,
	PARTNER_OFFSET = 0x14
};

enum CharacterConsts
{
	/* Add the offsets to the game character memory address and dereference to access the value. */
	CHARACTER_Y_POS = 0x1D0,
	CHARACTER_Z_POS = 0x1D4,
	CHARACTER_X_POS = 0x1D8,

	CHARACTER_ANIMATION1 = 0xB90,
	CHARACTER_ANIMATION2 = 0xB94
};

enum MainMenuConsts
{
	/* Start address of main menu is always 0x1693XEF0, where X is a hex number 0-F. */
	/* For now it is determined by NoireEntity::DetermineRawAddress() as haven't found static address. */
	/* First possible pointer is 0x16930EF0. */
	START_MIN = 0x16930EF0,
	START_MAX = 0x1693FEF0,
	START_OFFSET = 0x1000,

	/* First character of first menu item is the "N" in "NEW". */
	/* Compared to when dereferencing possible pointers for start. */
	START_CHAR = 0x4E,
};

enum MainMenuItemConsts
{
	/* The offset is the space between each menu item structure in memory. */
	OFFSET = 0x90,

	/* Multiply by the offset to get a pointer to the menu item. */
	NEW_MULT = 0x00,
	RESUME_MULT = 0x01,
	CASES_MULT = 0x02,
	OPTIONS_MULT = 0x03,
	EXTRAS_MULT = 0x04
};