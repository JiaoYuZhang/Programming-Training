/*
��Pi��ʾ��i�����������θ�����������M <= N <= 104�������PM��PN������������
�����ʽ��
������һ���и���M��N������Կո�ָ���
�����ʽ��
�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�
����������
5 27
���������
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int i)
{
	for (int j = 2; j <= sqrt(i); j++)
		if (i%j == 0)
			return false;
	return true;
}


int main()
{
	int N, M;
	cin >> N >> M;
	int num = 1;//��������
	int i = 2,j=2;
	int count = 0;
	//ǰN-1��
	while (num < N)
	{
		if (isPrime(i))
			num++;
		i++;
	}
	//��N����M-1��
	while (num < M)
	{
		if (isPrime(i))
		{
			num++;
			cout << i;
			if (count % 10 == 9)
				cout << endl;
			else
				cout << " ";
			count++;
		}
		i++;
	}
	//��M��
	while (num == M)
	{
		if (isPrime(i))
		{
			cout << i << endl;
			num++;
		}
		i++;
	}
	return 0;
}