#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

#include "../NoireEntity.h"


class NOIREHOOK_API GameCharacter : public NoireEntity
{
public:
	using NoireEntity::NoireEntity;

	GameCharacter(char* RawAddress);
	float GetXPosition();
	float GetYPosition();
	float GetZPosition();

	int GetAnimation();
	int GetAnimation2();

	void SetXPosition(float position);
	void SetYPosition(float position);
	void SetZPosition(float position);

	void SetAnimation(int animationId);
	void SetAnimation2(int animationId);

	virtual ~GameCharacter();

protected:
	float* XPosition;
	float* YPosition;
	float* ZPosition;

	int* Animation;
	int* Animation2;
};

