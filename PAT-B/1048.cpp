/*
����Ҫ��ʵ��һ�����ּ��ܷ��������ȹ̶�һ��������������A������һ������B������ÿ1λ������A�Ķ�Ӧλ���ϵ����ֽ����������㣺
������λ����Ӧλ��������Ӻ��13ȡ�ࡪ��������J����10��Q����11��K����12��
��ż��λ����B�����ּ�ȥA�����֣������Ϊ���������ټ�10���������λΪ��1λ��
�����ʽ��
������һ�������θ���A��B����Ϊ������100λ��������������Կո�ָ���
�����ʽ��
��һ����������ܺ�Ľ����
����������
1234567 368782971

���������
3695Q8118
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	string C;
	int ib;
	ib= B.length() - 1;
	for (int i = A.length() - 1; i >= 0 && ib>=0; i--)
	{
		if (i % 2 == 0)//����
		{
			int tmp;
			
			tmp = (A[i] - '0' + B[ib] - '0')%13;
			
			if (tmp < 10)
				C = to_string(tmp) +C;
			else if (tmp == 10)
				C = "J"+ C;
			else if (tmp == 11)
				C = "Q"+ C;
			else if (tmp == 12)
				C = "K" + C;
		}
		else
		{
			int tmp;
			tmp = B[ib] - '0' - A[i] + '0';

		
			while (tmp <= 0)
				tmp += 10;
			
			C = to_string(tmp) + C;
		}
		ib--;
	}
	ib++;
	if (ib > 0)
		C = B.substr(0, ib) + C;

	cout << C << endl;
	return 0;
}