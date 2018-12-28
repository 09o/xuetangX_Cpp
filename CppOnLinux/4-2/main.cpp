#include <iostream>
using namespace std;

int BinCoe( int x, int y );
int factors( int n );

int main()
{
    int n, k, ret;
    cout << "The program calculates the binomial coefficient.\n";
    cout << "Enter two natural numbers( n and k ): ";
    cin >> n >> k;
    ret = BinCoe(n, k);
    cout << "C(" << n << ", " << k << ") = " << ret << endl;
    return 0;
}

/* 定理参考：https://zh.wikipedia.org/wiki/二項式係數 
             https://www.shuxuele.com/algebra/binomial-theorem.html
*/ 

/* 1. Using recursive methods
      #递归公式
int BinCoe( int x, int y )
{
    if (x < y)
        return 0;
    if (x == y || y == 0)
        return 1;
    else
        return BinCoe(x-1, y-1) + BinCoe(x-1, y);
}
*/


/* 2. Using a loop method 
      #阶乘公式
*/
int BinCoe( int x, int y )
{
    int n = x, k = y, t1 = x - y;
    int divisor = 1, dividend_1 = 1, dividend_2 = 1;
    int i, t2 = t1;
    if ( x == y || y == 0)
        return 1;
    else {
        for (i = 0; i < x; i++)
            divisor *= n--;
        for (i = 0; i < y; i++)
            dividend_1 *= k--;
        for (i = 0; i < t1; i++)
            dividend_2 *= t2--;
    }
    return divisor / (dividend_1 * dividend_2);
}
