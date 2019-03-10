/*
火星人是以13进制计数的：
地球人的0被火星人称为tret。
地球人数字1到12的火星文分别为：jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
火星人将进位以后的12个高位数字分别称为：tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
例如地球人的数字“29”翻译成火星文就是“hel mar”；而火星文“elo nov”对应地球数字“115”。为了方便交流，请你编写程序实现地球和火星数字之间的互译。
输入格式：
输入第一行给出一个正整数N（<100），随后N行，每行给出一个[0, 169)区间内的数字 —— 或者是地球文，或者是火星文。
输出格式：
对应输入的每一行，在一行中输出翻译后的另一种语言的数字。
输入样例：
4
29
5
elo nov
tam
输出样例：
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
		t = t.substr(1, t.length() - 1);//去空格
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
		//地球数字
		if (tmp[0] >= '0'&&tmp[0] <= '9')
			eToM(stoi(tmp));
		else
			for (int i = 0; i < 13; i++)
			{
				//一位火星文
				if (tmp == low[i])
				{
					mToE_one(i);
					break;
				}
				//两位火星文
				if (tmp == high[i])
				{
					mToE_two(i);
					break;
				}
			}
	}

	return 0;
}