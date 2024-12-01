#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumbersGenerator(int From, int To)
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayFrom1ToN(int Arr[100], int& ArrLength)
{
	//This function is to fill the array from 1 to N.

	cout << "Enter the number of elements: " << endl;
	cin >> ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumbersGenerator(1,100);
	}
	cout << endl;
}

void CopyArrayInReverseOrder(int ArrSource[100], int ArrDestination[100], int ArrLength) 
{
	//This function is to reverse the original array and copy it in the second array.

	for (int i = 0; i < ArrLength ; i++)
	{
		ArrDestination[i] = ArrSource[ArrLength - 1 - i];
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

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;

	FillArrayFrom1ToN(Arr, ArrLength); //To fill the array.

	int Arr2[100];
	CopyArrayInReverseOrder(Arr, Arr2, ArrLength); //To copy the array.

	cout << "Array before reverse: ";
	PrintArrayElements(Arr, ArrLength); //To print array elements before reversing.

	cout << "\nArray after reverse: ";
	PrintArrayElements(Arr2, ArrLength); //To print array elements after reversing.

	return 0;
}
