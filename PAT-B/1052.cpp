/*
�����ձ������ͨ���ɡ��֡������ۡ������ڡ�������Ҫ������ɡ�����������Ǽ���һ����������ǰ����и�ʽ����ģ�
[����]([����][��][����])[����]
�ָ�����ѡ�õķ��ż��ϣ����㰴�û���Ҫ��������顣
�����ʽ��
����������ǰ����˳���Ӧ�����֡��ۡ��ڵĿ�ѡ���ż���ÿ����������һ�Է�����[]�ڡ�
��Ŀ��֤ÿ�����϶�������һ�����ţ���������10�����ţ�ÿ�����Ű���1��4���ǿ��ַ���
֮��һ�и���һ��������K��Ϊ�û�����ĸ��������K�У�ÿ�и���һ���û��ķ���ѡ��
˳��Ϊ���֡����ۡ��ڡ����ۡ����֡�������ֻ������������Ӧ�����е���ţ���1��ʼ�������ּ��Կո�ָ���
�����ʽ��
��ÿ���û�������һ����������ɵı��顣���û�ѡ�����Ų����ڣ��������Are you kidding me? @\/@����
����������
[�r][�q][o][~\][/~]  [<][>]
[�s][�t][^][-][=][>][<][@][��]
[��][��][_][��][^]  ...
4
6 1 5 2 7
6 8 4 5 5
3 3 3 3 3
2 10 4 9 3
���������
�r(�s���t)�q
<(@��=)/~
o(^��^)o
Are you kidding me? @\/@
*/
//ע��һ���½������

#include <iostream>
#include <string>

using namespace std;

int getSign(string t,string a[10])
{
	//[�r][�q][o][~\][/~]  [<][>]
	int idx = 0;
	int num = 0;
	while (idx < t.length())
	{
		if (t[idx] == '[')
		{
			idx++;//[����һλ
			int j = 0;
		    //jΪ���ų���
			for (int i = idx; t[i] != ']'; i++)
				j++;
			a[num] = t.substr(idx,j);
			num++;
			idx += j;//']'λ��
		}
		
		idx++;
	}
	return num;
}

int main()
{
	int num[3] = {0};
	string sign[3][10];
	string tmp[3];
	
	for (int i = 0; i < 3; i++)
	{
		getline(cin, tmp[i]);
		num[i] = getSign(tmp[i], sign[i]);
	}


	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string res;
		bool flag = true;
		int a=0;
		//1
		cin >> a;
		if (a > num[0]||a<1)
			flag = false;
		else
			res += sign[0][a - 1];
		res += "(";
		//2
		cin >> a;
		if (a > num[1] || a<1)
			flag = false;
		else
			res += sign[1][a - 1];
		//3
		cin >> a;
		if (a > num[2] || a<1)
			flag = false;
		else
			res += sign[2][a - 1];
		cin >> a;
		if (a > num[1] || a<1)
			flag = false;
		else
			res += sign[1][a - 1];
		res += ")";
		//5
		cin >> a;
		if (a > num[0] || a<1)
			flag = false;
		else
			res += sign[0][a - 1];

		if (!flag)
			cout << "Are you kidding me? @\\/@" << endl;
		else
			cout << res << endl;
	}

	return 0;
}