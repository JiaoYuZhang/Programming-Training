/*
����Ϊ�˻��һ������f������ʱ�䣬����ֻҪ�ڵ���f֮ǰ�ȵ���clock()�����һ��ʱ�Ӵ����C1����fִ����ɺ��ٵ���clock()�������һ��ʱ�Ӵ����C2��
���λ�õ�ʱ�Ӵ����֮��(C2-C1)����f���������ĵ�ʱ�Ӵ�������ٳ��Գ���CLK_TCK���͵õ�������Ϊ��λ������ʱ�䡣
���ﲻ���򵥼��賣��CLK_TCKΪ100���ָ������⺯��ǰ�����λ�õ�ʱ�Ӵ����������������⺯�����е�ʱ�䡣
�����ʽ��
������һ����˳�����2������C1��C2��ע�����λ�õ�ʱ�Ӵ�����϶�����ͬ����C1 < C2������ȡֵ��[0, 107]��
�����ʽ��
��һ����������⺯�����е�ʱ�䡣����ʱ����밴�ա�hh:mm:ss������2λ�ġ�ʱ:��:�롱����ʽ���������1���ʱ���������뵽�롣
����������
123 4577973
���������
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
	if ((c2 - c1) % CLK_TCK >= 50) //��������
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