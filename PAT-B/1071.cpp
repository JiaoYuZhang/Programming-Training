/*
���Ե���С�����顱������һ���ܼ򵥵�С��Ϸ�������ɼ����������һ��������Ȼ�������ע�ĵڶ�����������ȵ�һ��������С��
�����עt������󣬼���������ڶ�����������Ҳ¶��ˣ���ϵͳ�������t�����룻����۳����t�����롣
ע�⣺�����ע�ĳ��������ܳ����Լ��ʻ���ӵ�еĳ�����������������ȫ���������Ϸ�ͽ�����
�����ʽ��
�����ڵ�һ�и���2��������T��K��<=100�����ֱ���ϵͳ�ڳ�ʼ״̬�����͸���ҵĳ��������Լ���Ҫ��������Ϸ������
���K�У�ÿ�ж�Ӧһ����Ϸ��˳�����4�����֣�
n1 b t n2
����n1��n2�Ǽ�����Ⱥ����������[0, 9]�ڵ���������֤�������ֲ���ȡ�bΪ0��ʾ��Ҷġ�С����Ϊ1��ʾ��Ҷġ��󡱡�
t��ʾ�����ע�ĳ���������֤�����ͷ�Χ�ڡ�
�����ʽ��
��ÿһ����Ϸ���������������Ӧ���������t�������ע����x����ҵ�ǰ���еĳ���������
���Ӯ�����
Win t!  Total = x.
����䣬���
Lose t.  Total = x.
�����ע�������еĳ����������
Not enough tokens.  Total = x.
����������
Game Over.
����������
��������1��
100 4
8 0 100 2
3 1 50 1
5 1 200 6
7 0 200 8
�������1��
Win 100!  Total = 200.
Lose 50.  Total = 150.
Not enough tokens.  Total = 150.
Not enough tokens.  Total = 150.
��������2��
100 4
8 0 100 2
3 1 200 1
5 1 200 6
7 0 200 8
�������2��
Win 100!  Total = 200.
Lose 200.  Total = 0.
Game Over.
*/


#include <iostream>

using namespace std;

int main()
{
	int T,K;
	cin >> T>>K;
	for (int i = 0; i < K; i++)
	{
		int n1, b, t, n2;
		cin >> n1 >> b >> t >> n2;
		if (t > T)
		{
			cout << "Not enough tokens.  Total = " << T << "."<<endl;
			continue;
		}
		if ((n1 > n2 && b == 0) || (n1 < n2 && b == 1))
		{
			T += t;
			cout << "Win " << t << "!  Total = " << T << "." << endl;
		}
		else
		{
			T -= t;
			cout << "Lose " << t << ".  Total = " << T << "." << endl;
		}
		if (T == 0)
		{
			cout << "Game Over." << endl;
			break;
		}
	}

	return 0;
}