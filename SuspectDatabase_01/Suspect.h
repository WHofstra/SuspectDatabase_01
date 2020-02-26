#pragma once
#include "Person.h"

class Suspect : public Person
{
    public:
		Suspect();
		~Suspect();

		std::string GetOffence();

    protected:
		std::string typeOffence;
};

