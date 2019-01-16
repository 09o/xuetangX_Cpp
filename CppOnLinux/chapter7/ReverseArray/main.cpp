#include <iostream>
#include "random.h"
#include "arrmanip.h"

using namespace std;

#define NUMBER_OF_ELEMENTS 8

int main()
{
    int a[NUMBER_OF_ELEMENTS];
    GenerateIntegers(a, NUMBER_OF_ELEMENTS);
    cout << "Array generated at random as follows:\n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    ReverseIntegers(a, NUMBER_OF_ELEMENTS);
    cout << "After all elements of the array reversed:\n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    return 0;
}
