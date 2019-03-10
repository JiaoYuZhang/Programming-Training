/*
�δ�ʷѧ��˾����ڡ�����ͨ��������һ�������ġ��²��ۡ������ǹʲŵ�ȫ��ν֮ʥ�ˣ��ŵ¼���ν֮���ˣ���ʤ��ν֮���ӣ���ʤ��ν֮С�ˡ���ȡ��֮����������ʥ�ˣ����Ӷ���֮�������С�ˣ����������ˡ���
�ָ���һ�������ĵ²ŷ����������˾�������۸���¼ȡ������
�����ʽ��
�����1�и���3�����������ֱ�Ϊ��
N��<=105����������������
L��>=60����Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־�������L�Ŀ��������ʸ񱻿���¼ȡ��
H��<100����Ϊ����¼ȡ�ߡ����·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸߵ�������
          �ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
		  �²ŷ־�����H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
		  �����ﵽ�����L�Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��
���N�У�ÿ�и���һλ��������Ϣ��������׼��֤�š��·֡��ŷ֣�����׼��֤��Ϊ8λ�������²ŷ�Ϊ����[0, 100]�ڵ����������ּ��Կո�ָ���

�����ʽ��
�����1�����ȸ����ﵽ��ͷ����ߵĿ�������M�����M�У�ÿ�а��������ʽ���һλ��������Ϣ��������������˵���Ĺ���Ӹߵ�������
��ĳ�࿼�����ж����ܷ���ͬʱ������·ֽ������У����·�Ҳ���У���׼��֤�ŵ����������
����������
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
���������
12
10000013 90 99
10000012 80 100
10000003 85 80
10000011 85 80
10000004 80 85
10000007 90 78
10000006 83 76
10000005 82 77
10000002 90 60
10000014 66 60
10000008 75 79
10000001 64 90
*/
//Ҫ��scanf��printf,����ʱ

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Stu
{
	char num[25];
	int moral;
	int talent;

	bool operator > (const Stu &b) const
	{
		if ((moral+talent) != (b.moral+b.talent))
			return (moral + talent) > (b.moral + b.talent);
		else if (moral != b.moral)
			return moral > b.moral;
		else
			return strcmp(num,b.num) < 0;
	}
};
bool cmp(Stu &a, Stu &b)
{
	return a > b;
}

int main()
{
	int N,L,H;
	scanf("%d%d%d", &N, &L, &H);
	//cin >> N >> L >> H;

	//�ȷ���
	vector<Stu> rank[4];
	int idx = 0;
	for (int i = 0; i < N; i++)
	{
		Stu tmp;
		scanf("%s%d%d", tmp.num, &tmp.moral, &tmp.talent);

		if (tmp.moral >= L && tmp.talent >= L)
		{
			idx++;
			if (tmp.moral >= H && tmp.talent >= H)
				rank[0].push_back(tmp);
			else if (tmp.moral >= H)
				rank[1].push_back(tmp);
			else if (tmp.moral >= tmp.talent)
				rank[2].push_back(tmp);
			else
				rank[3].push_back(tmp);
		}

	}

	//���������
	printf("%d\n", idx);
	//cout << idx << endl;
	for (int i = 0; i < 4; i++) 
	{
		sort(rank[i].begin(), rank[i].end(),cmp);
		vector<Stu>::iterator iter;
		for (iter = rank[i].begin(); iter != rank[i].end(); iter ++)
			printf("%s %d %d\n", iter->num, iter->moral, iter->talent);
			//cout << rank[i][j].num << " " << rank[i][j].moral << " " << rank[i][j].talent << endl;
	}
	
	return 0;
}