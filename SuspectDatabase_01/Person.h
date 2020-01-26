#pragma once
#include <string>
#include <time.h>

class Person
{
    public:
		Person();
		~Person();

		std::string GetName();
		std::string GetEthnicity();
		int GetBSN();

    protected:
		std::string name;
		std::string ethnicity;
		int bsn;

		/*time_t timer;
	      struct tm year = { 0 };
	      double seconds;*/
};

