#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[9];     				
	int max=0,min=10000;
	for (int i=0;i<10;i++)
	{
		printf("请输入第%d个数：", i+1);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<10;i++)
	{
		if (max<a[i])
		{
			max=a[i];	
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
		}
	}
	printf("最大值为%d\n",max);
	printf("最小值为%d\n",min);
	return 0;
}