#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumbers(string Message) 
{
    //This function is to read a number.
    int Number = 0;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

int RandomNumberGenerator(int From, int To) 
{
    //This function is to generate random numbers.

    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLength) 
{
    //This function is to fill array with random numbers.

    cout << "How many elements ?" << endl;
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = RandomNumberGenerator(1, 100);
    }
    cout << endl;
}

void PrintArrayelements(int Arr[100], int ArrLength) 
{
    //This function is to print array elements.

    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

short FindNumberPositionInArray(int Arr[100], int ArrLength, int NumberToCheck) 
{
    /*This function is to search for a number in array
    and return its index, or return -1 if it does not exists.*/

    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] == NumberToCheck) 
        {
            return i;  //To return the index.
        }
    }
    return -1; //if you reached here, that's mean the number is not found.
}

int main()
{
    //Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "Array 1 elements: ";
    PrintArrayelements(Arr, ArrLength);
    cout << endl;

    int NumberToCheck = ReadPositiveNumbers("Please enter a number to search for ? ");
    
    cout << "\nNumber you Are Looking for is: " << NumberToCheck << endl;

    short NumberPosition = FindNumberPositionInArray(Arr, ArrLength, NumberToCheck);

    if (NumberPosition== - 1)
    {
        cout << "The number is not found :-(" << endl;
    }
    else
    {
        cout << "\nThe Number Found At Positin: ";
        cout<< NumberPosition << endl;

        cout << "\nThe Number Found Its Order: ";
        cout << NumberPosition + 1 << endl;
    }

    return 0;
}
