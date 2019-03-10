/*
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。
输入格式：
输入在一行中给出M和N，其间以空格分隔。
输出格式：
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。
输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int i)
{
	for (int j = 2; j <= sqrt(i); j++)
		if (i%j == 0)
			return false;
	return true;
}


int main()
{
	int N, M;
	cin >> N >> M;
	int num = 1;//素数个数
	int i = 2,j=2;
	int count = 0;
	//前N-1个
	while (num < N)
	{
		if (isPrime(i))
			num++;
		i++;
	}
	//第N到第M-1个
	while (num < M)
	{
		if (isPrime(i))
		{
			num++;
			cout << i;
			if (count % 10 == 9)
				cout << endl;
			else
				cout << " ";
			count++;
		}
		i++;
	}
	//第M个
	while (num == M)
	{
		if (isPrime(i))
		{
			cout << i << endl;
			num++;
		}
		i++;
	}
	return 0;
}