/*
������΢����������һ����Ƭ������λ�װ���ͬѧ�ǣ����ڴ����ʱ��Ҫʹ��wifi�����µ������ǵ�ѧϰ��
�ֽ�wifi��������Ϊ������ѧ��𰸣�A-1��B-2��C-3��D-4��
�����ʽ��
�����һ�и���һ��������N��<= 100�������N�У�ÿ�а��ա����-�𰸡��ĸ�ʽ����һ�����4��ѡ�
��T����ʾ��ȷѡ���F����ʾ����ѡ�ѡ����ÿո�ָ���
�����ʽ��
��һ�������wifi���롣
����������
8
A-T B-F C-F D-F
C-T B-F A-F D-F
A-F D-F C-F B-T
B-T A-F C-F D-F
B-F D-T A-F C-F
A-T C-F B-F D-F
D-T B-F C-F A-F
C-T A-F B-F D-F
���������
13224143
*/


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	stringstream  stream;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j<4 ; j++)
		{
			string str;
			cin >> str;
			if (str[2] == 'T')
				stream << str[0] - 'A' + 1;
			else
				continue;
		}
	}
		
	cout << stream.str()<< endl;

	return 0;
}