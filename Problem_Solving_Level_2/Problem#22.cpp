#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumbers(string Message) 
{
	//Thid function is to read positive numbers only.
	int Number = 0;

	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

void ReadArrayElements(int Arr[100], int &ArrLength) 
{
	//This function is to read array elements.

	do
	{
		//to read positive numbers only.

		cout << "Please enter number of elements : " << endl;
		cin >> ArrLength;

	} while (ArrLength<=0);

	cout << "\nEnter array elements : " << endl;

	for (int i = 0; i < ArrLength; i++)
	{
		//to read array elemnts.
		cout << "Element [" << i + 1 << "] : ";
		cin >> Arr[i];
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

int TimesRepeated(int Number, int Arr[100], int ArrLength)
{
	//This function is to calculate the repetitions of a number.

	int FreCounter = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (Number == Arr[i]) 
		{
			FreCounter++; 
		}
	}
	return FreCounter; 
}
int main() 
{

	int Arr[100], ArrLength, NumberToCheck;

	ReadArrayElements(Arr, ArrLength); 

	NumberToCheck = ReadPositiveNumbers("Please enter the number you want to check : "); //To read the 'NumberToCheck'.

	cout << "\nOriginal array: ";
	PrintArrayElements(Arr, ArrLength) ; 

	
	cout << "\nNumber " << NumberToCheck;
	cout << " is repeated ";
	cout << TimesRepeated(NumberToCheck, Arr, ArrLength) << " time(s)" << endl;

	return 0;
}