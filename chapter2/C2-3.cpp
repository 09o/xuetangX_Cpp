/*

C2 - 3实心菱形(100 / 100 分数)

题目描述:
打印 n 阶实心菱形

输入描述:
输入一个整数n，0 < n <= 10

输出描述:
输出 n 阶实心菱形 ， 占 2 * n - 1 行

样例输入:
3

样例输出:
  *
 ***
*****
 ***
  *
 
*/

#include <iostream>

using namespace std;

int main()
{
	int n, i, j;

	cin >> n;

	for (i = 0; i < n; i++) {
		for (j = n - i; j > 1; j--)
			cout << " ";
		for (j = 2 * i + 1; j > 0; j--)
			cout << "*";
		cout << endl;
	}

	for (i = n - 2; i >= 0; i--) {
		for (j = n - i; j > 1; j--)
			cout << " ";
		for (j = 2 * i + 1; j > 0; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}