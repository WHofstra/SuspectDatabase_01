#pragma once
#include <string>

class Person
{
    public:
		Person(std::string aName, int aBSN);
		~Person();

		std::string GetName();
		int GetBSN();

    protected:
		std::string name;
		int bsn;
		//struct tm birthDate;
};

