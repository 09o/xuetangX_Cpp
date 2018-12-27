/* 不能正确输出；
   例如：输入数 48
   结果返回：48 = 2 * 2 * 2 * 2 * 3
			 3 * 2
 			 3 * 2 * 2
 			 3 * 2 * 2 * 2
			 3 * 2 * 2 * 2 * 2 
			 
	有待改进。。。。。 
*/
#include <iostream>
#include <cmath>
using namespace std;

void WelcomeInfo();
bool isPrime( int n );
void RetFactors( int n );

int main()
{
    int n;
    WelcomeInfo();
    cin >> n;
    if ( isPrime(n) )
        cout << n << " = " << n << endl;
    else {
        cout << n << " = ";
        RetFactors(n);
    }

    return 0;
}

void WelcomeInfo()
{
    cout << "The program shows a natural number divided by prime factors.\n";
    cout << "Input a natural number: ";
}

bool isPrime( int n )
{
    int i, t = (int)sqrt(n) + 1;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (i = 3; i <= t; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

 
void RetFactors( int n )
{
    int i, j, t = n / 2 + 1;
    for ( i = 2; i <= t; i++ ) {
        if ( isPrime(i) ) {
            for ( j = 2; j <= t; j++ ) {
                if (i * j == n) {
                    if ( isPrime(j) )
                        cout << i << " * " << j << endl;
                    else {
                        cout << i << " * ";
                        RetFactors(j);
                    }
                }
            }
        }
    }
}
