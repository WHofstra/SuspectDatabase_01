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

	private:
		std::string keyWord;
		std::list<Courtcase*> database;
};

