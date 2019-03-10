/*
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。
输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。
输出格式：每个测试用例的输出占一行，用规定的格式输出n。
输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/
#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int num[3];
		num[0] = n / 100;
		n %=100;
		num[1] = n / 10;
		num[2] = n % 10;

		for (int i = 0; i < num[0]; i++)
			printf("B");
		for (int i = 0; i < num[1]; i++)
			printf("S");
		for (int i = 0; i < num[2]; i++)
			printf("%d",i+1);
	}
	return 0;
}