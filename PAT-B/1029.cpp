/*
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。
输入格式：
输入在2行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是不超过80个字符的串，由字母A-Z（包括大、小写）、数字0-9、以及下划线“_”（代表空格）组成。题目保证2个字符串均非空。
输出格式：
按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有1个坏键。
输入样例：
7_This_is_a_test
_hs_s_a_es
输出样例：
7TI
*/
/*给一个hash表。用ASCII码表示符号.
'0'-48,
'A'-65,
'_'-95,
','-44,
'.'-46,
'-'-45,
'+'-43,
'a'-97,

'z'-122
*/
//!注意考虑首行无输入
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sample,real;
	int hash[123] = { 0 };
	cin >>sample>>real;
	int idx = 0;//real的数位计数
	for (int i = 0; sample[i] != 0; i++)
	{
		if (sample[i] == real[idx])
			idx++;
		else
		{
			hash[sample[i]] = 1;
			if (sample[i] >= 'a'&&sample[i] <= 'z')
				hash[sample[i] - 32] = 1;
		}
	}

	for (int i = 0; sample[i] != 0; i++)
	{
		if (hash[sample[i]] == 1)
		{
			//不重复输出
			hash[sample[i]] = 0;
			if (sample[i] >= 'a'&& sample[i] <= 'z')
				hash[sample[i] - 32] = 0;
			if (sample[i] >= 'A'&& sample[i] <= 'Z')
				hash[sample[i] + 32] = 0;

			if(sample[i] >= 'a'&&sample[i] <= 'z')
				cout << static_cast<char>(sample[i] -32);
			else
				cout << sample[i];	
		}
	}
	cout << endl;

	return 0;
}
