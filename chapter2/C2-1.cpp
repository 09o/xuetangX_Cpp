/*
C2-1简单题目  (100/100 分数)
题目描述
任意给定 n 个整数，求这 n 个整数序列的和、最小值、最大值

输入描述
输入一个整数n，代表接下来输入整数个数，0 < n <= 100，接着输入n个整数，整数用int表示即可。

输出描述
输出整数序列的和、最小值、最大值。用空格隔开，占一行

样例输入
2
1 2

样例输出
3 1 2
*/

#include <iostream>

using namespace std;

int main()
{
	int n, number, i;
	int sum = 0, minN = 0, maxN = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> number;
		sum += number;
		if (i == 0)  // 将第一个输入的数作为最小值的初始值
			minN = number;
		if (number > maxN)  // 如果输入的数比最大值默认值0更大，则该数为最大值
			maxN = number;
		else if (number < minN)  // 如果输入的数比最小值还小，则该数为最小值
			minN = number;
	}

	// 如果n=2，且两个数a1 a2都相同时，输出应该是 sum a1 a2 ? 还是 sum a1 ?
	// 若为后者，则将下列代码改为 if (n==1 || minN == maxN)
	if (n == 1)
		cout << sum << " " << minN;
	else
		cout << sum << " " << minN << " " << maxN;

	return 0;
}