#include "Courtcase.h"

Courtcase::Courtcase()
{

}

Courtcase::~Courtcase()
{

}

std::list<Suspect*> Courtcase::AddSuspect(Suspect* aSuspect, std::list<Suspect*>* aSuspectList)
{
	aSuspectList->push_back(aSuspect);
}

std::list<Attorney*> Courtcase::AddAttorney(Attorney* anAttorney, std::list<Attorney*>* anAttorneyList)
{
	anAttorneyList->push_back(anAttorney);
}

std::list<Prosecutor*> Courtcase::AddProsecutor(Prosecutor* aProsecutor, std::list<Prosecutor*>* aProsecutorList)
{
	aProsecutorList->push_back(aProsecutor);
}

std::list<Judge*> Courtcase::AddJudge(Judge* aJudge, std::list<Judge*>* aJudgeList)
{
	aJudgeList->push_back(aJudge);
}

std::list<Offence*> Courtcase::AddOffence(Offence* anOffence, std::list<Offence*>* anOffenceList)
{
	anOffenceList->push_back(anOffence);
}

std::string Courtcase::GetSentence()
{

	return std::string();
}
