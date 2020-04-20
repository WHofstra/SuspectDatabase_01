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
	suspectList.push_back(aSuspect);
}

void Courtcase::AddAttorney(Attorney* anAttorney)
{
	attorneyList.push_back(anAttorney);
}

void Courtcase::AddProsecutor(Prosecutor* aProsecutor)
{
	prosecutorList.push_back(aProsecutor);
}

void Courtcase::AddJudge(Judge* aJudge)
{
	judgeList.push_back(aJudge);
}

void Courtcase::AddOffence(Offence* anOffence)
{
	offenceList.push_back(anOffence);
}

void Courtcase::AddSentence(Suspect* aSuspect, std::string aSentence)
{
	sentence.at(aSuspect) = aSentence;
}

void Courtcase::GetSentences()
{
	if (running)
	{
		std::cout << name << " is still an ongoing case." << std::endl;
		std::cout << "There is yet to be a verdict." << std::endl;
	}
	else
	{
		for (Suspect* s : suspectList)
		{
			std::cout << s->GetName() << " received " << sentence.at(s) << std::endl;
		}
	}
}
