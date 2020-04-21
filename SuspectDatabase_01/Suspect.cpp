#include "Suspect.h"

Suspect::Suspect(std::string aName, int aBSN)
	: Person::Person(aName, aBSN)
{
	
}

Suspect::~Suspect()
{

}

void Suspect::AddOffence(Offence* anOffence)
{
	typeOffence.push_back(anOffence);
}

Offence* Suspect::GetOffence(int index)
{
	offIt = typeOffence.begin();
	for (int i = 0; i < index; i++)
	{
		offIt++;
	}

	return *offIt;
}

std::list<Offence*> Suspect::GetOffenceList()
{
	return typeOffence;
}
