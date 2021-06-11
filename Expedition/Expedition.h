#pragma once
#include<string>
#include<vector>
#include<ctime>
#include"DateTime.h"
#include"Member.h"
#include"Building.h"
#include"MonumentOrArtefact.h"
#include"UnknownObject.h"
using namespace std;

class DataTime;
class Object;
class Member;

class Expedition
{
protected:
	string name;
	DateTime startingDate;
	DateTime endDate;
	string destination;
	vector<Member> team;
	vector<Object*> informationAboutTheObjects;

public:
	Expedition() = default;
	Expedition(string name, DateTime startingDate, DateTime endDate, string destination, vector<Member> team, vector<Object*> informationAboutTheObjects);
	DateTime getStartingDate() const;
	DateTime getEndDate() const;
	vector<Member> getTeam() const;
	
	void addObject(DateTime date, vector<Member> members);
	void reclassify(Object* category);
};