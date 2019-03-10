/*
输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。
输入格式：
输入在一行中依次给出3个整数A、B和D。
输出格式：
输出A+B的D进制数。
输入样例：
123 456 8
输出样例：
1103
*/

#include <iostream>
#include <string>
using namespace std;

string trans(int n, long d)
{
	long tmp;
	string D;
	if (d == 0)   //注意考虑0
		return "0";
	while (d!=0)
	{
		tmp = d % n;
		d /= n;
		if (tmp <= 9)
			D = to_string(tmp) + D;
		else
			D = to_string((char)tmp - 10 + 'A') + D;
	}
	return D;
}

int main()
{
	long A, B,d;
	int n;
	cin >> A >> B>>n;
	d = A + B;

	cout << trans(n, d)<<endl;

	return 0;
}