/*
����������13���Ƽ����ģ�
�����˵�0�������˳�Ϊtret��
����������1��12�Ļ����ķֱ�Ϊ��jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec��
�����˽���λ�Ժ��12����λ���ֱַ��Ϊ��tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou��
��������˵����֡�29������ɻ����ľ��ǡ�hel mar�����������ġ�elo nov����Ӧ�������֡�115����Ϊ�˷��㽻���������д����ʵ�ֵ���ͻ�������֮��Ļ��롣
�����ʽ��
�����һ�и���һ��������N��<100�������N�У�ÿ�и���һ��[0, 169)�����ڵ����� ���� �����ǵ����ģ������ǻ����ġ�
�����ʽ��
��Ӧ�����ÿһ�У���һ���������������һ�����Ե����֡�
����������
4
29
5
elo nov
tam
���������
hel mar
may
115
13
*/


#include <iostream>
#include <string>

using namespace std;

string low[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
string high[13]= { "tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };

void eToM(int a)
{
	int l, h;
	l = a % 13;
	h = a / 13;
	if (h == 0)
		cout << low[l] << endl;
	else if (l==0 )
		cout << high[h] << endl;
	else
		cout << high[h] << " " << low[l] << endl;
}

void mToE_one(int i)
{
	cout << i << endl;
}
void mToE_two(int i)
{
	string t;
	getline(cin,t);
	int j= 0;
	if (t[0] != 0)
	{
		t = t.substr(1, t.length() - 1);//ȥ�ո�
		for (; j < 13; j++)
			if (t == low[j])
				break;

	}		
	cout << i * 13 + j << endl;
}

int main()
{
	int N;
	cin >> N;
	for(int n=0;n<N;n++)
	{
		string tmp;
		cin >> tmp;
		//��������
		if (tmp[0] >= '0'&&tmp[0] <= '9')
			eToM(stoi(tmp));
		else
			for (int i = 0; i < 13; i++)
			{
				//һλ������
				if (tmp == low[i])
				{
					mToE_one(i);
					break;
				}
				//��λ������
				if (tmp == high[i])
				{
					mToE_two(i);
					break;
				}
			}
	}

	return 0;
}