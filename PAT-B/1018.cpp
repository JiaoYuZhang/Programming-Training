/*
�ָ������˵Ľ����¼����ͳ��˫����ʤ��ƽ�������������Ҹ���˫���ֱ��ʲô���Ƶ�ʤ�����
�����ʽ��
�����1�и���������N��<=105������˫������Ĵ�����
���N�У�ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�
C�������ӡ���J������������B������������1����ĸ����׷�����2�������ҷ����м���1���ո�
�����ʽ��
�����1��2�зֱ�����ס��ҵ�ʤ��ƽ�������������ּ���1���ո�ָ���
��3�и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м���1���ո�����ⲻΨһ�����������ĸ����С�Ľ⡣
����������
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
���������
5 3 2
2 3 5
B B
*/


#include <iostream>

using namespace std;

int main()
{	

	int awin = 0, alose = 0, equal = 0;//��¼A��ʤ��
	int aB=0,aC=0,aJ=0,bB=0,bC=0,bJ=0;//��¼��ʤʱ��A��B������
	int N;
	cin >> N;
	//��¼ÿ��ʤ��
	for (int i = 0; i < N; i++)
	{
		char a, b;
		cin >> a >> b;

		if ((a == 'B'&& b == 'C') || (a == 'C'&& b == 'J') || (a == 'J'&& b == 'B'))
		{
			awin++;
			if (a == 'B')
				aB++;
			else if (a == 'C')
				aC++;
			else
				aJ++;
		}
		else if ((a == 'B'&& b == 'J') || (a == 'C'&& b == 'B') || (a == 'J'&& b == 'C'))
		{
			alose++;
			if (b == 'B')
				bB++;
			else if (b == 'C')
				bC++;
			else
				bJ++;
		}
		else
			equal++;

	}
	//���A��Bʤ��
	cout << awin << " " << equal << " " << alose << endl;
	cout << alose << " " << equal << " " << awin << endl;
	//�ҳ�ʤ����
	if (aB >= aC && aB >= aJ)
		cout << "B";
	else if (aC >= aJ)
		cout << "C";
	else
		cout << "J";
	if (bB >= bC && bB >= bJ)
		cout << " B"<<endl;
	else if (bC >= bJ)
		cout << " C"<<endl;
	else
		cout << " J"<<endl;


	return 0;
}