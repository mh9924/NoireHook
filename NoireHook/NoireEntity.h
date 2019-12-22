#pragma once

#ifdef NOIREHOOK_EXPORTS
#define NOIREHOOK_API __declspec(dllexport)
#else
#define NOIREHOOK_API __declspec(dllimport)
#endif

class NOIREHOOK_API NoireEntity
{
public:
	NoireEntity();
	NoireEntity(char *);
	virtual ~NoireEntity() {};

	char* GetRawAddress();

protected:
	char* RawAddress;

	virtual char* DetermineRawAddress() { return NULL; };
};