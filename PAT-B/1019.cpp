/*
������һ����λ���ֲ���ȫ��ͬ��4λ����������������Ȱ�4�����ְ��ǵ��������ٰ��ǵݼ�����Ȼ���õ�1�����ּ���2�����֣����õ�һ���µ����֡�һֱ�ظ������������Ǻܿ��ͣ���С����ֺڶ���֮�Ƶ�6174��������������Ҳ��Kaprekar������
���磬���Ǵ�6767��ʼ�����õ�
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...
�ָ�������4λ�����������д������ʾ����ڶ��Ĺ��̡�
�����ʽ��
�������һ��(0, 10000)�����ڵ�������N��
�����ʽ��
���N��4λ����ȫ��ȣ�����һ���������N - N = 0000�������򽫼����ÿһ����һ���������ֱ��6174��Ϊ����֣������ʽ��������
ע��ÿ�����ְ�4λ����ʽ�����
��������1��
6767
�������1��
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
��������2��
2222
�������2��
2222 - 2222 = 0000
*/


#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	
	int res = 0;
	while (res != 6174)
	{
		stringstream l,h;
		string L, H;
		//����ĸ�����
		int c[4] = { 0 };
		for (int i = 0; i < str.length(); i++)
		{
			c[i] = str[i] - '0';
		}
		//�����������С
		sort(c, c + 4);
		for (int i = 0; i < 4; i++)
		{
			l << c[i];
			h << c[3 - i];
		}
		l >> L;
		l.str("");
		h >> H;
		h.str("");
		res = atoi(H.c_str()) - atoi(L.c_str());
		//���
		if (res != 0)
		{
			cout << H << " - " << L << " = ";
			cout.fill('0');
			cout.width(4);
			cout <<	res << endl;
			str = to_string(res);
		}
		else
		{
			cout << H << " - " << L << " = 0000" << endl;
			break;
		}	
	}

	return 0;
}