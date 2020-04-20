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
	if (*aString == "Herman")
	{
		std::cout << "1 Result" << std::endl;
	}
}
