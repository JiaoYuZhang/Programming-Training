/*
����Ҫ�����N��ѧ���ĳɼ��������ĳһ����������ѧ�����������
�����ʽ��
�����ڵ�1�и���������105��������N����ѧ�������������1�и���N��ѧ���İٷ��������ɼ����м��Կո�ָ������1�и���Ҫ��ѯ�ķ�������K��������N�����������������K���������м��Կո�ָ���
�����ʽ��
��һ���а���ѯ˳������÷ֵ���ָ��������ѧ���������м��Կո�ָ�������ĩ�����ж���ո�
����������
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
���������
3 2 0
*/


#include <iostream>

using namespace std;

int main()
{
	int hash[101] = { 0 };

	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		hash[tmp] ++;
	}

	cin >> k;
	int temp;
	for (int i = 0; i < k - 1; i++)
	{
		cin >> temp;
		cout << hash[temp] << " ";
	}
	cin >> temp;
	cout << hash[temp] << endl;

	return 0;
}