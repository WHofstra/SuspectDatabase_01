#include "Person.h"

Person::Person()
{
	/*year = { 0 };
	
	year.tm_hour = 0;   year.tm_min = 0; year.tm_sec = 0;
	year.tm_year = 100; year.tm_mon = 0; year.tm_mday = 1;
	time(&timer);
	seconds = difftime(timer, mktime(&year));

	std::cout << seconds << " seconds since January 1, 2000 in the current timezone." << std::endl;*/
}

Person::~Person()
{

}

std::string Person::GetName()
{
	return std::string();
}

std::string Person::GetEthnicity()
{
	return std::string();
}

int Person::GetBSN()
{
	return 0;
}
