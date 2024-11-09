#include <iostream>
using namespace std;

void PrintTableHeader()
{ //This Function is for printing table header.
	cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n___________________________________________________________________________________\n";
}
string ColumSperator(int i)
{ //This function is to organize the first column boundaries.
	if (i < 10)
		return "  |";
	else
		return " |";
}
void PrintMultiplicationTable()
{ //And finally this Function to print the entire table.
	PrintTableHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumSperator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{
	PrintMultiplicationTable();
}
