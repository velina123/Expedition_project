#include "DateTime.h"
#include "DateTime.h"

DateTime::DateTime(int year, int month, int day, int hour, int min)
{
	this->year = year;
	this->month = month;
	this->day = day;
	this->hour = hour;
	this->min = min;
}

std::ostream& operator<<(std::ostream& os, const DateTime& datetime)
{
	return os << datetime.year << " " << datetime.month << " " << datetime.day << " " << datetime.hour << " " << datetime.min;
}

bool DateTime::operator<(DateTime other)
{
	if (this->year < other.year || this->month < other.month || this->day < other.day || this->hour < other.hour || this->min < other.min)
	{
		return true;
	}
	
}

bool DateTime::operator>(DateTime other)
{
	if (this->year > other.year || this->month > other.month || this->day > other.day || this->hour > other.hour || this->min > other.min)
	{
		return true;
	}
}
//
//
//bool DateTime::operator==(DateTime other)
//{
//	if (this->year != other.year && this->month != other.month && this->day != other.day && this->hour != other.hour && this->min != other.min)
//	{
//		return false;
//	}
//}
//
//bool DateTime::operator!=(DateTime other)
//{
//	if (this->year == other.year && this->month == other.month && this->day == other.day && this->hour == other.hour && this->min == other.min)
//	{
//		return false;
//	}
//}
