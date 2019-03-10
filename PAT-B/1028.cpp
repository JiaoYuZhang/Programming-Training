/*
某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。
这里确保每个输入的日期都是合法的，但不一定是合理的——假设已知镇上没有超过200岁的老人，而今天是2014年9月6日，所以超过200岁的生日和未出生的生日都是不合理的，应该被过滤掉。
输入格式：
输入在第一行给出正整数N，取值在(0, 105]；随后N行，每行给出1个人的姓名（由不超过5个英文字母组成的字符串）、以及按“yyyy/mm/dd”（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。
输出格式：
在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
输入样例：
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
输出样例：
3 Tom John
*/
//测试点3 特判合法输入为0的情况
//测试点4 ？？？

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Birth
{
	string name;
	int y, m, d;

	bool operator<(const Birth b) const
	{
		if (this->y != b.y)
			return this->y < b.y;
		else if (this->m != b.m)
			return this->m < b.m;
		else if (this->d != b.d)
			return this->d < b.d;
		else 
			return false;
	}
	bool operator>(const Birth b) const
	{
		if (this->y != b.y)
			return this->y > b.y;
		else if (this->m != b.m)
			return this->m > b.m;
		else if (this->d != b.d)
			return this->d > b.d;
		else
			return false;
	}
};

int main()
{
	int N;
	cin >> N;
	Birth birth[105];
	Birth MIN = { "a",1814,9,5 };
	Birth MAX = { "a",2014,9,7 };
	int idx = 0;//过滤后的真实人数
	for (int i = 0; i < N; i++)
	{
		cin >> birth[idx].name;
		scanf("%4d/%2d/%2d",  &birth[idx].y, &birth[idx].m, &birth[idx].d);
		if (birth[idx]>MIN&&birth[idx]<MAX)
			idx++;
	}

	sort(birth, birth + idx);

	if (idx != 0)
		cout << idx << " " << birth[0].name << " " << birth[idx-1].name << endl;
	else
		cout << "0" << endl;

	return 0;
}