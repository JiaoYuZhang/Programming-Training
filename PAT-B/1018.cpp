/*
现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。
输入格式：
输入第1行给出正整数N（<=105），即双方交锋的次数。
随后N行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。
C代表“锤子”、J代表“剪刀”、B代表“布”，第1个字母代表甲方，第2个代表乙方，中间有1个空格。
输出格式：
输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。
第3行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。
输入样例：
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
输出样例：
5 3 2
2 3 5
B B
*/


#include <iostream>

using namespace std;

int main()
{	

	int awin = 0, alose = 0, equal = 0;//记录A的胜负
	int aB=0,aC=0,aJ=0,bB=0,bC=0,bJ=0;//记录获胜时，A、B的手势
	int N;
	cin >> N;
	//记录每场胜负
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
	//输出A、B胜负
	cout << awin << " " << equal << " " << alose << endl;
	cout << alose << " " << equal << " " << awin << endl;
	//找出胜手势
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