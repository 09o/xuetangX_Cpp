#include <iostream>
#include "Sort.h"
#include "search.h"
using namespace std;

#define NUMBER_OF_ELEMENTS 9
const int LowerBound = 10;
const int UpperBound = 99;

int main()
{
    int a[NUMBER_OF_ELEMENTS];
    int key;
    GenerateIntegers(a, NUMBER_OF_ELEMENTS, LowerBound, UpperBound);
    cout << "Array generate at random as follows:\n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    SortIntegers(a, NUMBER_OF_ELEMENTS);
    cout << "After all elements of the array sorted:\n";
    PrintIntegers(a, NUMBER_OF_ELEMENTS);
    cout << "Enter a number you want to search >> ";
    cin >> key;
    FindIntegers(a, NUMBER_OF_ELEMENTS, key);
    return 0;
}
