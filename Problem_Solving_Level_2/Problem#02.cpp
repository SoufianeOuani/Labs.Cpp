#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrime_NotPrime { Prime = 1, NotPrime = 2 }; //We used enums to choose between two options Prime/NotPrime.

int ReadPositiveNumbers(string Message)
{ //This function is to read only the positive numbers.
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	}while(Number < 0);
	return Number;
}
 
enPrime_NotPrime CheckNumberType(int Number)
{ //This Function is from the enum type and it's for checking number type and return it.
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return  enPrime_NotPrime::NotPrime;

	}

	return enPrime_NotPrime::Prime;
}

void PrintPrimeNumbersInRange(int Number)
{    /*This Function is for print all the prime numbers in range
       for examle if we entered '10' the program will print : (1, 2, 3, 5, 7) */
	
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
