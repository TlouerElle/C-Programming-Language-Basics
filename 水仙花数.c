#include <stdio.h>
int main()
{
	int i,a,b,c;
	for(i=100;i<1000;i++)       //���ڿ�ʼi=100����iС��1000ʱ��ѭ����ִ��һ�μ�1
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