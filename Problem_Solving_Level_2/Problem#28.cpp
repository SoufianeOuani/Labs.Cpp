#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumberGenerator(int From, int To)
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From - 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
	//This function is to fill the array with random numbers.

	cout << "Please enter the number of elements: " << endl;
	cin >> ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumberGenerator(1, 100);
	}
}

void PrintArrElements(int Arr[100], int ArrLength)
{
	//This function is to print array elements.

	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void CopyArrayElements(int ArrSource[100], int ArrDestination[100], int ArrLength)
{
	//This function is to copy the original array elements to a new array.

	for (int i = 0; i < ArrLength; i++)
	{
		ArrDestination[i] = ArrSource[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], ArrLength;

	FillArrayWithRandomNumbers(Arr, ArrLength);

	CopyArrayElements(Arr, Arr2, ArrLength);

	cout << "\nArray 1 elements before copying: ";
	PrintArrElements(Arr, ArrLength);

	cout << "\nArray 1 elements after copying: ";
	PrintArrElements(Arr2, ArrLength);

	return 0;
}