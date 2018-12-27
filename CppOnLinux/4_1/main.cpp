#include <iostream>
#include <cmath>
using namespace std;

int isPrime( int n );

int main()
{
    int i, m, temp, j = 0;
    int reserve[32];

    cout << "The program shows a natural number divided by its prime factors.\n";
    cout << "Input a number: ";

    cin >> m;
    temp = m;
    /* 找到该数的每一个素数因子，存入数组reserve中 */
    while (temp != 1) {
        for ( i = 2; i <= temp; i++ )
            if (temp % i == 0 && isPrime(i))
                break;
        reserve[j++] = i;
        temp /= i;
    }
    cout << m << " = ";
    for ( i = 0; i < j; i++) {
        if (i == (j - 1)) {
            cout << reserve[i] << endl;
            break;
        }
        cout << reserve[i] << " * ";
    }
    return 0;
}

int isPrime( int n )
{
    int i, t = (int)sqrt(n) + 1;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (i = 3; i < t; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
