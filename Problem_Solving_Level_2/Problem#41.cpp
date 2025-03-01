#include <iostream>  
using namespace std; 

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;  // Set the number of elements in the array to 6.

    // Manually assign values to each element in the array.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

    //We can also do that through a for loop.
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  
}

bool IsPalindromeArray(int arr[100], int Length)
{

    for (int i = 0; i < Length; i++)
    {
        
        if (arr[i] != arr[Length - i - 1])
        {
            return false;
        }
    }

    
    return true;
}

int main()
{
    int arr[100];  
    int Length = 0;

   
    FillArray(arr, Length);

    cout << "\nArray Elements:\n";
    PrintArray(arr, Length);

    if (IsPalindromeArray(arr, Length))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";

    return 0;  
}