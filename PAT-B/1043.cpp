/*
给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“PATestPATest....”这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。
输入格式：
输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。
输出格式：
在一行中按题目要求输出排序后的字符串。题目保证输出非空。
输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
PATestPATestPTetPTePePee
*/
//hash表。0-P,1-A,2-T,3-e,4-s,5-t

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int hash[6] = { 0 };
	char c[6] = { 'P','A','T','e','s','t' };
	cin >> str;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == 'P')
			hash[0]++;
		else if (str[i] == 'P')
			hash[0]++;
		else if (str[i] == 'A')
			hash[1]++;
		else if (str[i] == 'T')
			hash[2]++;
		else if (str[i] == 'e')
			hash[3]++;
		else if (str[i] == 's')
			hash[4]++;
		else if (str[i] == 't')
			hash[5]++;

	int max = 0;
	for (int i = 0; i < 6; i++)
		if (hash[i] > max)
			max = hash[i];

	for(int i=0;i<max;i++)
		for(int j=0;j<6;j++)
			if (hash[j] != 0)
			{
				cout << c[j];
				hash[j] --;
			}
	cout << endl;

	return 0;
}