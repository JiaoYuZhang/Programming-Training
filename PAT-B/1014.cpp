/*
����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm����
����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04����
��Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'�����������ģ�
��2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ����
�������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4���ӡ�
�ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣
�����ʽ��
������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����
�����ʽ��
��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ���д����MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ�����ģ�FRI��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣
����������
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm

3485djDkxh4hhG5
2984akDfkkkkgg5dsb
s&hgsfdk
d&Hyscvnm

���������
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
			if (s1[idx] >= 'A'&&s1[idx] <= 'G')//ע��߽�����
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