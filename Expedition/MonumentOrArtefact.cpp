#include "MonumentOrArtefact.h"

MonumentOrArtefact::MonumentOrArtefact() : Object()
{
	idCounter = id;
	//id++; */
	this->isSuitableForLiving = false;
}

MonumentOrArtefact::MonumentOrArtefact(DateTime dataOfdiscovery, vector<Member> foundedBy) : Object(dataOfdiscovery, foundedBy)
{
	
	idCounter = id;
	id++;
	this->isSuitableForLiving = false;
}

bool MonumentOrArtefact::getIsSuitableForLiving() const
{
	return this->isSuitableForLiving;
}

int MonumentOrArtefact::getId() const
{
	return idCounter;
}
