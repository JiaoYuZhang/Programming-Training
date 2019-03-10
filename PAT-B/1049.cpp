/*
给定一个正数数列，我们可以从中截取任意的连续的几个数，称为片段。例如，给定数列{0.1, 0.2, 0.3, 0.4}，
我们有(0.1) (0.1, 0.2) (0.1, 0.2, 0.3) (0.1, 0.2, 0.3, 0.4) (0.2) (0.2, 0.3) (0.2, 0.3, 0.4) (0.3) (0.3, 0.4) (0.4) 这10个片段。
给定正整数数列，求出全部片段包含的所有的数之和。如本例中10个片段总和是0.1 + 0.3 + 0.6 + 1.0 + 0.2 + 0.5 + 0.9 + 0.3 + 0.7 + 0.4 = 5.0。
输入格式：
输入第一行给出一个不超过105的正整数N，表示数列中数的个数，第二行给出N个不超过1.0的正数，是数列中的数，其间以空格分隔。
输出格式：
在一行中输出该序列所有片段包含的数之和，精确到小数点后2位。
输入样例：
4
0.1 0.2 0.3 0.4
输出样例：
5.00
*/
//作循环会超时，要分析规律

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	double tmp = 0;
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%lf",&tmp);  //cin不行float，单精度浮点型，对应%f.double, 双精度浮点型，对应%lf.
		sum += (double)(N - i) * (double)(i + 1) * tmp;
	}

	printf("%.2lf\n", sum);
	return 0;
}

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	float n[105];
	for (int i = 0; i < N; i++)
	{
		cin >> n[i];
	}

	float sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j <N; j++)
			for (int k = i; k < N - j; k++)
				sum += n[k];

	printf("%.2f\n", sum);

	return 0;
}*/