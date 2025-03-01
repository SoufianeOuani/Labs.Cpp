#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber() 
{
    //This function is to read a number.

    int Number = 0;

    cout << "Enter the number you searching for: " ;
    cin >> Number;

    return Number;
}

int RandomNumbersGenerator(int From, int To) 
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
        Arr[i] = RandomNumbersGenerator(1, 100);
    }
    cout << endl;
}

void PrintArrayElements(int Arr[100], int ArrLength) 
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
            return i; //To return the index.
        }
    }
    return -1; //if you reached here, that's mean the number is not found.
}

bool IsNumberInArray(int Arr[100], int ArrLength, int NumberToCheck)
{
    /*This function is to return true if the number is found in the array
    otherwise will return false.
    */
    return FindNumberPositionInArray(Arr, ArrLength, NumberToCheck) != -1;
}

int main()
{
    //Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "Array Elements: ";
    PrintArrayElements(Arr, ArrLength);
    cout << endl;

    int NumberToCheck = ReadNumber();

    cout << "\nThe number you looking for is: " << NumberToCheck << endl;

    if (!IsNumberInArray(Arr, ArrLength, NumberToCheck)) 
    {
        cout << "No, The number is not found :-(" << endl;
        system("color 4F"); //If the number is not found make the screen color Red.
    }
    else
    {
        cout << "Yes, The number is found :-)" << endl;
        system("color 2F"); //If the number is not found make the screen color Green.
    }
    return 0;
}