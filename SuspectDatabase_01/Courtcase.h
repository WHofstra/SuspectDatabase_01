#pragma once
#include <list>
#include <time.h>

#include "Suspect.h"
#include "Attorney.h"
#include "Prosecutor.h"
#include "Judge.h"
#include "Offence.h"

class Courtcase
{
    public:
		Courtcase();
	    ~Courtcase();

		std::list<Suspect*> AddSuspect(Suspect* aSuspect, std::list<Suspect*>* aSuspectList);
		std::list<Attorney*> AddAttorney(Attorney* anAttorney, std::list<Attorney*>* anAttorneyList);
		std::list<Prosecutor*> AddProsecutor(Prosecutor* aProsecutor, std::list<Prosecutor*>* aProsecutorList);
		std::list<Judge*> AddJudge(Judge* aJudge, std::list<Judge*>* aJudgeList);
		std::list<Offence*> AddOffence(Offence* anOffence, std::list<Offence*>* anOffenceList);

		std::string GetSentence();

    private:
		std::list<Suspect*> suspectList;
		std::list<Attorney*> attorneyList;
		std::list<Prosecutor*> prosecutorList;
		std::list<Judge*> judgeList;
		std::list<Offence*> offenceList;

		std::string sentence;
		struct tm startingDate;
};

