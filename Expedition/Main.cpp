#include<iostream>
#include "Expedition.h"
#include "Building.h"
#include "Object.h"
#include "UnknownObject.h"
#include "MonumentOrArtefact.h"
using namespace std;


int main()
{
	//string name = "expediton1";
	//string iva = "iva";
	//string destination = "destination";
	//UnknownObject unknownobject;
	
	////vector<Object*> foriva
	////Member iva(iva,)
	//BuildingType type = BuildingType::residential;
	//Building build();
	//DateTime time1(2000, 5, 20, 15, 12);
	//DateTime time2(2010, 5, 21, 15, 13);
	//DateTime time3(2006, 6, 22, 16, 14);
	//vector<Member> team;
	//vector<Object*> information;

	
	MonumentOrArtefact mon;
	MonumentOrArtefact mon2;
	MonumentOrArtefact mon3;
	MonumentOrArtefact mon4;
	

	cout << mon.getId() << endl;
	cout << mon2.getId()<<endl;
	cout << mon3.getId()<<endl;
	cout << mon4.getId()<<endl;

	Object a;
	Object b;
	Object c;
	Object d;

	cout << a.getId() << endl;
	cout << b.getId() << endl;
	cout << c.getId() << endl;
	cout << d.getId() << endl;
	

	//Expedition exp(name, time1, time2, destination, team, information);
	//exp.addObject(time3, team);

	

	return 0;
}