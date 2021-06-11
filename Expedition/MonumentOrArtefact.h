#pragma once
#include "Object.h"

class MonumentOrArtefact : public Object
{

private:
	int idCounter;

public:

	MonumentOrArtefact();
	MonumentOrArtefact(DateTime dataOfdiscovery, vector<Member> foundedBy);

	bool getIsSuitableForLiving() const;
	int getId() const;
};