#include "stdafx.h"
#include "NoireEntity.h"


NoireEntity::NoireEntity()
{
}

NoireEntity::NoireEntity(char* addr)
{
	RawAddress = addr;
}

char* NoireEntity::GetRawAddress()
{
	return RawAddress;
}
