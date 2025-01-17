#include <iostream>
#include <string>
using namespace std;

double ReadPositiveNumbers(string Message) 
{//This Function is to read positive numbers.
	int Number = 0;

	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number; 
}

bool isPerfectNumber(int Number) 
{//This Function is to check if the number is perfect or not.
	int Sum = 0;

	for (int Counter = 1; Counter < Number; Counter++)
	{
		if (Number % Counter == 0)
		{
			Sum += Counter;
		}
	}

	return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number) 
{//This Function is to print number type from 1 to N.
	cout << "The perfect numbers in the range of " << Number << " are: " << endl;

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (isPerfectNumber(Counter))
		{
			cout << Counter << endl;
		}
	}

}

int main() 
{
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumbers("Please enter a positive number: "));
	return 0;
}
