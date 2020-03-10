#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

class Person
{
    public:
		Person();
		~Person();

		std::string GetName();
		int GetBSN();

    protected:
		std::string name;
		int bsn;
		struct tm birthDate;
};

