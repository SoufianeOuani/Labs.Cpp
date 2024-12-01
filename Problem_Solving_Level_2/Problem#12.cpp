#include <iostream>
#include <string>
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

void PrintInvertedNumberPattern(int Number) 
{

	/*in this function we used two nested for loops.
	the first loop for the rows
	and the second is for columns.
	*/

	for (int i = Number; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << i;
		}
		cout << endl; 
	}
}
int main() 
{
	int Number = ReadPositiveNumbers("Please enter a positive number: ");

	PrintInvertedNumberPattern(Number);

	return 0;
}