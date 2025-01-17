#include <iostream>
#include <string>
using namespace std;
//This porgram is about reverse the entered number.
int ReadPositiveNumbers(string Message) 
{//This Function is to read only the positive numbers.
	int Number = 0;
	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
 
	return Number;
}

void PrintDigits(int Number) 
{//This Function is to reverse the entered number.
	int Remainder = 0; 

	while (Number > 0) 
	{
		Remainder = Number % 10; 
		Number = Number / 10;
		
		cout << Remainder;
	}
}

int main() 
{
	PrintDigits(ReadPositiveNumbers("Please enter a positive number: "));
	return 0;
}
