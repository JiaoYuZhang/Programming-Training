/*
复数可以写成(A + Bi)的常规形式，其中A是实部，B是虚部，i是虚数单位，满足i2 = -1；也可以写成极坐标下的指数形式(R*e(Pi))，
其中R是复数模，P是辐角，i是虚数单位，其等价于三角形式 R(cos(P) + isin(P))。
现给定两个复数的R和P，要求输出两数乘积的常规形式。
输入格式：
输入在一行中依次给出两个复数的R1, P1, R2, P2，数字间以空格分隔。
输出格式：
在一行中按照“A+Bi”的格式输出两数乘积的常规形式，实部和虚部均保留2位小数。
注意：如果B是负数，则应该写成“A-|B|i”的形式。
输入样例：
2.3 3.5 5.2 0.4
输出样例：
-8.68-8.23i
*/


#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
	double R1, R2, P1, P2;
	double a, b;
	scanf("%lf%lf%lf%lf", &R1, &P1, &R2, &P2);
	a = R1 * R2 * cos(P1 + P2);
	b = R1 * R2 * sin(P1 + P2);

	//考虑当 0>b>-0.005,取b=0,同理a，注意a,b均为0情况
	
	if (a == 0 && b == 0)
		printf("0.00\n");
	if (a >= 0 || a <= -0.005)
		printf("%.2lf", a);
	else
		printf("0.00");

	if (b>0)
		printf("+%.2lfi\n",  b);
	else if (b>-0.005)
		printf("+0.00i\n");
	else
		printf("%.2lfi\n",  b);
	return 0;
}