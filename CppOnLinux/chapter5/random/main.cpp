#include <iostream>

#include "zyrandom.h"
using namespace std;

int main()
{
    int i;
    Randomize();
    for (i = 0; i < 8; i++) {
        int t = GenerateRandomNumber( 10, 99 );
        cout << t << "; ";
    }
    cout << endl;

    for (i = 0; i < 8; i++) {
        double t = GenerateRandomReal( 10.0, 99.0 );
        cout << t << "; ";
    }
    cout << endl;
    return 0;
}
