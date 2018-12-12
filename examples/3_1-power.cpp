// 3_1.cpp
#include "pch.h"
#include <iostream>
using namespace std;

// compute the n times of number x
double power(double x, int n) {
	double val = 1.0;
	// e.g. 5 -> 4 -> 3 -> 2 -> 1 -> 0(end)
	while (n--)
		val *= x;
	return val;
}

int main()
{
	double pow;
	pow = power(2.25, 2);
	cout << "5 to the power 2 is " << pow << endl;
	
	return 0;
}