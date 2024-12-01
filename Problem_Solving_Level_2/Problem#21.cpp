#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetters = 1, CapitalLetters = 2, SpecialCharacters = 3, Digits = 4 }; 

int RandomNumber(int From, int To) 
{
	//This function is to generate random numbers.
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

int ReadPositiveNumber(string Message) 
{
	//This funcion is to read positive numbers and greater than 0 only.
	int Number = 0;

	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

char GetRandomCharacter(enCharType CharType) 
{
	//This function to get a random character using enum ( SmallLetter / CapitalLetter / SpecialCharacter / Digit ).
	switch (CharType)
	{
	case enCharType::SmallLetters:
		return char(RandomNumber(97, 122));
		break;
	case enCharType::CapitalLetters:
		return char(RandomNumber(65, 90));
		break;
	case enCharType::SpecialCharacters:
		return char(RandomNumber(33, 47));
		break;
	case enCharType::Digits:
		return char(RandomNumber(48, 57));
		break;
	}
}

string GenerateWord(enCharType CharType, short length) 
{
	//This function is to generate words like "AGHS" then we'll use it to create a key.

	string Word = "";

	for (int i = 1; i <= length; i++)
	{
		Word += GetRandomCharacter(CharType); // Word = Word + a random character from 'GetRandomCharacter' function.
	}
	return Word;
}

string GetKeys() 
{
	//This function is to store the words in the variable key for example : HGHS-KJWQ-MAMX-KLOI.
	string Key = "";

	Key = GenerateWord(enCharType::SmallLetters, 4) + "-"; //The 'GenerateWord' function takes as parameter Character type (enum) and word length (How many letter in the word).
	Key += GenerateWord(enCharType::CapitalLetters, 4) + "-";
	Key += GenerateWord(enCharType::SpecialCharacters, 4) + "-";
	Key += GenerateWord(enCharType::Digits, 4) ;

	return Key;
}

void GenerateKeys(short NumberOfKeys) 
{
	//This function is to print the generated keys and we gave it as parameter 'NumberOfKeys'.

	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key[" << i << "] : ";
		cout << GetKeys() << endl;
	}
}

int main() 
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate: ")); //The function 'ReadPositiveNumbers' = 'NumberOfKeys'.

	return 0;
}