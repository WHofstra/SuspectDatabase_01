#include "Suspect.h"

Suspect::Suspect(std::string aName, int aBSN)
	: Person::Person(aName, aBSN)
{
	
}

Suspect::~Suspect()
{

}

std::string Suspect::GetOffence()
{
	return "";
}
