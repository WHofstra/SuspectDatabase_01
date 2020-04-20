#include <iostream>
#include <Windows.h>

#include "Database.h"

void Setup(Database* aDatabase)
{
	//Define All Courtcases
	Courtcase* case01 = new Courtcase("Vanity Bank Heist", false);
	Courtcase* case02 = new Courtcase("Bill 'O Daryll's Murder", true);
	Courtcase* case03 = new Courtcase("Sall's Money Laundering", true);
	Courtcase* case04 = new Courtcase("The Great St. Carlos Deal", true);

	//Define All Suspects,
	//Case 1
	case01->AddSuspect(new Suspect("Maine, Herman W.", 0));
	case01->AddSuspect(new Suspect("Jackson, Derek P.", 0));
	case01->AddSuspect(new Suspect("Ahzahni, Mehmet", 0));
	case01->AddSuspect(new Suspect("Cortani, Hernandez", 0));
	case01->AddSuspect(new Suspect("McKenser, Pete D.", 0));

	//Case 2
	case02->AddSuspect(new Suspect("Freston, Harley", 0));
	case02->AddSuspect(new Suspect("Gouty, Jeffrey H.", 0));

	//Case 3
	case03->AddSuspect(new Suspect("Bercetti, Sallone", 0));
	case03->AddSuspect(new Suspect("Bercetti, Toni P.", 0));
	case03->AddSuspect(new Suspect("Bercetti, Forman", 0));
	case03->AddSuspect(new Suspect("Jackson, William", 0));
	case03->AddSuspect(new Suspect("Decker, Dick P.", 0));

	//Case 4
	case04->AddSuspect(new Suspect("Mentoso, Juan", 0));
	case04->AddSuspect(new Suspect("Geffory, Richard S.", 0));
	case04->AddSuspect(new Suspect("Heston, Jamal", 0));
	case04->AddSuspect(new Suspect("Forquez-Santo, Lionel", 0));
	case04->AddSuspect(new Suspect("Perdes, Antonio G.", 0));
	case04->AddSuspect(new Suspect("Cortez, Marcus", 0));

	//Define All Attorneys,
	//Case 1
	case01->AddAttorney(new Attorney("Markus, Lana", 0));

	//Case 2
	case02->AddAttorney(new Attorney("Beshop, John R.", 0));

	//Case 3
	case03->AddAttorney(new Attorney("Barreaux, Alexander", 0));
	case03->AddAttorney(new Attorney("Markus, Winston L.", 0));

	//Case 4
	case04->AddAttorney(new Attorney("Henry, Cletus", 0));
	case04->AddAttorney(new Attorney("Venturio, Jill T.", 0));

	//Define All Prosecutors,
	//Case 1
	case01->AddProsecutor(new Prosecutor("Hando, Taka", 0));

	//Case 2
	case02->AddProsecutor(new Prosecutor("Venturio, Jill T.", 0));

	//Case 3
	case03->AddProsecutor(new Prosecutor("Torrez, Pedro C.", 0));

	//Case 4
	case04->AddProsecutor(new Prosecutor("Beshop, John R.", 0));

	//Define All Judges,
	//Case 1
	case01->AddJudge(new Judge("Galley, Jefferson", 0));
	case01->AddJudge(new Judge("Welkinson, James F.", 0));
	case01->AddJudge(new Judge("Porter, Dominic", 0));

	//Case 2
	case02->AddJudge(new Judge("Frederick, Dick R.", 0));
	case02->AddJudge(new Judge("Long, Han", 0));
	case02->AddJudge(new Judge("Hales, Courtney", 0));

	//Case 3
	case03->AddJudge(new Judge("Hempbrinton, Louise K.", 0));
	case03->AddJudge(new Judge("Raenes, Jack B.", 0));
	case03->AddJudge(new Judge("Pesto, Ferdinand", 0));

	//Case 4
	case04->AddJudge(new Judge("List, Ernest N.", 0));
	case04->AddJudge(new Judge("Valken, Deidra", 0));
	case04->AddJudge(new Judge("Dover, Ben", 0));

	//Add Courtcases to Database
	aDatabase->AddCourtcase(case01);
	aDatabase->AddCourtcase(case02);
	aDatabase->AddCourtcase(case03);
	aDatabase->AddCourtcase(case04);
}

int main()
{
	//Set Text Color to Green
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 12);

	//Define Database
	Database* database = new Database();
	Setup(database);

	while (true)
	{
		//Type 'quit' to Quit
		database->SetInputKeyWord(&handle);
	}
}
