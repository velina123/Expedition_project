#pragma once
#include "Object.h"

class UnknownObject : public Object
{
public:
	UnknownObject() = default;
	UnknownObject(DateTime dataOfdiscovery, vector<Member> foundedBy);
};