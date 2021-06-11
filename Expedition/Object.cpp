#include "Object.h"

int Object::id = 0;

Object::Object()
{
	id++;
	idCounter = id;
	
}

Object::Object(DateTime dataOfDiscovery, vector<Member> foundedBy)
{
	//this->id++;
	idCounter = id;
	id++;
	this->dataOfdiscovery = dataOfDiscovery;
	this->foundedBy = foundedBy;
}

int Object::getId() const
{
	return this->idCounter;
}
