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
	printf("�������Ҳ��ҵ�x��");
	scanf("%d",&x);
	if(find(a,n,x)==-1)
	{
		printf("�Ҳ�������");
	}
	else//if(find(a,n,x)!=-1)
	{
		printf("�ҵ��˸���");
	}
	return 0;
}