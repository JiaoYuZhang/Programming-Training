/*
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��
�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
����������
1234567890987654321123456789
���������
yi san wu
*/

#include <iostream>
#include <string>
using namespace std;

char spell[10][20] = {
	"ling",
	"yi",
	"er",
	"san",
	"si",
	"wu",
	"liu",
	"qi",
	"ba",
	"jiu"
};

int main()
{
	string str;
	char num[101] = {'0'};
	int sum = 0;
	//����
	cin >> str;
	//�ۼ�
	for (int i = 0; i <str.length(); i++)
		sum += (str[i] - '0');
	//��͵ĸ�λ��
	int ans[100];
	int count = 0;
	while (sum != 0)
	{
		ans[count] = sum % 10;
		sum /= 10;
		count++;
	}
	//���
	for (int i = count - 1; i >= 1; i--)
		cout << spell[ans[i]] << " ";
	cout << spell[ans[0]] << endl;

	return 0;
}