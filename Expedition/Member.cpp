#include "Member.h"

int Member::id = 0;

Member::Member()
{
	this->id++;
}

Member::Member(string name, vector<Object*> workingOn)
{
	this->id++;
	this->name = name;
	this->workingOn = workingOn;
}

int Member::getId() const
{
	return this->id;
}

string Member::getName() const
{
	return this->name;
}
