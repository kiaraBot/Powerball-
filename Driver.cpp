// Alix Field		afield@cnm.edu		Field_P4


		//Prototypes
// WriteHeader();
// AskName();
// AskPlayerNum(UserWhite, &UserRed);
// GenerateGameNum(CompWhite, &CompRed);
// Sort(Num, Total);
// CheckResults(UserNum, UserRed, CompNum, CompRed);
// PrintNumbers(name, white, red);


#include "Functions.h"

int main()
{
	//Console Text and Background Color
	system("Color 73");

	//Variable Decleration
	int userWhite[5] = {};
	int compWhite[5] = {};
	int userRed, compRed;
	string userName, results;
	string answer;

	//C++ Programming Class Project Header
	cout << "\nAlix Field "
		<< "\nProgram 1: Powerbal Lottery Game "
		<< "\nProgram Objectives: C++ Programming I Review "
		<< "\n     *Arrays"
		<< "\n     *Passing Arrays "
		<< "\n     *Functions "
		<< "\n     *Rand Function "
		<< "\n     *Stringstream ";

	//Seeding Rand
	srand((unsigned)time(NULL));

	//Calling 1st Function
	WriteHeader();

	//Calling 2nd Function
	userName = AskName();

	//Do While Loop: Play Loop 
	do
	{
		//Call AskPlayerNum Function
		AskPlayerNum(userWhite, &userRed);

		//Call GenerateGameNum Function
		GenerateGameNum(compWhite, compRed);

		//Call Sort Function to Sort White Ball Arrays
		Sort(userWhite, 5);
		Sort(compWhite, 5);

		//Call CheckResult Function
		results = CheckResults(userWhite, userRed, compWhite, compRed);

		//Call Print Lottary Summary Function
		PrintNumbers(userName, userWhite, userRed);
		PrintNumbers("Computer", compWhite, compRed);

		//Ask user to play again
		cout << "\n\nWould you like to play again (y/n)? ";
		getline(cin, answer);
	} while (answer == "y");
	
	//User does not want to play again, saying goodbye
	cout << "\n\nThank You For Playing The Powerball Lottery Game !!! "
		<< "\n               !!! Good Bye !!!\n";

	return 0;
}