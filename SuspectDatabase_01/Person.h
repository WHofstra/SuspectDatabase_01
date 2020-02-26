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
		std::string GetEthnicity();
		int GetBSN();

    protected:
		std::string name;
		std::string ethnicity;
		int bsn;
};

