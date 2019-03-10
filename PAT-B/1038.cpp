/*
本题要求读入N名学生的成绩，将获得某一给定分数的学生人数输出。
输入格式：
输入在第1行给出不超过105的正整数N，即学生总人数。随后1行给出N名学生的百分制整数成绩，中间以空格分隔。最后1行给出要查询的分数个数K（不超过N的正整数），随后是K个分数，中间以空格分隔。
输出格式：
在一行中按查询顺序给出得分等于指定分数的学生人数，中间以空格分隔，但行末不得有多余空格。
输入样例：
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
输出样例：
3 2 0
*/


#include <iostream>

using namespace std;

int main()
{
	int hash[101] = { 0 };

	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		hash[tmp] ++;
	}

	cin >> k;
	int temp;
	for (int i = 0; i < k - 1; i++)
	{
		cin >> temp;
		cout << hash[temp] << " ";
	}
	cin >> temp;
	cout << hash[temp] << endl;

	return 0;
}