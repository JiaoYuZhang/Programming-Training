/*
于是为了获得一个函数f的运行时间，我们只要在调用f之前先调用clock()，获得一个时钟打点数C1；在f执行完成后再调用clock()，获得另一个时钟打点数C2；
两次获得的时钟打点数之差(C2-C1)就是f运行所消耗的时钟打点数，再除以常数CLK_TCK，就得到了以秒为单位的运行时间。
这里不妨简单假设常数CLK_TCK为100。现给定被测函数前后两次获得的时钟打点数，请你给出被测函数运行的时间。
输入格式：
输入在一行中顺序给出2个整数C1和C2。注意两次获得的时钟打点数肯定不相同，即C1 < C2，并且取值在[0, 107]。
输出格式：
在一行中输出被测函数运行的时间。运行时间必须按照“hh:mm:ss”（即2位的“时:分:秒”）格式输出；不足1秒的时间四舍五入到秒。
输入样例：
123 4577973
输出样例：
12:42:59
*/

#include <iostream>

using namespace std;

#define CLK_TCK 100

int main()
{
	long c1, c2,c;
	long h, m, s;

	cin >> c1 >> c2;
	c = (c2 - c1) / CLK_TCK;
	if ((c2 - c1) % CLK_TCK >= 50) //四舍五入
		c++;

	s = c % 60;
	c /= 60;
	m = c % 60;
	h= c/ 60;

	cout.fill('0');
	cout.width(2);
	cout << h << ":";
	cout.fill('0');
	cout.width(2);
	cout << m << ":";
	cout.fill('0');
	cout.width(2);
	cout << s << endl;
	return 0;
}