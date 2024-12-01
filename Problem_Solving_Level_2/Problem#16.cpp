#include <iostream>
#include <string>
using namespace std;


void PrintLettersFromAAAtoZZZ() 
{
	/*This function is to print letter from AAA to ZZZ.
	
	The concept of this loop is the letters will printed as follow:
	AAA
	 .
	 .
	 .
	ZZZ
	*/
	string Word = "";

	for (int i = 65; i <= 90; i++) //The first loop is to print the first letter.
	{
		for (int j = 65; j <= 90; j++) //The second loop is to print the second letter.
		{
			for (int k = 65; k <= 90; k++) //The third loop is to print the third letter.
			{
				Word += char(i);
				Word += char(j);
				Word += char(k);

				cout << Word << endl; 

				Word = "";
			}
		}
		cout << "--------------------" << endl;
	}
}
int main()
{
	PrintLettersFromAAAtoZZZ();
	return 0;
}
