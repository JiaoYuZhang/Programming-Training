/*
萌萌哒表情符号通常由“手”、“眼”、“口”三个主要部分组成。简单起见，我们假设一个表情符号是按下列格式输出的：
[左手]([左眼][口][右眼])[右手]
现给出可选用的符号集合，请你按用户的要求输出表情。
输入格式：
输入首先在前三行顺序对应给出手、眼、口的可选符号集。每个符号括在一对方括号[]内。
题目保证每个集合都至少有一个符号，并不超过10个符号；每个符号包含1到4个非空字符。
之后一行给出一个正整数K，为用户请求的个数。随后K行，每行给出一个用户的符号选择，
顺序为左手、左眼、口、右眼、右手——这里只给出符号在相应集合中的序号（从1开始），数字间以空格分隔。
输出格式：
对每个用户请求，在一行中输出生成的表情。若用户选择的序号不存在，则输出“Are you kidding me? @\/@”。
输入样例：
[╮][╭][o][~\][/~]  [<][>]
[╯][╰][^][-][=][>][<][@][⊙]
[Д][▽][_][ε][^]  ...
4
6 1 5 2 7
6 8 4 5 5
3 3 3 3 3
2 10 4 9 3
输出样例：
╮(╯▽╰)╭
<(@Д=)/~
o(^ε^)o
Are you kidding me? @\/@
*/
//注意一下下界的限制

#include <iostream>
#include <string>

using namespace std;

int getSign(string t,string a[10])
{
	//[╮][╭][o][~\][/~]  [<][>]
	int idx = 0;
	int num = 0;
	while (idx < t.length())
	{
		if (t[idx] == '[')
		{
			idx++;//[的下一位
			int j = 0;
		    //j为符号长度
			for (int i = idx; t[i] != ']'; i++)
				j++;
			a[num] = t.substr(idx,j);
			num++;
			idx += j;//']'位置
		}
		
		idx++;
	}
	return num;
}

int main()
{
	int num[3] = {0};
	string sign[3][10];
	string tmp[3];
	
	for (int i = 0; i < 3; i++)
	{
		getline(cin, tmp[i]);
		num[i] = getSign(tmp[i], sign[i]);
	}


	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string res;
		bool flag = true;
		int a=0;
		//1
		cin >> a;
		if (a > num[0]||a<1)
			flag = false;
		else
			res += sign[0][a - 1];
		res += "(";
		//2
		cin >> a;
		if (a > num[1] || a<1)
			flag = false;
		else
			res += sign[1][a - 1];
		//3
		cin >> a;
		if (a > num[2] || a<1)
			flag = false;
		else
			res += sign[2][a - 1];
		cin >> a;
		if (a > num[1] || a<1)
			flag = false;
		else
			res += sign[1][a - 1];
		res += ")";
		//5
		cin >> a;
		if (a > num[0] || a<1)
			flag = false;
		else
			res += sign[0][a - 1];

		if (!flag)
			cout << "Are you kidding me? @\\/@" << endl;
		else
			cout << res << endl;
	}

	return 0;
}