#pragma once
#include "Person.h"
#include "Offence.h"
#include <list>

class Suspect : public Person
{
    public:
		Suspect(std::string aName, int aBSN);
		~Suspect();

		std::string GetOffence();

    protected:
		std::list<Offence*> typeOffence;
};

