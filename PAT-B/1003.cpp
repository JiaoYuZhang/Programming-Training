/*
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�
�õ�������ȷ���������ǣ�
1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�

�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������
������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�
�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��
����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO
*/

/*
������
��Ҫ�뵱Ȼ����Ŀ����˼��
PAT           pǰ����0��A,pt֮����1��A��T ������0��A,  0*1=0   ��ȷ
PAAT          pǰ����0��A,pt֮����2��A��T ������0��A,  0*2=0   ��ȷ
AAPATAA       pǰ����2��A,pt֮����1��A��T ������2��A,  2*1=2   ��ȷ
AAPAATAAAA    pǰ����2��A,pt֮����2��A��T ������2��A,  2*2=4   ��ȷ
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		int a = 0, b = 0, c = 0;
		bool flag = true;
		
		//��P��T
		int p = str.find("P");
		if (p == -1)
			flag = false;
		int t = str.find("T");
		if (t == -1)
			flag = false;

		//��������A���������������ַ����
		if (flag)
		{
			int j = 0;
			for (; j < p; j++)
				if (str[j] == 'A')
					a++;
				else
				{
					flag = false;
					break;
				}
			for (++j; j < t; j++)
				if (str[j] == 'A')
					b++;
				else
				{
					flag = false;
					break;
				}
			for (++j; j < str.length(); j++)
				if (str[j] == 'A')
					c++;
				else
				{
					flag = false;
					break;
				}
		}
		//��֤��A����A�ĸ������Ϲ���
		if (c != a*b || b < 1)
			flag = false;

		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}