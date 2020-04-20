#include "Offence.h"

Offence::Offence(std::string aName, std::string anInfo)
	: name(aName), info(anInfo)
{

}

Offence::~Offence()
{

}

std::string Offence::GetName()
{
	return name;
}

std::string Offence::GetInfo()
{
	return info;
}

void Offence::SetMaxSentence(std::string aMax)
{
	maxSentence = aMax;
}

std::string Offence::GetMaxSentence()
{
	return maxSentence;
}
