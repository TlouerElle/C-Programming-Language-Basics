#include <stdio.h>
int main()
{
	float sum=0;
	int a[5][5];
	int v[5];
	printf("��ʾ������������ѧ�ųɼ��ÿո�ֿ�������֮�󰴿ո�\n");
	printf("��ѧ�� �ɼ� �ɼ� �ɼ�+�س�����\n");
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for (int i=0;i<5;i++)
	{
		for (int j=1;j<4;j++)
		{
			sum+=a[i][j];
		}
		v[i]=sum/3;
		sum=0;
	}

	for (int i=0;i<5;i++)
	{
		a[i][4]=v[i];
	}
	printf("ѧ�� �ɼ�1 �ɼ�2 �ɼ�3 ƽ����\n");
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("%d    ",a[i][j]);
		}
	printf("\n");
	}
	return 0;
}