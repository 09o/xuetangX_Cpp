#include <iostream>
#include <iomanip>
#include "random.h"
#include "arrmanip.h"

using namespace std;

static const unsigned int LowerBound = 10;
static const unsigned int UpperBound = 99;

void GenerateIntegers(int * p, unsigned int n)
{
    unsigned int i;
    Randomize();
    for (i = 0; i < n; i++)
        *p++ = GenerateRandomNumber(LowerBound, UpperBound);
}

void ReverseIntegers(int * p, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n / 2; i++)
        Swap(p + i, p + n - i - 1);
}

void Swap(int * p, int * q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}

void PrintIntegers(const int * p, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
        cout << setw(4) << *(p+i);
    cout << endl;
}
