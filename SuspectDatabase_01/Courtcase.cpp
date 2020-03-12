#include "Courtcase.h"

Courtcase::Courtcase()
{

}

Courtcase::~Courtcase()
{

}

void Courtcase::AddSuspect(Suspect* aSuspect, std::list<Suspect*>* aSuspectList)
{
	aSuspectList->push_back(aSuspect);
}

void Courtcase::AddAttorney(Attorney* anAttorney, std::list<Attorney*>* anAttorneyList)
{
	anAttorneyList->push_back(anAttorney);
}

void Courtcase::AddProsecutor(Prosecutor* aProsecutor, std::list<Prosecutor*>* aProsecutorList)
{
	aProsecutorList->push_back(aProsecutor);
}

void Courtcase::AddJudge(Judge* aJudge, std::list<Judge*>* aJudgeList)
{
	aJudgeList->push_back(aJudge);
}

void Courtcase::AddOffence(Offence* anOffence, std::list<Offence*>* anOffenceList)
{
	anOffenceList->push_back(anOffence);
}

std::string Courtcase::GetSentence()
{

	return std::string();
}
