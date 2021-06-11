#pragma once
#include<iostream>
#include<fstream>
class DateTime
{
public:
	int year;
	int month;
	int day;
	int hour;
	int min;
	

	DateTime() = default;
	DateTime(int year, int month, int day, int hour, int min);
	friend std::ostream& operator<<(std::ostream& os, const DateTime& datetime);
	
	bool operator<(DateTime other);
	bool operator>(DateTime other);

	/*bool operator==(DateTime other);
	bool operator!=(DateTime other);*/

};