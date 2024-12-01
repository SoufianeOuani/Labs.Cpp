#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) 
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

int ReverseNumber(int Number) 
{
	/*This function is to reverse the entered number
	then we'll print digits one by one in the next function.*/

	int Remainder = 0, Number2 = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10;
		Number = Number / 10; 
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

void PrintDigitsInOrder(int Number) 
{
	//In this function we can print digits one by one.
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}
int main() 
{
	PrintDigitsInOrder(ReverseNumber(ReadPositiveNumber("Please enter a positive number: ")));
	return 0;
}