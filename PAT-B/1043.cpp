/*
����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ������뽫�ַ����µ���˳�򣬰���PATestPATest....��������˳������������������ַ�����Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬�����µ��ַ��԰�PATest��˳���ӡ��ֱ�������ַ����������
�����ʽ��
������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����
�����ʽ��
��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�
����������
redlesPayBestPATTopTeePHPereatitAPPT
���������
PATestPATestPTetPTePePee
*/
//hash��0-P,1-A,2-T,3-e,4-s,5-t

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int hash[6] = { 0 };
	char c[6] = { 'P','A','T','e','s','t' };
	cin >> str;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == 'P')
			hash[0]++;
		else if (str[i] == 'P')
			hash[0]++;
		else if (str[i] == 'A')
			hash[1]++;
		else if (str[i] == 'T')
			hash[2]++;
		else if (str[i] == 'e')
			hash[3]++;
		else if (str[i] == 's')
			hash[4]++;
		else if (str[i] == 't')
			hash[5]++;

	int max = 0;
	for (int i = 0; i < 6; i++)
		if (hash[i] > max)
			max = hash[i];

	for(int i=0;i<max;i++)
		for(int j=0;j<6;j++)
			if (hash[j] != 0)
			{
				cout << c[j];
				hash[j] --;
			}
	cout << endl;

	return 0;
}