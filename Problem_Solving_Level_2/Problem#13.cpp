#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) 
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

void PrintNumberPattern(int Number) 
{

	/*in this function we used two nested for loops.
	the first loop for the rows
	and the second is for columns.
	*/

	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main() 
{
	int Number = ReadPositiveNumber("Please enter a positive number: ");
	PrintNumberPattern(Number);
	return 0;
}