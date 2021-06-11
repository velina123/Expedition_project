#pragma once
#include<string>
#include<vector>
using namespace std;

class Object;

class Member
{
private:
	static int id;
	string name;
	vector<Object*> workingOn;
public:
	Member();
	Member(string name, vector<Object*> workingOn);

	int getId() const;
	string getName() const;
};