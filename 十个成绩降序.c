#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[10],t;
	for (int i=0;i<10;i++)
	{
		printf("�������%d������", i+1);
		scanf("%d",&a[i]);
	}
	for (int j=0;j<9;j++)
	{
		for (int i=0;i<9-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for (int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	int n=0;
	for(int i=0;i<10;i++)
	{
		if (a[i]<60)
			{
				n++;
			}
	}
	printf("������%d��\n",n-1);	
	return 0;
}