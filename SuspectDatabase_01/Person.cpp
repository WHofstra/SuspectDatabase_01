#include "Person.h"

Person::Person(std::string aName, int aBSN)
	:name(aName), bsn(aBSN)
{
	
}

Person::~Person()
{

}

std::string Person::GetName()
{
	return name;
}

int Person::GetBSN()
{
	return bsn;
}
