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

int RandomNumberGenerator(int From, int To) 
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLength) 
{
	//This function is to fill the aray with random numbers.

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumberGenerator(1, 100);
	}
}

void SumOf2Arrays(int Arr[100], int Arr2[100], int ArrSum[100], int ArrLength)
{
	//This function is to sum 2 arrays.

	for (int i = 0; i < ArrLength; i++)
	{
		ArrSum[i] = Arr[i] + Arr2[i];
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

	int Arr[100], Arr2[100], ArrSum[100];

	int ArrLength = ReadPositiveNumbers("How many elements: "); //To read the array length.

	FillArrayWithRandomNumbers(Arr, ArrLength); //To fill the first array.

	FillArrayWithRandomNumbers(Arr2, ArrLength); //To fill the second array.

	SumOf2Arrays(Arr, Arr2, ArrSum, ArrLength); //To sum the two arrays.

	cout << "First Array Elements: ";
	PrintArrayElements(Arr, ArrLength); //To Print the first array elements.

	cout << "\nSecond Array Elements: ";
	PrintArrayElements(Arr2, ArrLength); //To Print the second array elements.

	cout << "\nSum Of Two Arrays Elements: ";
	PrintArrayElements(ArrSum, ArrLength); //To Print the Sum of two arrays elements.

	return 0;
}