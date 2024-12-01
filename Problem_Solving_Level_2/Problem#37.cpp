#include <iostream>
#include <cstdlib>
using namespace std;

enum enOdd_Even { Odd = 1, Even = 2 };

enOdd_Even  CheckNumberType(int Number) 
{
	//This function is to check if the number Odd/Even.

	if (Number%2==0)
	{
		return enOdd_Even::Even;
	}
	return enOdd_Even::Odd;
}

int RandomNumbersGenerator(int From, int To) 
{
	//This function is to generate random numbers.

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLength) 
{
	//This function is to fill the array with random numbers.

	cout << "How many elements: ";
	cin >> ArrLength;

	for (int  i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumbersGenerator(1, 100);
	}
	cout << endl;
}

void CopyOddNumbers(int ArrSource[100], int ArrDestinatio[100], int ArrLength, int& Arr2Length) 
{
	//This function is to copy Odd numbers from ArrSource to ArrDestination.

	int Counter = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumberType(ArrSource[i]) == enOdd_Even::Odd)
		{
			ArrDestinatio[Counter] = ArrSource[i]; //If the number from arrSource is Odd, copy it to the ArrDestination
			Counter++;
		}
	}
	cout << endl;
	Arr2Length = Counter;
}

void PrintArrayelements(int Arr[100], int ArrLength) 
{
	//This function is to print array elements.

	for (int  i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int main() 
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;

	FillArrayWithRandomNumbers(Arr, ArrLength);

	int Arr2[100], Arr2Length;
	CopyOddNumbers(Arr, Arr2, ArrLength, Arr2Length); 

	cout << "Array 1 elements: ";
	PrintArrayelements(Arr, ArrLength);
	
	cout << "\nOdd numbers in the Array: ";
	PrintArrayelements(Arr2, Arr2Length);

	return 0;
}