/*
给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，然后用第1个数字减第2个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。
例如，我们从6767开始，将得到
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...
现给定任意4位正整数，请编写程序演示到达黑洞的过程。
输入格式：
输入给出一个(0, 10000)区间内的正整数N。
输出格式：
如果N的4位数字全相等，则在一行内输出“N - N = 0000”；否则将计算的每一步在一行内输出，直到6174作为差出现，输出格式见样例。
注意每个数字按4位数格式输出。
输入样例1：
6767
输出样例1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
输入样例2：
2222
输出样例2：
2222 - 2222 = 0000
*/


#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	
	int res = 0;
	while (res != 6174)
	{
		stringstream l,h;
		string L, H;
		//获得四个数字
		int c[4] = { 0 };
		for (int i = 0; i < str.length(); i++)
		{
			c[i] = str[i] - '0';
		}
		//排序获得最大，最小
		sort(c, c + 4);
		for (int i = 0; i < 4; i++)
		{
			l << c[i];
			h << c[3 - i];
		}
		l >> L;
		l.str("");
		h >> H;
		h.str("");
		res = atoi(H.c_str()) - atoi(L.c_str());
		//输出
		if (res != 0)
		{
			cout << H << " - " << L << " = ";
			cout.fill('0');
			cout.width(4);
			cout <<	res << endl;
			str = to_string(res);
		}
		else
		{
			cout << H << " - " << L << " = 0000" << endl;
			break;
		}	
	}

	return 0;
}