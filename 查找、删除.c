#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int n,m;
	printf("������n:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		a[i]=rand()%1000;
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("������Ҫ���ҵ�����");
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
		printf("�ҵ���ɾ��:");
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
		printf("����������\n");
	}	
	return 0;
}