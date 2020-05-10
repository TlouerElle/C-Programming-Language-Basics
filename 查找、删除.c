#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int n,m;
	printf("请输入n:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		a[i]=rand()%1000;
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("请输入要查找的数：");
	scanf("%d",&m);
	int b=0,c=0;
	for (int i=0;i<n;i++)
	{
		int j;
		j=a[i];
		if(j==m)
		{
			b=i;
			c=i;
		}
	}
	if((b=c))
	{
		printf("找到已删除:");
		for (int i=0;i<b;i++)
		{
			printf("%d ",a[i]);
		}
		for (int i=b+1;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	else
	{
		printf("该数不存在\n");
	}	
	return 0;
}