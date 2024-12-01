#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumberGenerator(int From, int To) 
{
    //This function is to generate random numbers.
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &ArrLength) 
{
    //This function is to fill the array with random numbers.

    cout << "Enter the number of elements: " << endl;
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = RandomNumberGenerator(1, 100);
    }
    cout << endl;
}

void PrintArrayElements(int Arr[100], int ArrLength) 
{
    //This function is to [rint array elements.

    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int GetMinNumber(int Arr[100], int ArrLength) 
{
    //This function is to get the minimum number in the array.

    int Min = 0;
    Min = Arr[0];

    for (int i = 0; i < ArrLength; i++)
    {
        if ( Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}
int main()
{
    int Arr[100], ArrLength;

    srand((unsigned)time(NULL));

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "Array elements: ";
    PrintArrayElements(Arr, ArrLength);

    cout << "\nThe minimum number is: " << GetMinNumber(Arr, ArrLength) << endl;

    return 0;
}

