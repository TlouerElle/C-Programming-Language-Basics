#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[9],n,m;     				
	for (int i=0;i<10;i++)
	{
		printf("请输入第%d个数：", i+1);
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for (int i=0;i<10;i++)
	{
		if (max<a[i])
		{
			max=a[i];
			n=i+1;	
		}
		else
		{
			max=max;
		}
		if (min<a[i])
		{
			min=min;
		}
		else
		{
			min=a[i];
			m=i+1;
		}
	}
	printf("最大值为%d,是第%d个数\n",max,n);
	printf("最小值为%d,是第%d个数\n",min,m);
	return 0;
}
