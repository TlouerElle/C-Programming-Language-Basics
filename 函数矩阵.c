#include <stdio.h>
void mymax(int a[3][4])
{
	int max;
	max=a[0][0];
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			else
			{
				max=max;
			}
		}
	}
	printf("������Ϊ%d",max);
}
int main()
{
	printf("�������������е�����\n");
	int a[3][4];
	void mymax(int a[3][4]);
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	mymax(a);
	return 0;
}