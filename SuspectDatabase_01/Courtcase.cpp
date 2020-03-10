#include "Courtcase.h"

Courtcase::Courtcase()
{

}

Courtcase::~Courtcase()
{

}

void Courtcase::AddSuspect(Suspect aSuspect)
{
	suspectList.push_back(aSuspect);
}

void Courtcase::AddAttorney(Attorney anAttorney)
{
	attorneyList.push_back(anAttorney);
}

void Courtcase::AddProsecutor(Prosecutor aProsecutor)
{
	prosecutorList.push_back(aProsecutor);
}

void Courtcase::AddJudge(Judge aJudge)
{
	judgeList.push_back(aJudge);
}

void Courtcase::AddOffence(Offence anOffence)
{
	offenceList.push_back(anOffence);
}

std::string Courtcase::GetSentence()
{

	return std::string();
}
