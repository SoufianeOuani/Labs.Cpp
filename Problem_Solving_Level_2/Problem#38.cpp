#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumbersGenerator(int From, int To)
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
	//This function is to fill the array with random numbers.

	cout << "How many elements: ";
	cin >> ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumbersGenerator(1, 100);
	}
	cout << endl;
}

void PrintArrayelements(int Arr[100], int ArrLength)
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

void CopyOddNumbers(int ArrSource[100], int ArrDestination[100], int ArrLength, int& ArrdestinationLength)
{
	//This function is to copy Odd numbers from ArrSource to ArrDestination.

	for (int i = 0; i < ArrLength; i++)
	{
		if (ArrSource[i] % 2 != 0)
		{
			AddArrayElements(ArrSource[i], ArrDestination, ArrdestinationLength); //If the number from arrSource is Odd, copy it to the ArrDestination.
		}
	}
	cout << endl;
}

int main()
{
	//Seeds the random number generator in C++, called only once.
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength = 0;

	FillArrayWithRandomNumbers(Arr, ArrLength);

	int Arr2[100], Arr2Length = 0;
	CopyOddNumbers(Arr, Arr2, ArrLength, Arr2Length);

	cout << "Array 1 elements: ";
	PrintArrayelements(Arr, ArrLength);

	cout << "\nOdd numbers in the Array: ";
	PrintArrayelements(Arr2, Arr2Length);

	return 0;
}