/*
科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，其满足正则表达式[+-][1-9]"."[0-9]+E[+-][0-9]+，
即数字的整数部分只有1位，小数部分至少有1位，该数字及其指数部分的正负号即使对正数也必定明确给出。
现以科学计数法的格式给出实数A，请编写程序按普通数字表示法输出A，并保证所有有效位都被保留。
输入格式：
每个输入包含1个测试用例，即一个以科学计数法表示的实数A。该数字的存储长度不超过9999字节，且其指数的绝对值不超过9999。
输出格式：
对每个测试用例，在一行中按普通数字表示法输出A，并保证所有有效位都被保留，包括末尾的0。
输入样例1：
+1.23400E-03
输出样例1：
0.00123400
输入样例2：
-1.2E+10
输出样例2：
-12000000000
*/


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	stringstream res,tmp;
	int idx = 0;
	cin >> s;
	//首位符号
	if (s[idx] == '-')
		res << s[idx];
	idx++;
	//整数位
	tmp << s[idx];
	//小数位
	idx += 2;
	while (s[idx] != 'E')
	{
		tmp << s[idx];
		idx++;
	}
	//指数部分
	idx++;
	if (s[idx] == '+')
	{
		idx++;
		string e;
		e = s.substr(idx);
		//右侧补零
		int n;
		n = atoi(e.c_str())+1;
		if (n >= tmp.str().length())
		{
			res << tmp.str();
			for (int i = 0; i < n- tmp.str().length(); i++)
				res << '0';
		}
		else
		{
			res << tmp.str().substr(0, n) << '.' << tmp.str().substr(n);
		}
		
	}
	else
	{
		idx++;
		string e;
		e = s.substr(idx);
		//左侧补零
		int n;
		n = atoi(e.c_str()) - 1;
		if (n > 0)
		{
			res << "0.";
			for (int i = 0; i < n; i++)
				res << '0';
			res << tmp.str();
		}
		else
		{
			res << tmp.str().substr(0, 1) << '.' << tmp.str().substr(1);
		}
		
	}

	cout << res.str() << endl;
	return 0;
}