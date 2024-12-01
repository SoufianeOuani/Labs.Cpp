#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumbers(string Message) 
{ //This function is to read positive numbers only.
	int Number = 0;

	do
	{

		cout << Message << endl; //The message we'll write when we call the function.
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
	//This function is to count digit repetitions.
	int Remainder = 0, FreCounter = 0;

	while (Number > 0) 
	{
		Remainder = Number % 10; //in the first time the remainder will equal the last digit of the number.

		Number = Number / 10; 
		/*in every loop round the number will be shorten and shorten for example :
		First round : 1223222
		Second round: 122322
		Third round : 12232
		Fourth round: 1223
		Fifth round : 122
		Fifth round : 12
		Sixth round : 1

		We can use the floor to do that but the number is 'int' so the comma will be removed automatically.
		*/

		if (DigitToCheck == Remainder) //if the entered digit == Remainder the increase the FreCount by 1.
		{
			FreCounter+=1;
		}
	}
	return FreCounter; //return FreCount(The number of repeats).
}

int main() 
{
	int Number = ReadPositiveNumbers("Please enter the main number: ");/*We defined this Variable 'Number' to Read the main number,
	and we did that by make it equal the 'ReadOsitveNumbers' function*/

	short DigitToCheck = ReadPositiveNumbers("Please enter a digit to check: ");//We did the same with 'DigitToCheck' Variable by make it equal to 'ReadPositiveNumbers' function.

	cout << "\nDigit " << DigitToCheck << " frequency is "<< CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n"; //And finally this line is for print all the previous things.

	return 0;
}