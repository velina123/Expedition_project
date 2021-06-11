#pragma once
#include "Object.h"
#include "BuildingType.h"
using namespace std;

class Member;
class Object;

class Building : public Object
{
private:
	BuildingType type;
public:
	Building(BuildingType category);
	Building(DateTime dataOfdiscovery, vector<Member> foundedBy, BuildingType type);

	BuildingType getType() const;
};