#include <iostream>
#include "arrmanip.h"
using namespace std;

#define NUMBER_OF_ELEMENTS 9
const int LowerBound = 10;
const int UpperBound = 99;

int main()
{
    int a[NUMBER_OF_ELEMENTS];
    GenerateIntegers(a, NUMBER_OF_ELEMENTS, LowerBound, UpperBound);
    cout << "Array generate at random as follows:\n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    ReverseIntegers(a, NUMBER_OF_ELEMENTS);
    cout << "After all elements of the array reversed:\n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    return 0;
}
