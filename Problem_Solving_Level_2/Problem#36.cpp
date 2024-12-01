#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber() 
{
	int Number;

	cout << "\nPlease enter a number: ";
	cin >> Number;

	return Number;
}

void AddArrayelements(int Arr[100], int& ArrLength,int Number) 
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}

void InputUserNumbersInArray(int Arr[100], int& ArrLength) 
{
	bool AddMore = true;

	do
	{
		AddArrayelements(Arr, ArrLength, ReadNumber());

		cout << "\nDo you want to add more number? [0]:No,[1]:Yes? ";
		cin >> AddMore;

	} while (AddMore);
}

void PrintArrayElemnts(int Arr[100], int ArrLength) 
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

int main() 
{
	int Arr[100], ArrLength = 0;

	InputUserNumbersInArray(Arr, ArrLength);

	cout << "\nArray length: " << ArrLength << endl;
	cout << "Array elements: ";
	PrintArrayElemnts(Arr, ArrLength);

	return 0;
}