#include<stdio.h>

int main()
{
	int N[50][50] = {};
	int M[300] = {};
	int sum[50] = {};
	int sum1 = 0;
	int a = 0;
	int b = 0;
	int MostemployeeWage = 0;
	int	LowestemployeeWage = 0;
	int result = 0;
	int result1 = 0;
	int y = 0;
	

	scanf_s("%d%d", &b,&a);
	

	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < b;j++)
		{
			scanf_s("%d", &N[i][j]);
		}
		y++;
	}
	printf("\n");
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < b;j++)
		{
			
			sum[i] += N[i][j] ;
			
			sum1 += N[i][j];
		}
	}

	
	

	result = sum1 * 40;
	int p = 0;
	int q = 0;

	printf("\n%d\n", result);
	
	/*for (int i = 0;i < b+1;i++)
	{
		 p = sum[0];
		if (p < sum[i+1])
		{
			p = sum[i+1];
		}
	}
	printf("%d", p*40);
	
	for (int i = 0;i < b-1;i++)
	{
		 q = sum[0];
		if (q >= sum[i+1])
		{
			q = sum[i+1];
		}
	}
	
	
	printf("\n%d", q*40);*/

	return 0;
}