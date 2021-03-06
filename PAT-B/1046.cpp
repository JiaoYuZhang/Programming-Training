/*
酒桌上两人划拳的方法为：每人口中喊出一个数字，同时用手比划出一个数字。
如果谁比划出的数字正好等于两人喊出的数字之和，谁就赢了，输家罚一杯酒。
两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。
下面给出甲、乙两人的划拳记录，请你统计他们最后分别喝了多少杯酒。
输入格式：
输入第一行先给出一个正整数N（<=100），随后N行，每行给出一轮划拳的记录，格式为：
甲喊 甲划 乙喊 乙划
其中“喊”是喊出的数字，“划”是划出的数字，均为不超过100的正整数（两只手一起划）。
输出格式：
在一行中先后输出甲、乙两人喝酒的杯数，其间以一个空格分隔。
输入样例：
5
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15
输出样例：
1 2

*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[100], b[100]; //喊
	int A[100], B[100]; //划
	int alose = 0, blose = 0;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i] >> A[i] >> b[i] >> B[i];
		int tmp = a[i] + b[i];
		if (A[i] == tmp && B[i] != tmp)
			blose++;
		else if (B[i] == tmp && A[i] != tmp)
			alose++;
	}
	cout << alose << " " << blose << endl;
	return 0;
}