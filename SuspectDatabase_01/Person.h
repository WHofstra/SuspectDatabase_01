#pragma once
#include <string>

class Person
{
    public:
		Person();
		~Person();

		std::string GetName();
		std::string GetEthnicity();
		int GetBSN();

    private:
		std::string name;
		std::string ethnicity;
		int bsn;
};

