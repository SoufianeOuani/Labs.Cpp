#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrime_NotPrime
{
	Prime = 1, NotPrime = 2
};

enPrime_NotPrime CheckPrime(int Number) 
{
	//This function is to check if the number prime or not.

	int M = round(Number / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Number % 2 == 0) 
			return enPrime_NotPrime::NotPrime;
	}
	return enPrime_NotPrime::Prime;
}

int RandomNumbersGenerator(int From, int To) 
{
	//This function is to generate random numbers.

	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength) 
{
	//This function is to fill the array with random numbers.

	cout << "How many elements ?:";
	cin >> ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumbersGenerator(1, 100);
	}
	cout << endl;
}

void PrintArrayElements(int Arr[100], int ArrLength) 
{
	//This function is to print array elements.

	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void AddArrayElements(int Number, int Arr[100], int& ArrLength) 
{
	//This function is to add array elements.

	ArrLength++;
	Arr[ArrLength - 1] = Number;
}

void CopyPrimeNumbers(int ArrSource[100], int ArrDestination[100], int ArrLength, int& ArrDestinationlength) 
{
	//This function is to copy prime numbers to the second array.

	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckPrime(ArrSource[i])==enPrime_NotPrime::Prime)
		{
			AddArrayElements(ArrSource[i], ArrDestination, ArrDestinationlength);
		}
	}
}

int main() 
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength = 0, Arr2Length = 0;
	int Arr2[100];

	FillArrayWithRandomNumbers(Arr, ArrLength);

	CopyPrimeNumbers(Arr, Arr2, ArrLength, Arr2Length);

	cout << "Array 1 :";
	PrintArrayElements(Arr, ArrLength);

	cout << "Array 2 :";
	PrintArrayElements(Arr2, Arr2Length);

	return 0;
}