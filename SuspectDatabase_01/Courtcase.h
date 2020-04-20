#pragma once
#include <list>
#include <map>
#include <time.h>

#include "Suspect.h"
#include "Attorney.h"
#include "Prosecutor.h"
#include "Judge.h"
#include "Offence.h"

class Courtcase
{
    public:
		Courtcase(std::string aName, bool stillRunning);
	    ~Courtcase();

		void AddSuspect(Suspect* aSuspect);
		void AddAttorney(Attorney* anAttorney);
		void AddProsecutor(Prosecutor* aProsecutor);
		void AddJudge(Judge* aJudge);
		void AddOffence(Offence* anOffence);
		void AddSentence(Suspect* aSuspect, std::string aSentence);

		std::list<Suspect*> GetSuspectList();
		std::list<Attorney*> GetAttorneyList();
		std::list<Prosecutor*> GetProsecutorList();
		std::list<Judge*> GetJudgeList();
		std::list<Offence*> GetOffenceList();
		std::list<Person*> GetPersonList();

		std::string GetName();
		std::string GetSentences();

    private:
		std::list<Suspect*> suspectList;
		std::list<Attorney*> attorneyList;
		std::list<Prosecutor*> prosecutorList;
		std::list<Judge*> judgeList;
		std::list<Offence*> offenceList;
		std::list<Person*> personList;

		std::string name;
		std::map<Suspect*, std::string> sentence;
		//struct tm startingDate;

		bool running;

};

