#include <stdio.h>
int main()
{
	float a,b,c;
	int i=1;
	while(i<6)
	{
		printf("请输入第%d位学生成绩，用空格隔开\n", i);
		scanf("%f%f%f",&a,&b,&c);
		float aver;
		aver=(a+b+c)/3;
		printf("该学生的平均分为%.2f\n",aver);
		i++;
	}
	return 0;
}