#pragma once
#include <list>
#include "Person.h"
#include "Suspect.h"

class Attorney : public Person
{
    public:
		Attorney(std::string aName, int aBSN);
		~Attorney();

		void AddSuspectToDefend(Suspect* aSuspect);
		std::list<Suspect*> GetDefenseList();

	protected:
		std::list<Suspect*> defenseList;
};

