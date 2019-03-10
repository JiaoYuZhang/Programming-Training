/*
本题要求计算A/B，其中A是不超过1000位的正整数，B是1位正整数。你需要输出商数Q和余数R，使得A = B * Q + R成立。
输入格式：
输入在1行中依次给出A和B，中间以1空格分隔。
输出格式：
在1行中依次输出Q和R，中间以1空格分隔。
输入样例：
123456789050987654321 7
输出样例：
17636684150141093474 3
*/
/*
数除法的核心：把除法运算转化为减法运算，根据除法运算的特点，
不停的用除数位首（从除数第一位开始与被除数位数相等的那几位）减去被除数，直到除数位首小于被除数，
将次数保存在数组里，然后在被除数的的前面添一个0继续相减，
按照以上方法继续运算，直到除数位尾（从除数最后一位开始与被除数位数相等的那几位）相减之后即可结束。
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int B;
	string A;
	stringstream Q;
	int R=0; 
	cin >> A >> B;
	
	//注意首位为0
	int tmp=0, numA = 0;
	tmp = A[0] - '0';
	while (tmp >= B)
	{
		tmp -= B;
		numA++;
	}
	if (numA != 0)
		Q << numA;
	R = tmp;

	int i = 1;
	while (i<A.length())
	{
		 tmp = A[i]-'0'+R*10;
		 numA = 0;

		while (tmp >= B)
		{
			tmp -= B;
			numA++;
		}
		Q << numA;
		R = tmp;
		i++;
	}
	//特殊情况：被除数为0
	if (Q.str().length() > 0)
		cout << Q.str() << " " << R << endl;
	else
		cout << "0 " << R <<endl;
	return 0;
}