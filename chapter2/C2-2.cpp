/*

C2-2 进制转换  (100/100 分数)
题目描述
已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。

输入描述
输入一个二进制整数n，其长度大于0且不大于10

输出描述
输出转换后的十进制数， 占一行

样例输入
110

样例输出
6

*/

#include <iostream>
using namespace std;

int main()
{
	int BIN, MUL, mol, i, DEC = 0, n = 0;
	cin >> BIN;
	do {
		MUL = 1;
		mol = BIN % 10;
		for (i = 0; i < n; i++) {
			MUL *= 2;
		}
		MUL *= mol;
		DEC += MUL;
		n++;
		BIN /= 10;
	} while (BIN != 0);

	cout << DEC << endl;
	
	return 0;
}