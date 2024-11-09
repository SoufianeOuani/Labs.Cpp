#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int ReadPositiveNumbers(string Message)
{ //This Function is to read only positive numbers.
	int Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

bool isPerfectNumber(int Number)
{// This function is to check if the number is perfect or not. 
	int Sum = 0;

	for (int Counter = 1; Counter < Number; Counter++)
	{

		if (Number % Counter == 0)
		{
			Sum += Counter;
		}

	}

	return  Number == Sum;
}

void PrintPerfectNumbersInRange(int Number)
{//This Function is to print the number type Perfect/Not Perfect.
		if (isPerfectNumber(Number))
		{
			cout << Number << " is perfect Number" << endl;
		}
		else
		{
			cout << Number << " is not perfect Number" << endl;
		}
}

int main()
{
	PrintPerfectNumbersInRange(ReadPositiveNumbers("Plese enter a positive number: "));
	return 0;
}