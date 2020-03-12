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

		void AddSuspect(Suspect* aSuspect);
		void AddAttorney(Attorney* anAttorney);
		void AddProsecutor(Prosecutor* aProsecutor);
		void AddJudge(Judge* aJudge);
		void AddOffence(Offence* anOffence);

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

