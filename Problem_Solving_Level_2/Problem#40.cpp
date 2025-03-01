#include <iostream>
using namespace std; 

void FillArray(int Arr[100], int& ArrLength) 
{
	cout << "Enter the number of elements: ";
	cin >> ArrLength;

	cout << "Array elements: " << endl;

	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Element[" << i + 1 << "]: ";
		cin >> Arr[i];
	}
	cout << endl;
}

void PrintArrayElements(int Arr[100], int ArrLength) 
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

short FindNumbersPositionInArray(int Number, int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] == Number)
		{
			return i;
		}
	}
	return -1;
}

bool IsNumbersFound(int Number, int Arr[100], int ArrLength )
{
	return FindNumbersPositionInArray(Number, Arr, ArrLength) != -1;
}

void AddArrayElements(int Number, int Arr[100], int& ArrLength) 
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}

void CopyDistinctNumbers(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (!IsNumbersFound(Arr[i], Arr2, Arr2Length))
		{
			AddArrayElements(Arr[i], Arr2, Arr2Length); 
		}
	}
}

int main()
{
	int Arr[100], ArrLength = 0, Number, Arr2[100], Arr2Length = 0;

	FillArray(Arr, ArrLength);

	cout << "Array 1 elements: ";
	PrintArrayElements(Arr, ArrLength);
	
	CopyDistinctNumbers(Arr, Arr2, ArrLength, Arr2Length);
	
	cout << "Array 2 elements: ";
	PrintArrayElements(Arr2, Arr2Length); 


	return 0;
}