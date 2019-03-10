/*
ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�
����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���������֪����û�г���200������ˣ���������2014��9��6�գ����Գ���200������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���
�����ʽ��
�����ڵ�һ�и���������N��ȡֵ��(0, 105]�����N�У�ÿ�и���1���˵��������ɲ�����5��Ӣ����ĸ��ɵ��ַ��������Լ�����yyyy/mm/dd��������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�
�����ʽ��
��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���
����������
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
���������
3 Tom John
*/
//���Ե�3 ���кϷ�����Ϊ0�����
//���Ե�4 ������

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
	int idx = 0;//���˺����ʵ����
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