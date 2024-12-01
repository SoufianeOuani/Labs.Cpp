#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumbers(string Message) 
{
	//This function is to read positive numbers only.

	int Number = 0;
	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

void SwapNumbers(int& A, int& B) 
{
	//This function is to swap two numbers.

	int Temp = A;
	A = B;
	B = Temp;
}

int RandomNumbersGenerator(int From, int To) 
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayFrom1ToN(int Arr[100], int& ArrLength) 
{
	//This function is to fill the array from 1 to N.

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = i + 1;
	}
	cout << endl;
}

void ShuffleArray(int Arr[100], int ArrLength) 
{
	//This function is to shuffle array elements.

	for (int i = 0; i < ArrLength; i++)
	{
		SwapNumbers(Arr[RandomNumbersGenerator(1, ArrLength) - 1], Arr[RandomNumbersGenerator(1, ArrLength) - 1]);
	}
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
	int Arr[100];

	int ArrLength = ReadPositiveNumbers("Enter how many element: "); //To read array length.

	FillArrayFrom1ToN(Arr, ArrLength); //To fill the array.

	cout << "Array before shuffling: ";
	PrintArrayElements(Arr, ArrLength); //To print array elements before shuffling.

	ShuffleArray(Arr, ArrLength); //To shuffle the array.

	cout << "Array after shuffling: ";
	PrintArrayElements(Arr, ArrLength); //To print array elements after shuffling.

	return 0;
}