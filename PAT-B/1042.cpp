/*
���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��
�����ʽ��
������һ���и���һ�����Ȳ�����1000���ַ������ַ�����ASCII���������ɼ��ַ����ո���ɣ����ٰ���1��Ӣ����ĸ���Իس��������س��������ڣ���
�����ʽ��
��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ�������в��У����������ĸ����С���Ǹ���ĸ��ͳ��ʱ�����ִ�Сд�����Сд��ĸ��
����������
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
���������
e 7
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);

	int hash[26] = { 0 };

	for (int i = 0; str[i] != 0; i++)
		if (str[i] >= 'A'&&str[i] <= 'Z')
			hash[str[i] - 65] ++;
		else if (str[i] >= 'a'&&str[i] <= 'z')
			hash[str[i] - 97] ++;

	int max = 0;
	int ans = 0;
	for(int i=0;i<26;i++)
		if (hash[i] > max)
		{
			max = hash[i];
			ans = i;
		}

	cout << static_cast<char>(ans + 97) << " " << hash[ans] << endl;

	return 0;
}