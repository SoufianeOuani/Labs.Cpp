#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumbers(string Message) 
{ //This function is to reda positive numbers only.
	int Number = 0;

	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int CountDigitFrequency(int DigitToCheck, int Number) 
{//This function is to count digit repetitions.
	int Remainder = 0, FreCounter = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck==Remainder)
		{
			FreCounter++;
		}
	}

	return FreCounter;
}

void PrintAllDigitsFrequency(int Number) 
{//This function is to print digits repetitions.
	cout << endl;

	for (int i = 0; i < 20; i++)
	{
		int DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);

		/*We define this variable 'DigitFrequency', and make it equals the 'CountDigitFrequency' and give it (i, Number) as parameters,
		to consider 'i' as 'DigitToCheck' so we can  check if (i == Remainder) <==> (DigitToCheck==Remainder) if yes 'FreCounter' will increase by 1, else it will not increase.
		Then the 'FreCounter' will be returned in The 'CountDigitFrequency' and we know 'DigitFrequency' = 'CountDigitFrequency'.*/

		if (DigitFrequency > 0 )
		{
			cout << "Digit " << i << " frequency is: " << DigitFrequency << " time(s)." << endl;
		}
	}
}
int main() 
{
	int Number = ReadPositiveNumbers("Please enter a positive number: ");

	PrintAllDigitsFrequency(Number);

	return 0;
}