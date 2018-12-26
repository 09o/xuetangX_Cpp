/* 求最大公因数和最小公倍数 */
#include <iostream>
using namespace std;

int gcd( int x, int y );
int lcm( int x, int y );

int main()
{
    int a, b;
    cout << "The program gets two integers, prints their gcd and lcm." << endl;
    cout << "The two numbers: ";
    cin >> a >> b;
    cout << "The GCD is " << gcd(a, b) << "." << endl;
    cout << "The LCM is " << lcm(a, b) << "." << endl;
    return 0;
}

/* 
使用辗转相乘法求最大公因数 
关于其相关知识： https://zh.wikihow.com/求两个数的最小公倍数 
*/ 

int gcd( int x, int y )
{
    int mol;
    mol = x > y ? x % y: y % x;
    if (mol == 0) return x < y ? x : y;
    gcd(mol, x < y ? x : y);
}


int lcm( int x, int y )
{
    return x * y / gcd(x, y);
}

