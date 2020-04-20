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
	for (Courtcase* c : database)
	{
		std::cout << "-----" << c->GetName() << "-----" << std::endl;
		for (Person* p : c->GetPersonList())
		{
			if (p->GetName().length() < 16) {
				std::cout << p->GetName() << "\t\t(" << p->GetBSN() << ")" << std::endl;
			} else {
				std::cout << p->GetName() << "\t(" << p->GetBSN() << ")" << std::endl;
			}
		}
		std::cout << std::endl;
	}
}
