#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumbers(string Message) 
{//This Function is to read only positive numbers.
	int Number = 0;

	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int SumOfDigits(int Number) 
{//This function is to sum digits you entered.
	int Remainder = 0, Sum = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;

	}
	return Sum;
}
void PrintSumDigits(int Number) 
{//This function is to print sum of digits.
	cout << "\nSum of digits = " << SumOfDigits(Number) << endl;
}
int main() 
{
	PrintSumDigits(ReadPositiveNumbers("Please enter a positive number: "));
	return 0;
}