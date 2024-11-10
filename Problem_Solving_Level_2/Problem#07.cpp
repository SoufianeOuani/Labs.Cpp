#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumbers(string Message) 
{//This function is to read only positive numbers.
	int Number = 0;

	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int ReverseNumber(int Number) 
{//This function is to reverse the entered number.

	/*NOTE!! : you may think about the problem 6 is the same with the problem 7 but no,
	because in the 6th problem we just print the number reversed but int the 7th problem
	we made the entire number reversed and we can use it in operations (+, - , / , *).*/

	int Remainder = 0, Number2=0;

	while (Number > 0) 
	{
	
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;//we used this variable "Number2" to get the reversed number.
		/*
			Number2 = Number2 * 10 + Remainder
			Number2 = 0 * 10 + Remainder(4) ==> Number2 = 4
			Number2 = 4 * 10 + Remainder(3) ==> Number2 = 43
			Number2 = 43 * 10 + Remainder(2) ==> Number2 = 432
			Number2 = 432 * 10 + Remainder(1) ==> Number2 = 4321
		*/

	}

	return Number2;
	
}

int main() 
{
	cout<<"\nReverse is: "<< ReverseNumber(ReadPositiveNumbers("Please enter a positive number: "));
	return 0;
}