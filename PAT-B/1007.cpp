/*
�����Ƕ��� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������
�ָ�������������N (< 105)������㲻����N���������������Եĸ�����
�����ʽ��ÿ�������������1����������������������N��
�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����
����������
20
���������
4
*/

#include <stdio.h>
#include <math.h>

bool isPrime(int i)
{
	for (int j = 2; j <= sqrt(i); j ++)
		if (i%j == 0)
			return false;
	return true;
}

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int res = 0;
		for (int i = 3; i < N-1; i++)
			if (isPrime(i)&&isPrime(i+2))
				res++;
				
		printf("%d\n", res);
	}
	return 0;
}




/*�ᳬʱ
#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int prime[1000];//������
		int count = 0;
		int res = 0;
		for (int i = 3; i < N+1; i+=2)
		{
			bool t = true;
			for(int j=3;j<=sqrt(i);j+=2)
				if (i%j == 0)
				{
					t = false;
					break;
				}
			if (t)
				prime[count++] = i;	
		}

		for (int i = 0; i < count - 1; i++)
			if ((prime[i + 1] - prime[i]) == 2)
				res++;

		printf("%d\n", res);
	}
	return 0;
}
*/