#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrime_NotPrime { Prime = 1, NotPrime = 2 };

enPrime_NotPrime CheckNumbertype(int Number) 
{
	//This function is to find the prime numbers.

	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrime_NotPrime::NotPrime;
	}
	return  enPrime_NotPrime::Prime;
}

int RandomNumberGenerator(int From, int To) 
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength) 
{
	//This function is to fill the array with random numbers.

	cout << "Enter the number of elements: " << endl;
	cin >> ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumberGenerator(1, 100);
	}
	cout << endl;
}

void CopyOnlyPrimeNumbers(int ArrSource[100], int ArrDestination[100], int ArrLength, int& Arr2Length) 
{
	//This function is to Copy only prime numbers to the second array.

	int Counter = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumbertype(ArrSource[i]) == enPrime_NotPrime::Prime) 
		{
			ArrDestination[Counter] = ArrSource[i];
			Counter++;
		}
	}
	Arr2Length = Counter;
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

int main() 
{
	int Arr[100], ArrLength;

	srand((unsigned)time(NULL));

	int Arr2[100], Arr2Length = 0;

	FillArrayWithRandomNumbers(Arr, ArrLength);

	CopyOnlyPrimeNumbers(Arr, Arr2, ArrLength, Arr2Length);

	cout << "Array elements: ";
	PrintArrayElements(Arr, ArrLength); 

	cout << "Prime numbers in the array: ";
	PrintArrayElements(Arr2, Arr2Length); 

	return 0;
}