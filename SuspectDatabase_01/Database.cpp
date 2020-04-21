#include "Database.h"

Database::Database()
{

}

Database::~Database()
{

}

void Database::SetInputKeyWord(HANDLE* aHandle)
{
	std::cin >> keyWord;

	SetConsoleTextAttribute(*aHandle, 10);
	if (keyWord == "Quit" || keyWord == "quit")
	{
		//Quit Application
		exit(0);
	}

	GetResults(&keyWord);
	std::cout << std::endl;

	SetConsoleTextAttribute(*aHandle, 12);
}

void Database::AddCourtcase(Courtcase* aCase)
{
	database.push_back(aCase);
}

void Database::GetResults(std::string* aString)
{
	bool results = false;

	for (Courtcase* c : database)
	{
		results = GetAllCases(aString, c, results);

		for (Suspect* s : c->GetSuspectList())
		{
			results = GetAllSuspects(aString, s, results, c);
		}

		for (Attorney* a : c->GetAttorneyList())
		{
			results = GetAllAttorneys(aString, a, results, c);
		}

		for (Prosecutor* p : c->GetProsecutorList())
		{
			results = GetAllProsecutors(aString, p, results, c);
		}

		for (Judge* j : c->GetJudgeList())
		{
			results = GetAllJudges(aString, j, results, c);
		}
	}

	if (!results) {
		std::cout << "No results could be found." << std::endl;
	}
}

bool Database::GetAllCases(std::string* aString, Courtcase* aCase, bool aRes)
{
	std::string str = "";

	for (char ch : aCase->GetName())
	{
		if (ch != ' ') {
			str += ch;
		}
		else {
			if (*aString == str)
			{
				std::cout << "Case: " << aCase->GetName() << ", Status: ";
				if (aCase->IsRunning()) {
					std::cout << "Open" << std::endl;
				} else {
					std::cout << "Closed" << std::endl;
				}
				std::cout << "Suspect(s): ";

				int i = 0;
				for (Suspect* s : aCase->GetSuspectList())
				{
					std::cout << s->GetName() << " (" << s->GetBSN() << ")";
					if (i < aCase->GetSuspectList().size() - 1) {
						std::cout << ", ";
					}
					i++;
				}
				std::cout << "." << std::endl;
				aRes = true;
			}
			str = "";
		}
	}

	//Get the Last Word from the Name
	if (*aString == str) {
		std::cout << "Case: " << aCase->GetName() << ", Status: ";
		if (aCase->IsRunning()) {
			std::cout << "Open" << std::endl;
		} else {
			std::cout << "Closed" << std::endl;
		}
		std::cout << "Suspect(s): ";

		int i = 0;
		for (Suspect* s : aCase->GetSuspectList())
		{
			std::cout << s->GetName() << " (" << s->GetBSN() << ")";
			if (i < aCase->GetSuspectList().size() - 1) {
				std::cout << ", ";
			}
			i++;
		}
		std::cout << "." << std::endl;
		return true;
	}

	return aRes;
}

bool Database::GetAllSuspects(std::string* aString, Suspect* aSuspect, bool aRes, Courtcase* aCase)
{
	std::string str = "";

	for (char ch : aSuspect->GetName())
	{
		if (ch != ',' && ch != ' ' && ch != '.') {
			str += ch;
		}
		else {
			if (*aString == str)
			{
				std::cout << aSuspect->GetName() << " (" << aSuspect->GetBSN() << ") ";
				if (aCase->IsRunning())
				{
					std::cout << "is being suspected of ";
				} else {
					std::cout << "has been suspected of ";
				}
				int i = 0;

				for (Offence* o : aSuspect->GetOffenceList()) {
					std::cout << o->GetName();
					if (i < aSuspect->GetOffenceList().size() - 1) {
						std::cout << ", ";
					}
					i++;
				}
				std::cout << "." << std::endl;
				aRes = true;
			}
			str = "";
		}
	}

	//Get the Last Word from the Name
	if (*aString == str) {
		std::cout << aSuspect->GetName() << " (" << aSuspect->GetBSN() << ") ";
		if (aCase->IsRunning())
		{
			std::cout << "is being suspected of ";
		}
		else {
			std::cout << "has been suspected of ";
		}
		int i = 0;

		for (Offence* o : aSuspect->GetOffenceList()) {
			std::cout << o->GetName();
			if (i < aSuspect->GetOffenceList().size() - 1) {
				std::cout << ", ";
			}
			i++;
		}
		std::cout << "." << std::endl;
		return true;
	}

	return aRes;
}

bool Database::GetAllAttorneys(std::string* aString, Attorney* anAttorney, bool aRes, Courtcase* aCase)
{
	std::string str = "";

	for (char ch : anAttorney->GetName())
	{
		if (ch != ',' && ch != ' ' && ch != '.') {
			str += ch;
		}
		else {
			if (*aString == str)
			{
				int i = 0;
				std::cout << anAttorney->GetName() << " (" << anAttorney->GetBSN() << ") ";

				if (aCase->IsRunning()) {
					std::cout << "represents ";
				} else {
					std::cout << "represented ";
				}
				for (Suspect* s : anAttorney->GetDefenseList())
				{
					std::cout << s->GetName() << " (" << s->GetBSN() << ")";
					if (i < anAttorney->GetDefenseList().size() - 1)
					{
						std::cout << ", ";
					}
					i++;
				}
				std::cout << " during the " << aCase->GetName() << " trials." << std::endl;
				aRes = true;
			}
			str = "";
		}
	}

	//Get the Last Word from the Name
	if (*aString == str)
	{
		int i = 0;
		std::cout << anAttorney->GetName() << " (" << anAttorney->GetBSN() << ") ";

		if (aCase->IsRunning()) {
			std::cout << "represents ";
		} else {
			std::cout << "represented ";
		}

		for (Suspect* s : anAttorney->GetDefenseList())
		{
			std::cout << s->GetName();
			if (i < anAttorney->GetDefenseList().size() - 1)
			{
				std::cout << ", ";
			}
			i++;
		}
		std::cout << " during the " << aCase->GetName() << " trials." << std::endl;
		return true;
	}
	return aRes;
}

bool Database::GetAllProsecutors(std::string* aString, Prosecutor* aProsecutor, bool aRes, Courtcase* aCase)
{
	std::string str = "";

	for (char ch : aProsecutor->GetName())
	{
		if (ch != ',' && ch != ' ' && ch != '.') {
			str += ch;
		}
		else {
			if (*aString == str)
			{
				std::cout << aProsecutor->GetName() << " (" << aProsecutor->GetBSN() << ") ";
				if (aCase->IsRunning()) {
					std::cout << "represents ";
				} else {
					std::cout << "represented ";
				}
				std::cout << "the prosecution during the " << aCase->GetName() << " trials." << std::endl;
				aRes = true;
			}
			str = "";
		}
	}

	//Get the Last Word from the Name
	if (*aString == str)
	{
		std::cout << aProsecutor->GetName() << " (" << aProsecutor->GetBSN() << ") ";
		if (aCase->IsRunning()) {
			std::cout << "represents ";
		}
		else {
			std::cout << "represented ";
		}
		std::cout << "the Prosecution during the " << aCase->GetName() << " trials." << std::endl;
		return true;
	}

	return aRes;
}

bool Database::GetAllJudges(std::string* aString, Judge* aJudge, bool aRes, Courtcase* aCase)
{
	std::string str = "";

	for (char ch : aJudge->GetName())
	{
		if (ch != ',' && ch != ' ' && ch != '.') {
			str += ch;
		}
		else {
			if (*aString == str)
			{
				std::cout << aJudge->GetName() << " (" << aJudge->GetBSN() << ") ";
				if (aCase->IsRunning()) {
					std::cout << "represents ";
				}
				else {
					std::cout << "represented ";
				}
				std::cout << "the Court of Law during the " << aCase->GetName() << " trials." << std::endl;
				aRes = true;
			}
			str = "";
		}
	}

	//Get the Last Word from the Name
	if (*aString == str)
	{
		std::cout << aJudge->GetName() << " (" << aJudge->GetBSN() << ") ";
		if (aCase->IsRunning()) {
			std::cout << "represents ";
		}
		else {
			std::cout << "represented ";
		}
		std::cout << "the Court of Law during the " << aCase->GetName() << " trials." << std::endl;
		return true;
	}

	return aRes;

	return aRes;
}
