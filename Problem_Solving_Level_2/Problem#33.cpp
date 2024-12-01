#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharacterType { SmallLetters = 1, CapitalLetter = 2, SpecialChar = 3, Digits = 4 };

int ReadPositiveNumbers(string Message) 
{
	//This function is to read positive numbers only.

	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumbersGenerator(int From, int To) 
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

char GetRandomCharacter(enCharacterType CharType) 
{
	//This function is to get random character using enum (SmallLetters, CapitalLetter, SpecialChar or Digits).

	switch (CharType)
	{
	case enCharacterType::SmallLetters:
		return char(RandomNumbersGenerator(97, 122));
		break;
	case enCharacterType::CapitalLetter:
		return char(RandomNumbersGenerator(65, 90));
		break;
	case enCharacterType::SpecialChar:
		return char(RandomNumbersGenerator(33, 47));
		break;
	case enCharacterType::Digits:
		return char(RandomNumbersGenerator(48, 57));
		break;
	}
}

string GenerateWord(enCharacterType CharType, short length) 
{
	//This function is to generate word using the previous function 'GetRandomCharacter', and we doing that by adding a random character to the word using a loop from 1 to length.

	string Word = "";

	for (int i = 1; i <= length; i++)
	{
		Word = Word + GetRandomCharacter(enCharacterType::CapitalLetter);
	}
	return Word;
}

string GenerateKey() 
{
	//This function is to generate key by adding the words that we generated before, using 'GenerateWord'.
	// 
	string Key = "";

	Key = GenerateWord(enCharacterType::CapitalLetter, 4) + "-"; 
	Key += GenerateWord(enCharacterType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharacterType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharacterType::CapitalLetter, 4) ;

	return Key;
}

void FillArrayWithKeys(string Arr[100], int ArrLength) 
{
	//This function is to fill the array with keys.

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = GenerateKey();
	}
}

void PrintArrayElements(string Arr[100], int ArrLength) 
{
	//This function is to print array elements.

	cout << "\nArray Elements: " << endl << endl;

	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Array[" << i << "] : ";
		cout << Arr[i] << endl;
	}
	cout << endl;
}

int main() 
{
	srand((unsigned)time(NULL));

	string Arr[100]; int ArrLength = 0;

	ArrLength = ReadPositiveNumbers("How many key do you want to generate: "); //To read array length.

	FillArrayWithKeys(Arr, ArrLength); //To fill the array.

	PrintArrayElements(Arr, ArrLength); //To print array elements.

	return 0;
}