/*
������ͼ��¼ĳ��ϵͳȴ��������ʱ��ϵͳһ��ֻ�������㳢�����޶�Σ��������������ʱ���˺žͻᱻ���������������ʵ�����С���ܡ�
�����ʽ��
�����ڵ�һ�и���һ�����루���Ȳ�����20�ġ��������ո�Tab���س��ķǿ��ַ�������һ��������N��<= 10�����ֱ�����ȷ�������ϵͳ�����ԵĴ��������ÿ�и���һ���Իس������ķǿ��ַ��������û�������������롣���뱣֤������һ�γ��ԡ�������һ��ֻ�е���#�ַ�ʱ�����������������һ�в����û������롣
�����ʽ��
���û���ÿ�����룬�������ȷ�������ҳ��Դ���������N������һ���������Welcome in��������������
����Ǵ���ģ�����һ���а���ʽ�����Wrong password: �û�����Ĵ������롱��
�������ԴﵽN��ʱ�������һ�С�Account locked��������������
��������1��
Correct%pw 3
correct%pw
Correct@PW
whatisthepassword!
Correct%pw
#
�������1��
Wrong password: correct%pw
Wrong password: Correct@PW
Wrong password: whatisthepassword!
Account locked
��������2��
cool@gplt 3
coolman@gplt
coollady@gplt
cool@gplt
try again
#
�������2��
Wrong password: coolman@gplt
Wrong password: coollady@gplt
Welcome in
*/

//ע�Ⳣ����������пո�
//�����������Ҵﵽ�˳��ԵĴ������������Wrong password�Ǿ���������Account locked�Ǿ�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string psw;
	int N;
	cin >>psw >> N;

	string in;
	int idx = 0;
	getline(cin, in);
	while (in != "#")
	{
		if (in != psw)
		{
			if (!in.empty())
			{
				idx++;
				cout << "Wrong password: " << in << endl;
				if (idx >N-1)
				{
					cout << "Account locked" << endl;
					break;
				}
			}
		}
		else
		{
			cout << "Welcome in" << endl;
			break;
		}
		
		getline(cin, in);
	}

	return 0;
}