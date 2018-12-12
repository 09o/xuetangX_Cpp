// 3_5.cpp
// 计算分段函数
// 当r^2<=s^2, k = sqrt((sin r)^2 + (sim s)^2)
// 当r^2 >s^2, k = 1/2 * sin(rs)
// 其中r、s的值由键盘输入
// sin x的近似值按如下公式计算，计算精度为10^-10
// sin x = x / 1! - x^3 / 3! + x^5 / 5! - x^7 / 7! + ... = Sum(-1)^n-1 * ((x^(2n-1) / (2n-1)!))

#include "pch.h"
#include <iostream>
#include <cmath> // 对标准库中数学函数的说明
using namespace std;

const double TINY_VALUE = 1e-10;  // 计算精度，控制结束条件

double tsin(double x) {
	double g = 0;
	double t = x;
	int n = 1;
	do {
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
		
		/* 例如： x = 5;
		n = 1; t = 5;
		n = 2; t = -5 * 5 * 5 / (2 * 2 - 1) / (2 * 2 - 2) => -5^3 / 3*2;
		n = 3; t = -(-5^3 / 3*2) * 5^2 / (2 * 3 - 1) / (2 * 3 - 2) => 5^5 / 5*4*3*2;
		...
		...
		...
		*/

	} while (fabs(t) >= TINY_VALUE);
	return g;
}

int main()
{
	double k, r, s;
	cout << "r = ";
	cin >> r;
	cout << "s = ";
	cin >> s;
	if (r * r <= s * s)
		k = sqrt(tsin(r)*tsin(r) + tsin(s)*tsin(s));
	else
		k = tsin(r * s) / 2;
	cout << k << endl;
	return 0;
}