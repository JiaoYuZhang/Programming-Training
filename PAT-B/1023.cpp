/*
��������0-9�����ɸ��������������˳��������Щ���֣�������ȫ��ʹ�á�Ŀ����ʹ�����õ�����������С��ע��0��������λ�������磺��������0������1������5��һ��8�����ǵõ�����С��������10015558��
�ָ������֣����д��������ܹ���ɵ���С������
�����ʽ��
ÿ���������1������������ÿ������������һ���и���10���Ǹ�������˳���ʾ����ӵ������0������1����������9�ĸ�������������һ���ո�ָ���10�����ֵ��ܸ���������50��������ӵ��1����0�����֡�
�����ʽ��
��һ��������ܹ���ɵ���С������
����������
2 2 0 0 0 3 0 0 1 0
���������
10015558
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[10];
	string ans;
	for (int i = 0; i < 10; i++)
		cin >> a[i];


	//����λ
	for (int i = 1; i < 10; i++)
		if (a[i] != 0)
		{
			ans += to_string(i);
			a[i] --;
			break;
		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < a[i]; j++)
			ans += to_string(i);

	cout << ans << endl;

	return 0;
}