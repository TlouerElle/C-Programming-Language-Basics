#include <stdio.h>
int main()
{
	float sum=0;
	int a[5][5];
	int v[5];
	printf("提示：请依次输入学号成绩用空格分开，输完之后按空格\n");
	printf("（学号 成绩 成绩 成绩+回车键）\n");
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
	printf("学号 成绩1 成绩2 成绩3 平均分\n");
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