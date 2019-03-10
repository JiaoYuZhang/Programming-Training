/*
���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������
�����ʽ��
������һ�������θ���3������A��B��D��
�����ʽ��
���A+B��D��������
����������
123 456 8
���������
1103
*/

#include <iostream>
#include <string>
using namespace std;

string trans(int n, long d)
{
	long tmp;
	string D;
	if (d == 0)   //ע�⿼��0
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