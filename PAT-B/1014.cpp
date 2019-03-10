/*
大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。
大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，
因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；
第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；
后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。
现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。
输入格式：
输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。
输出格式：
在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。
输入样例：
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm

3485djDkxh4hhG5
2984akDfkkkkgg5dsb
s&hgsfdk
d&Hyscvnm

输出样例：
THU 14:04
*/

#include <iostream>
#include <string>

using namespace std;

string week[7]{
	"SUN",
	"MON",
	"TUE",
	"WED",
	"THU",
	"FRI",
	"SAT"
	
};

int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int idx = 0;
	//find_first_same
	for (; s1[idx] != 0; idx++)
	{
		if (s1[idx] == s2[idx])
			if (s1[idx] >= 'A'&&s1[idx] <= 'G')//注意边界条件
				break;
	}
	int weekday;
	weekday = (s1[idx] - 'A'+1)%7;
	cout << week[weekday]<< " ";

	//find_second_same
	idx++;
	bool flag;
	for (; s1[idx] != 0; idx++)
	{
		if (s1[idx] == s2[idx])
			if (s1[idx] >= 'A'&&s1[idx] <= 'N')
			{
				flag = true;
				break;
			}
			else if (s1[idx] >= '0'&&s1[idx] <= '9')
			{
				flag = false;
				break;
			}
	}
	int hour;
	if (flag)
		hour = s1[idx] - 'A' + 10;
	else
		hour = s1[idx] - '0';
	cout.fill('0');
	cout.width(2);
	cout << hour << ":";

	//find_third_same
	idx = 0;
	for (; s3[idx] != 0; idx++)
	{
		if (s3[idx] == s4[idx])
			if (s3[idx] >= 'A'&&s3[idx] <= 'z')
				break;
	}
	cout.fill('0');
	cout.width(2);
	cout << idx << endl;

	return 0;
}