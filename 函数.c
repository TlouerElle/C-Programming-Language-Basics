#include <stdio.h>

long low(int n)
{
	for (int i=1;i<=n;i++)
	{
		int sum=1;
		sum=sum*i;
		return sum;
	}
}

int main()
{
	int m,sum;
	scanf("%d",&m);
	low(m);
	printf("%d!=%d\n",m,sum);
	return 0;
}
