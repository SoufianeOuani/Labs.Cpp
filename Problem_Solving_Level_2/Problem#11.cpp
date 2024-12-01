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

int ReverseNumber(int Number) 
{
	//This function is to reverse the entered number and to check if the entered number == reversed number.
	int Remainder = 0, Number2 = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = (Number2 * 10) + Remainder;
	}
	
	return Number2;
}

bool IsPalindrome(int Number)
{
	//if the entered number == reversed number then is palindome else isn't palindrome.
	return Number == ReverseNumber(Number);
}

int main() 
{
	int Number = ReadPositiveNumbers("Please enter a positive number: ");

	if (IsPalindrome(Number))
	{
		cout << Number << " is Plaindrome" << endl;
	}
	else
	{
		cout << Number << " is not Plaindrome" << endl;
	}
	return 0;
}