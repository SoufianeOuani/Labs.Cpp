#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 }; // We create this enum because we'll need it in the function when we'll choose the character type.

int RandomNumber(int From, int To) 
{
	//Thus function is to generate a random number.

	int RanNumber = rand() % (To - From + 1) + From;

	return RanNumber;
}

char GetRandomCharacter(enCharType CharType) 
{
	//This function is to get random character using enums.
	switch (CharType)
	{
	case enCharType::SmallLetter: 
		return char(RandomNumber(97, 122));
		break;
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case enCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
		break;
	}
}

int main() 
{
	//Seeds the random number generator in C++, called only once.
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enCharType::SmallLetter) << endl; //This line to print the random small letter.
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl; //This line to print the random capital letter. 
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl; //This line to print the random special character.
	cout << GetRandomCharacter(enCharType::Digit) << endl; //This line to print the random digit.

	return 0;
}