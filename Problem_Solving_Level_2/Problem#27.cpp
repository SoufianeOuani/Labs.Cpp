#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumberGenerator(int From, int To)
{
    //This function is to generate random numbers.

    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
    //This function is to fill the array with random numbers.

    cout << "Enter the number of elements: " << endl;
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = RandomNumberGenerator(1, 100);
    }
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
    //This function is to Print array elements.

    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int SumArrElements(int Arr[100], int ArrLength)
{
    //This function is to sum array elements.
    int Sum = 0;

    for (int i = 0; i < ArrLength; i++)
    {
        Sum += Arr[i];
    }
    return Sum;
}

float AverageArrElements(int Arr[100], int ArrLength) 
{
    //This function is to calculate array average.
    return (float)SumArrElements(Arr, ArrLength) / ArrLength;
}

int main()
{
    int Arr[100], ArrLength;

    srand((unsigned)time(NULL));

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "\nArray elements: ";
    PrintArrayElements(Arr, ArrLength);

    cout << "\nSum of all numbers is: " << SumArrElements(Arr, ArrLength) << endl;


    cout << "\nAverage of all numbers is: " << AverageArrElements(Arr, ArrLength) << endl;

    return 0;
}

