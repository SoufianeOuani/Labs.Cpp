#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrime_NotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumbers(string Message) 
{
	int Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

enPrime_NotPrime CheckNumberType(int Number) 
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return  enPrime_NotPrime::NotPrime;

	}

	return enPrime_NotPrime::Prime;
}

void PrintNumberType(int Number) 
{
	if (CheckNumberType(Number)==enPrime_NotPrime::Prime)
	{
		cout << Number << " is \"prime\"" << endl;
	}
	else
	{
		cout << Number << " is \"not prime\"" << endl;
	}
}

int main() 
{
	PrintNumberType(ReadPositiveNumbers("Plese enter a positive number: "));
	return 0;
}