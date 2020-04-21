#pragma once
#include "Person.h"
#include "Offence.h"
#include <list>

class Suspect : public Person
{
    public:
		Suspect(std::string aName, int aBSN);
		~Suspect();

		void AddOffence(Offence* anOffence);
		Offence* GetOffence(int index);
		std::list<Offence*> GetOffenceList();

    protected:
		std::list<Offence*> typeOffence;
		std::list<Offence*>::iterator offIt;
};

