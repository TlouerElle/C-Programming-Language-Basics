#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int a[],int n)
{
 	int t;
 	srand((unsigned)time(NULL));
 	for (int i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}

	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for (int j=0;j<n;j++)
	{
		for (int i=0;i<n-1-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
 }
int main()
{
	int n;
	int a[n];
	void sort(int a[],int n);
	printf("ÇëÊäÈën=");
	scanf("%d",&n);
	sort(a,n);
	return 0; 
}