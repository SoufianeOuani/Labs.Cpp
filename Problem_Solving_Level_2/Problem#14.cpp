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

void PrintInvertedLetters(int Number) 
{
	//This function is to print inverted numbers.
	/*
		we use two nested loops, the first loop is to print the letter,
		and the second loops is to print letter repetiotions.
	*/

	for (int i = 65 + Number - 1; i >= 65; i--)
		{

		for (int j = 1; j >= Number - (65 + Number - 1 - i); j++)
			
			/* "Number" is constant but the "i" will be decrease by 1, so the equation will give:
			for example the entered number is 3:
			first line: 3 - (65 + 3 - 1 - i) ==> 3 - (67 - (i = 67)) ==> 3 - 0 = 3 so C will be printed 3 times 
			second line: 3 - (65 + 3 - 1 - i) ==> 3 - (67 - (i = 66)) ==> 3 - 1 = 2 so B will be printed 2 times
			second line: 3 - (65 + 3 - 1 - i) ==> 3 - (67 - (i = 65)) ==> 3 - 2 = 1 so A will be printed 1 time
			*/

			{
				cout << char(i);
			}
			cout << endl; 
		}
}

int main() 
{
	int Number = ReadPositiveNumbers("Please enter a positive number: ");

	PrintInvertedLetters(Number);

	return 0;
}