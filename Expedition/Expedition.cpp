#include "Expedition.h"

Expedition::Expedition(string name, DateTime startingDate, DateTime endDate, string destination, vector<Member> team, vector<Object*> informationAboutTheObjects)
{
	this->name = name;
	this->startingDate = startingDate;
	this->endDate = endDate;
	this->destination = destination;
	this->team = team;
	this->informationAboutTheObjects = informationAboutTheObjects;
}

DateTime Expedition::getStartingDate() const
{
	return startingDate;
}

DateTime Expedition::getEndDate() const
{
	return endDate;
}

vector<Member> Expedition::getTeam() const
{
	return vector<Member>();
}

void Expedition::addObject(DateTime date, vector<Member> members)
{
	if (date < this->startingDate || date > this->endDate)
	{
		throw invalid_argument("You have entered an invalid date!");
	}

	int counter = 0;

	for (int i = 0; i < members.size(); i++)
	{		
		for (int j = 0; j < team.size(); j++)
		{
			if (members[i].getId() != team[j].getId())
			{
				counter++;
			}
			if (counter == team.size())
			{
				throw invalid_argument("You have typed an invalid member");
			}
		}
		counter = 0;
	}

	string objectCategory;
	cout << "Insert category:";
	cin >> objectCategory;

	if (objectCategory != "Monument" || objectCategory != "Building" || objectCategory != "Artefact" || objectCategory != "Other")
	{
		throw invalid_argument("You have entered an invalid category");
	}

	if (objectCategory == "Monument" || objectCategory == "Artefact")
	{
		MonumentOrArtefact toAdd(date, members);
		this->informationAboutTheObjects.push_back(&toAdd);

	}

	if (objectCategory == "Other")
	{
		UnknownObject toAdd(date, members);
		this->informationAboutTheObjects.push_back(&toAdd);
	}

	if (objectCategory == "Building")
	{
		string type;
		cout << "Insert type: ";
		cin >> type;

		if (type != "residential" || type != "institution" || type != "production")
		{
			throw invalid_argument("You have entered an invalid type");
		}

		BuildingType toAddType;

		if (type == "institution")
		{
			toAddType = BuildingType::institution;
		}
		if (type == "residential")
		{
			toAddType = BuildingType::residential;
		}
		if (type == "production")
		{
			toAddType = BuildingType::production;
		}

		Building toAdd(date, members, toAddType);

		cout << "Object created! Discovery date: " << date << " Category: " << objectCategory << " Type: " << type << " Members: ";

		for (int i = 0; i < members.size(); i++) 
		{
			cout << members[i].getName() << " ";
		}
		return;
	}

	cout << "Object created! Discovery date: " << date << " Category: " << objectCategory << " Members: ";

	for (int i = 0; i < members.size(); i++)
	{
		cout << members[i].getName() << " ";
	}
}

void Expedition::reclassify(Object* category)
{
	int id;
	cin >> id;
	/*if (id != Building().getId() || id != MonumentOrArtefact().getId() || id!=UnknownObject().getId())
	{

	}*/

	

}
