#include <stdio.h>
void main()
{
	int a,b,c;
	char op;
	printf("请输入等式按Enter键结束计算\n");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+': c=a+b;
		printf("%d%c%d=%d",a,op,b,c);
		break;
		case '-': c=a-b;
		printf("%d%c%d=%d",a,op,b,c);
		break;
		case '*': c =a*b;
		printf("%d%c%d=%d",a,op,b,c);
		break;
		case '/': c=a/b;
		printf("%d%c%d=%d\n",a,op,b,c);
		break;
		default:
		printf("错误\n");
	}	
	return 0;
}
