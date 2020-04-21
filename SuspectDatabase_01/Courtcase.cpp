#include "Courtcase.h"

Courtcase::Courtcase(std::string aName, bool stillRunning)
	: name(aName), running(stillRunning)
{

}

Courtcase::~Courtcase()
{

}

void Courtcase::AddSuspect(Suspect* aSuspect)
{
	personList.push_back(aSuspect);
	suspectList.push_back(aSuspect);
}

void Courtcase::AddAttorney(Attorney* anAttorney)
{
	personList.push_back(anAttorney);
	attorneyList.push_back(anAttorney);
}

void Courtcase::AddProsecutor(Prosecutor* aProsecutor)
{
	personList.push_back(aProsecutor);
	prosecutorList.push_back(aProsecutor);
}

void Courtcase::AddJudge(Judge* aJudge)
{
	personList.push_back(aJudge);
	judgeList.push_back(aJudge);
}

void Courtcase::AddSentence(Suspect* aSuspect, std::string aSentence)
{
	sentence.at(aSuspect) = aSentence;
}

std::list<Suspect*> Courtcase::GetSuspectList()
{
	return suspectList;
}

std::list<Attorney*> Courtcase::GetAttorneyList()
{
	return attorneyList;
}

std::list<Prosecutor*> Courtcase::GetProsecutorList()
{
	return prosecutorList;
}

std::list<Judge*> Courtcase::GetJudgeList()
{
	return judgeList;
}

std::list<Person*> Courtcase::GetPersonList()
{
	return personList;
}

std::string Courtcase::GetName()
{
	return name;
}

std::string Courtcase::GetSentences()
{
	if (running)
	{
		return (name + " is still an ongoing case.\nThere is yet to be a verdict.\n");
	}

	std::string sentnce = "";
	for (Suspect* s : suspectList)
	{
		sentnce += (s->GetName() + " received " + sentence.at(s) + "\n");
	}
	return sentnce;
}

bool Courtcase::IsRunning()
{
	return running;
}

void Courtcase::AssignOffenceTo(int indexSus, Offence* anOffence)
{
	itSus = suspectList.begin();
	for (int i = 0; i < indexSus; i++)
	{
		itSus++;
	}

	(*itSus)->AddOffence(anOffence);
}

void Courtcase::AssignAttorneyTo(int indexAtt, int indexSus)
{
	itAtt = attorneyList.begin();
	itSus = suspectList.begin();

	for (int i = 0; i < indexAtt; i++)
	{
		itAtt++;
	}

	for (int i = 0; i < indexSus; i++)
	{
		itSus++;
	}

	(*itAtt)->AddSuspectToDefend(*itSus);
}
