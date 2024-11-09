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

void PrintPrimeNumbersInRange(int Number)
{
	for (int Counter = 1; Counter <= Number; Counter++)
	{

	if (CheckNumberType(Counter) == enPrime_NotPrime::Prime)
	{
		cout << Counter << endl;
	}
	}
}

int main()
{
	PrintPrimeNumbersInRange(ReadPositiveNumbers("Plese enter a positive number: "));
	return 0;
}
