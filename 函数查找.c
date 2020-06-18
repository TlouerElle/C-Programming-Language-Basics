#include <stdio.h>
int find(int a[],int n,int x)
{
	for (int i=0;i<n;i++)
	{
		if(x==a[i]);
		{
			return i;break;
		}
	}
	return -1;
}

int main()
{
	int find(int a[],int n,int x);
	int n,x;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入找查找的x：");
	scanf("%d",&x);
	if(find(a,n,x)==-1)
	{
		printf("找不到该数");
	}
	else//if(find(a,n,x)!=-1)
	{
		printf("找到了该数");
	}
	return 0;
}