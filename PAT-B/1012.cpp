/*
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：
A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入格式：
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。
输出格式：
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
若其中某一类数字不存在，则在相应位置输出“N”。
输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9
*/

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int N;
	int a1=0, a2=0, a3=0, a5=0;
	int n2 = 0;
	int s4 = 0,n4=0;
	double a4=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		if (tmp % 5 == 0)
		{
			if (tmp % 2 == 0)
				a1 += tmp;
		}
		else if (tmp % 5 == 1)
		{
			a2 += pow(-1, n2)*tmp;
			n2 ++;
		}
		else if (tmp % 5 == 2)
		{
			a3++;
		}
		else if (tmp % 5 == 3)
		{
			s4 += tmp;
			n4++;
		}
		else
		{
			if (tmp > a5)
				a5 = tmp;
		}
	}
	//out
	if (a1 == 0)
		cout << "N ";
	else
		cout << a1 << " ";
	if (n2 == 0)
		cout << "N ";
	else
		cout << a2 << " ";
	if (a3 == 0)
		cout << "N ";
	else
		cout << a3 << " ";
	if (n4 == 0)
		cout << "N ";
	else
		printf("%.1f ",(double)s4/n4);
	if (a5 == 0)
		cout << "N\n";
	else
		cout << a5 << endl;

	return 0;
}