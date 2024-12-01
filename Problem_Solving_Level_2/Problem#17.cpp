#include <iostream>
#include <string>
using namespace std;

string ReadPassword() 
{
	//This function is to read password.

	string Password;

	cout << "Please enter a 3-letters password (all capital): " << endl;
	cin >> Password;

	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	string Word = ""; //We define this variable type string, and make it empty to store password in it.
	int Counter = 0; //We define this variable integer type and we give it the value 0 to use it in Trials counting and when we'll find the password.
	cout << endl;
	
	for (int i = 65; i <= 90; i++) //and this loops is to print first letter column.
	{
		for (int j = 65; j <= 90; j++) //and this loop is to print second letter column. 
		{
			for (int k = 65; k <= 90; k++) //and this loop is to print third letter column.
			{
				Counter++;

				Word += char(i); //The first letter stored in "Word" variable ==> A
				Word += char(j); //The second letter stored in "Word" variable ==> AA
				Word += char(k); //The third letter stored in "Word" variable ==> AAA
				
				cout << "Trial[" << Counter  << "] :" << Word << endl; //==> Trial[1] : AAA

				if (OriginalPassword == Word)  
				{ 
					//If the OriginalPassword == Word the following block of code will be executed:

					cout << "\nThe password is: " << Word << endl; 
					cout << "Found after " << Counter  << " Trial(s)." << endl;

					return true; //And if OriginalPassword == Word we'll return true to exit the loop.
				}
				Word = "";
			}
		}
	}
	return false; //If OriginalPassword != Word we'll return false to exit the loop.
}
int main()
{
	GuessPassword(ReadPassword());
				
	return 0;
}

