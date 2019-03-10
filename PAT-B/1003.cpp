/*
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。
得到“答案正确”的条件是：
1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。
接下来每个字符串占一行，字符串长度不超过100，且不包含空格。
输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。
输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
*/

/*
分析：
不要想当然，题目的意思是
PAT           p前面有0个A,pt之间有1个A，T 后面有0个A,  0*1=0   正确
PAAT          p前面有0个A,pt之间有2个A，T 后面有0个A,  0*2=0   正确
AAPATAA       p前面有2个A,pt之间有1个A，T 后面有2个A,  2*1=2   正确
AAPAATAAAA    p前面有2个A,pt之间有2个A，T 后面有2个A,  2*2=4   正确
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		int a = 0, b = 0, c = 0;
		bool flag = true;
		
		//找P、T
		int p = str.find("P");
		if (p == -1)
			flag = false;
		int t = str.find("T");
		if (t == -1)
			flag = false;

		//计数各段A个数，过滤其他字符情况
		if (flag)
		{
			int j = 0;
			for (; j < p; j++)
				if (str[j] == 'A')
					a++;
				else
				{
					flag = false;
					break;
				}
			for (++j; j < t; j++)
				if (str[j] == 'A')
					b++;
				else
				{
					flag = false;
					break;
				}
			for (++j; j < str.length(); j++)
				if (str[j] == 'A')
					c++;
				else
				{
					flag = false;
					break;
				}
		}
		//保证有A，且A的个数符合规律
		if (c != a*b || b < 1)
			flag = false;

		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}