#pragma once
#include <string>
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

		void AddSuspect(Suspect* aSuspect, std::list<Suspect*>* aSuspectList);
		void AddAttorney(Attorney* anAttorney, std::list<Attorney*>* anAttorneyList);
		void AddProsecutor(Prosecutor* aProsecutor, std::list<Prosecutor*>* aProsecutorList);
		void AddJudge(Judge* aJudge, std::list<Judge*>* aJudgeList);
		void AddOffence(Offence* anOffence, std::list<Offence*>* anOffenceList);

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

