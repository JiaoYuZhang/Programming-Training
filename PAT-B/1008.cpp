/*
һ������A�д���N��N>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ��������M��M>=0����λ�ã�����A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1�������M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����
�����ʽ��ÿ���������һ��������������1������N ( 1<=N<=100)��M��M>=0������2������N��������֮���ÿո�ָ���
�����ʽ����һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�
����������
6 2
1 2 3 4 5 6
���������
5 6 1 2 3 4
*/

#include <iostream>

using namespace std;

int main()
{
	int N, M;
	int num[100];

	cin >> N >> M;

	while (M > N)//!Ҫע��M>N�����
		M %= N;

	for (int i = M; i < N; i++)
		cin >> num[i];
	for (int i = 0; i < M; i++)
		cin >> num[i];

	for (int i = 0; i < N - 1; i++)
		cout << num[i] << " ";
	cout << num[N - 1] << endl;

	return 0;
}