/*
������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��
�ָ���A��DA��B��DB�����д�������PA + PB��
�����ʽ��
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��
�����ʽ��
��һ�������PA + PB��ֵ��
��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
0
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char DA , DB ;
	int PA = 0, PB = 0;
	string A, B;
	cin >> A >> DA >> B >> DB;
	int dA = DA - '0';
	int dB = DB - '0';

	for (int i = 0; A[i] != 0; i++)
		if (A[i] == DA)
			PA = PA * 10 + dA;
	for (int i = 0; B[i] != 0; i++)
		if (B[i] == DB)
			PB = PB * 10 + dB;

	cout << PA + PB << endl;

	return 0;
}