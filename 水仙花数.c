#include <stdio.h>                 //求水仙花数
int main()
{
	int i,a,b,c;
	for(i=100;i<1000;i++)       //对于开始i=100，当i小于1000时做循环，执行一次加1
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if ((a*a*a+b*b*b+c*c*c)==i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
