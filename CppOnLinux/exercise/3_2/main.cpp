/* �������������С������ */
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
ʹ��շת��˷���������� 
���������֪ʶ�� https://zh.wikihow.com/������������С������ 
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

