#pragma once
#include <iostream>
#include <list>
#include <Windows.h>

#include "Courtcase.h"

class Database
{
	public:
		Database();
		~Database();

		void SetInputKeyWord(HANDLE* aHandle);
		void AddCourtcase(Courtcase* aCase);
		void GetResults(std::string* aString);

		bool GetAllCases(std::string* aString, Courtcase* aCase, bool aRes);
		bool GetAllSuspects(std::string* aString, Suspect* aSuspect, bool aRes, Courtcase* aCase);
		bool GetAllAttorneys(std::string* aString, Attorney* anAttorney, bool aRes, Courtcase* aCase);
		bool GetAllProsecutors(std::string* aString, Prosecutor* aProsecutor, bool aRes, Courtcase* aCase);
		bool GetAllJudges(std::string* aString, Judge* aJudge, bool aRes, Courtcase* aCase);

	private:
		std::string keyWord;
		std::list<Courtcase*> database;
};

