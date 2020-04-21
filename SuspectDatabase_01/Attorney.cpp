#include "Attorney.h"

Attorney::Attorney(std::string aName, int aBSN)
	: Person::Person(aName, aBSN)
{

}

Attorney::~Attorney()
{

}

void Attorney::AddSuspectToDefend(Suspect* aSuspect)
{
	defenseList.push_back(aSuspect);
}

std::list<Suspect*> Attorney::GetDefenseList()
{
	return defenseList;
}
