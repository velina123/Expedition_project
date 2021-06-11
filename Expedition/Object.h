#pragma once
#include "DateTime.h"
#include "Member.h"
#include<vector>
using namespace std;

class Object
{
protected:
	int idCounter = 0;
	static int id;
	DateTime dataOfdiscovery;
	vector<Member> foundedBy;
	bool isSuitableForLiving;
public:
	Object();
	Object(DateTime dataOfDiscovery, vector<Member> foundedBy);

	int getId() const;
};
