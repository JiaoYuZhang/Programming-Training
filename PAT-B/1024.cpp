/*
��ѧ�������ǿ�ѧ��������ʾ�ܴ���С�����ֵ�һ�ַ���ķ�����������������ʽ[+-][1-9]"."[0-9]+E[+-][0-9]+��
�����ֵ���������ֻ��1λ��С������������1λ�������ּ���ָ�����ֵ������ż�ʹ������Ҳ�ض���ȷ������
���Կ�ѧ�������ĸ�ʽ����ʵ��A�����д������ͨ���ֱ�ʾ�����A������֤������Чλ����������
�����ʽ��
ÿ���������1��������������һ���Կ�ѧ��������ʾ��ʵ��A�������ֵĴ洢���Ȳ�����9999�ֽڣ�����ָ���ľ���ֵ������9999��
�����ʽ��
��ÿ��������������һ���а���ͨ���ֱ�ʾ�����A������֤������Чλ��������������ĩβ��0��
��������1��
+1.23400E-03
�������1��
0.00123400
��������2��
-1.2E+10
�������2��
-12000000000
*/


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	stringstream res,tmp;
	int idx = 0;
	cin >> s;
	//��λ����
	if (s[idx] == '-')
		res << s[idx];
	idx++;
	//����λ
	tmp << s[idx];
	//С��λ
	idx += 2;
	while (s[idx] != 'E')
	{
		tmp << s[idx];
		idx++;
	}
	//ָ������
	idx++;
	if (s[idx] == '+')
	{
		idx++;
		string e;
		e = s.substr(idx);
		//�Ҳಹ��
		int n;
		n = atoi(e.c_str())+1;
		if (n >= tmp.str().length())
		{
			res << tmp.str();
			for (int i = 0; i < n- tmp.str().length(); i++)
				res << '0';
		}
		else
		{
			res << tmp.str().substr(0, n) << '.' << tmp.str().substr(n);
		}
		
	}
	else
	{
		idx++;
		string e;
		e = s.substr(idx);
		//��ಹ��
		int n;
		n = atoi(e.c_str()) - 1;
		if (n > 0)
		{
			res << "0.";
			for (int i = 0; i < n; i++)
				res << '0';
			res << tmp.str();
		}
		else
		{
			res << tmp.str().substr(0, 1) << '.' << tmp.str().substr(1);
		}
		
	}

	cout << res.str() << endl;
	return 0;
}