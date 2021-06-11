#include "UnknownObject.h"

UnknownObject::UnknownObject(DateTime dataOfdiscovery, vector<Member> foundedBy) : Object(dataOfdiscovery, foundedBy)
{
	this->id++;
}
