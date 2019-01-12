#include <iostream>
#include <iomanip>
#include "Sort.h"
#include "random.h"
using namespace std;

/* Get a list of random numbers */
void GenerateIntegers( int a[], int n, int lower, int upper )
{
    int i;
    Randomize();
    for (i = 0; i < n; i++)
        a[i] = GenerateRandomNumber(lower, upper);
}

void SortIntegers( int a[], int n )
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            CompareIntegers(a, i, j);
}

void CompareIntegers(int a[], int i, int j)
{
    int t;
    if (a[i] > a[j]) {
        t = a[j];
        a[j] = a[i];
        a[i] = t;
    }
}

/* Prints the array */
void PrintIntegers( int a[], int n )
{
    int i;
    for (i = 0; i < n; i++)
        cout << setw(3) << a[i];
    cout << endl;
}

