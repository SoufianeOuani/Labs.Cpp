#include <iostream>
#include <string>
using namespace std;

int RandomNumberGenerator(int From, int To) 
{
	//This function is to generate random numbers.
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLength)
{
	//This function is to fill the array with random numbers.
	cout << "Enter number of elements: " << endl;
	cin >> ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumberGenerator(1, 100); 
	}
	cout << endl;

}

void PrintArrElements(int Arr[100], int ArrLength) 
{
	//This functiion is to print array elements.
	for (int i = 0; i < ArrLength ; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	//Seeds the random number generator in C++, called only once.
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength;

	FillArrayWithRandomNumbers(Arr, ArrLength);

	cout << "Array elements: ";
	PrintArrElements(Arr, ArrLength);

	return 0;

}