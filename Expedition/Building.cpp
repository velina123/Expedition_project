#include "Building.h"

Building::Building(BuildingType type) : Object()
{ 
	this->id++;
	this->type = type;
	this->isSuitableForLiving = true;
}

Building::Building(DateTime dataOfdiscovery, vector<Member> foundedBy, BuildingType type) : Object(dataOfdiscovery, foundedBy)
{
	this->id++;
	this->type = type;
}

BuildingType Building::getType() const
{
	return type;
}
