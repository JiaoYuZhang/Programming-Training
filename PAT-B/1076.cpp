/*
下面是微博上流传的一张照片：“各位亲爱的同学们，鉴于大家有时需要使用wifi，又怕耽误亲们的学习，
现将wifi密码设置为下列数学题答案：A-1；B-2；C-3；D-4；
输入格式：
输入第一行给出一个正整数N（<= 100），随后N行，每行按照“编号-答案”的格式给出一道题的4个选项，
“T”表示正确选项，“F”表示错误选项。选项间用空格分隔。
输出格式：
在一行中输出wifi密码。
输入样例：
8
A-T B-F C-F D-F
C-T B-F A-F D-F
A-F D-F C-F B-T
B-T A-F C-F D-F
B-F D-T A-F C-F
A-T C-F B-F D-F
D-T B-F C-F A-F
C-T A-F B-F D-F
输出样例：
13224143
*/


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	stringstream  stream;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j<4 ; j++)
		{
			string str;
			cin >> str;
			if (str[2] == 'T')
				stream << str[0] - 'A' + 1;
			else
				continue;
		}
	}
		
	cout << stream.str()<< endl;

	return 0;
}