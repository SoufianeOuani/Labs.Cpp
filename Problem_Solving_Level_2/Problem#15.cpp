#include <iostream>
#include <string>
using namespace std;

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

void PrintLetterPattern(int Number) 
{
	//This function is to print letter pattern.

	for (int i = 65; i <= 65 + Number - 1; i++) //The first loops is to print rows(letters).
	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++) //The second loop is to print columns (letters repetitions).
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main() 
{
	PrintLetterPattern(ReadPositiveNumbers("Please enter a positive number: "));
	return 0;
}