/*
�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡����ڸ���Ӧ�������һ�����֡��Լ�ʵ�ʱ���������֣������г��϶���������Щ����
�����ʽ��
������2���зֱ����Ӧ����������֡��Լ�ʵ�ʱ���������֡�ÿ�������ǲ�����80���ַ��Ĵ�������ĸA-Z��������Сд��������0-9���Լ��»��ߡ�_��������ո���ɡ���Ŀ��֤2���ַ������ǿա�
�����ʽ��
���շ���˳����һ������������ļ�������Ӣ����ĸֻ�����д��ÿ������ֻ���һ�Ρ���Ŀ��֤������1��������
����������
7_This_is_a_test
_hs_s_a_es
���������
7TI
*/
/*��һ��hash����ASCII���ʾ����.
'0'-48,
'A'-65,
'_'-95,
','-44,
'.'-46,
'-'-45,
'+'-43,
'a'-97,

'z'-122
*/
//!ע�⿼������������
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sample,real;
	int hash[123] = { 0 };
	cin >>sample>>real;
	int idx = 0;//real����λ����
	for (int i = 0; sample[i] != 0; i++)
	{
		if (sample[i] == real[idx])
			idx++;
		else
		{
			hash[sample[i]] = 1;
			if (sample[i] >= 'a'&&sample[i] <= 'z')
				hash[sample[i] - 32] = 1;
		}
	}

	for (int i = 0; sample[i] != 0; i++)
	{
		if (hash[sample[i]] == 1)
		{
			//���ظ����
			hash[sample[i]] = 0;
			if (sample[i] >= 'a'&& sample[i] <= 'z')
				hash[sample[i] - 32] = 0;
			if (sample[i] >= 'A'&& sample[i] <= 'Z')
				hash[sample[i] + 32] = 0;

			if(sample[i] >= 'a'&&sample[i] <= 'z')
				cout << static_cast<char>(sample[i] -32);
			else
				cout << sample[i];	
		}
	}
	cout << endl;

	return 0;
}
