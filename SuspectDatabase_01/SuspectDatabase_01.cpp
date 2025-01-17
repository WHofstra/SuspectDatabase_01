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

	//Define All Offences
	Offence* robb = new Offence("Bank Robbery");
	Offence* assa = new Offence("Assault");
	Offence* aspo = new Offence("Assault on Police Officers");
	Offence* obst = new Offence("Obstruction of Justice");
	Offence* murd = new Offence("First Degree Murder");
	Offence* muco = new Offence("Complicity in First Degree Murder");
	Offence* laun = new Offence("Money Laundering");
	Offence* brib = new Offence("Bribery");
	Offence* drpo = new Offence("Illegal Drug Possession");
	Offence* drtr = new Offence("Drug Trafficking");

	//Define All Suspects,
	//Case 1
	case01->AddSuspect(new Suspect("Maine, Herman W.", 7647599));
	case01->AddSuspect(new Suspect("Jackson, Derek P.", 9489333));
	case01->AddSuspect(new Suspect("Ahzahni, Mehmet", 5835176));
	case01->AddSuspect(new Suspect("Cortani, Hernandez", 7538173));
	case01->AddSuspect(new Suspect("McKenser, Pete D.", 2472631));

	//Case 2
	case02->AddSuspect(new Suspect("Freston, Harley", 9714875));
	case02->AddSuspect(new Suspect("Gouty, Jeffrey H.", 8078468));

	//Case 3
	case03->AddSuspect(new Suspect("Bercetti, Sallone", 1984660));
	case03->AddSuspect(new Suspect("Bercetti, Toni P.", 2800258));
	case03->AddSuspect(new Suspect("Bercetti, Forman", 3803848));
	case03->AddSuspect(new Suspect("Jackson, William", 7759617));
	case03->AddSuspect(new Suspect("Decker, Dick P.", 7962851));

	//Case 4
	case04->AddSuspect(new Suspect("Mentoso, Juan", 5748869));
	case04->AddSuspect(new Suspect("Geffory, Richard S.", 8062865));
	case04->AddSuspect(new Suspect("Heston, Jamal", 1285000));
	case04->AddSuspect(new Suspect("Forquez-Santo, Lionel", 4350359));
	case04->AddSuspect(new Suspect("Perdes, Antonio G.", 3004993));
	case04->AddSuspect(new Suspect("Cortez, Marcus", 4524653));

	//Define All Attorneys,
	//Case 1
	case01->AddAttorney(new Attorney("Markus, Lana", 2574774));

	//Case 2
	case02->AddAttorney(new Attorney("Beshop, John R.", 3344567));

	//Case 3
	case03->AddAttorney(new Attorney("Barreaux, Alexander", 6436126));
	case03->AddAttorney(new Attorney("Markus, Winston L.", 1867053));

	//Case 4
	case04->AddAttorney(new Attorney("Henry, Cletus", 3115571));
	case04->AddAttorney(new Attorney("Venturio, Jill T.", 1172223));

	//Define All Prosecutors,
	//Case 1
	case01->AddProsecutor(new Prosecutor("Hando, Taka", 6332792));

	//Case 2
	case02->AddProsecutor(new Prosecutor("Venturio, Jill T.", 1172223));

	//Case 3
	case03->AddProsecutor(new Prosecutor("Torrez, Pedro C.", 7068246));

	//Case 4
	case04->AddProsecutor(new Prosecutor("Beshop, John R.", 3344567));

	//Define All Judges,
	//Case 1
	case01->AddJudge(new Judge("Galley, Jefferson", 9031471));
	case01->AddJudge(new Judge("Welkinson, James F.", 3611053));
	case01->AddJudge(new Judge("Porter, Dominic", 7606148));

	//Case 2
	case02->AddJudge(new Judge("Frederick, Dick R.", 6456366));
	case02->AddJudge(new Judge("Long, Han", 5152315));
	case02->AddJudge(new Judge("Hales, Courtney", 7338475));

	//Case 3
	case03->AddJudge(new Judge("Hempbrinton, Louise K.", 8922259));
	case03->AddJudge(new Judge("Raenes, Jack B.", 6576974));
	case03->AddJudge(new Judge("Pesto, Ferdinand", 6686801));

	//Case 4
	case04->AddJudge(new Judge("List, Ernest N.", 6980416));
	case04->AddJudge(new Judge("Valken, Deidra", 1059400));
	case04->AddJudge(new Judge("Dover, Ben", 2063910));

	//Assign Offences to Suspects,
	//Case 1
	for (int i = 0; i < 4; i++) {
		case01->AssignOffenceTo(i, robb);
		case01->AssignOffenceTo(i, obst);
		case01->AssignOffenceTo(i, assa);
		case01->AssignOffenceTo(i, aspo);
	}
	case01->AssignOffenceTo(4, robb);
	case01->AssignOffenceTo(4, obst);

	//Case 2
	case02->AssignOffenceTo(0, murd);
	case02->AssignOffenceTo(1, muco);

	//Case 3
	for (int i = 0; i < 5; i++) {
		case03->AssignOffenceTo(i, laun);
	}
	case03->AssignOffenceTo(0, brib);

	//Case 4
	for (int i = 0; i < 6; i++) {
		case04->AssignOffenceTo(i, drpo);
		case04->AssignOffenceTo(i, drtr);
	}

	//Assign Defense to Suspects,
	//Case 1
	for (int i = 0; i < 5; i++) {
		case01->AssignAttorneyTo(0, i);
	}

	//Case 2
	for (int i = 0; i < 2; i++) {
		case02->AssignAttorneyTo(0, i);
	}

	//Case 3
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			case03->AssignAttorneyTo(i, j);
		}
	}

	//Case 4
	case04->AssignAttorneyTo(0, 0);
	case04->AssignAttorneyTo(0, 3);
	case04->AssignAttorneyTo(0, 5);
	case04->AssignAttorneyTo(1, 1);
	case04->AssignAttorneyTo(1, 2);
	case04->AssignAttorneyTo(1, 4);

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
