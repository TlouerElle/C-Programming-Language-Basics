#include <stdio.h>
int main()
{
	int a,b=0,c;
	printf("������һ������\n");
	scanf("%d",&a);
	c=a;
	do
	{
		a=a/10;
		b=b+1;
	}while(a>0);
	printf("��һ��%dλ��\n",b);

	while(c%10==0)c/=10;
	while(c>0)
	{
		printf("%d", c%10);
		c/=10;
	}
	printf("\n");
	return 0;
}