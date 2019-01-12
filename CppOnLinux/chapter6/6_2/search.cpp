#include <iostream>
#include "search.h"
using namespace std;

void FindIntegers( int a[], int n, int key )
{
    int ret = 0;
    int i;
    for (i = 0; i < n; i++)
        if (ExistIntegers(a[i], key)){
            ret = 1;
            break;
        }
    if (ret) cout << "true" << endl;
    else cout << "false" << endl;
}

bool ExistIntegers( int a, int b )
{
    if (a == b)
        return true;
    else
        return false;
}
