#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To) 
{
    //This function is to generate a random number.

    int RandNum = rand() % (To - From + 1) ;
    return RandNum;
}
int main()
{
    srand((unsigned)time(NULL));
    //Seeds the random number generator in C++, called only once.
    
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;

    return 0;
}
