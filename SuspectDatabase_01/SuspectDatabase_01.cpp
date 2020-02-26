#include <iostream>
#include "Person.h"

int main()
{
	std::time_t now;
	int years;
	struct tm birth;

	now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	//years = floor(now / (86400 * 365.25)); //Years Since 1 Januari 1970 UTC
	years = floor((now / (86400 * 365.25)) + 1970);

	birth.tm_year = 99; //Years Since 1 Januari 1900
	birth.tm_mon = 3; //Months Since Januari (Range 0-11)
	birth.tm_mday = 20;

	std::cout << "It has been " << years << " years since 0." << std::endl;
	
	//exit(0);
}
