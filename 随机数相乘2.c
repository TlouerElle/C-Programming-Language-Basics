#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,d;
	float i=0,n=0;
	srand((unsigned)time(NULL));
	char order='Y';
	while(n>-1)
	{
		if(order=='Y')
		{
			a=rand()%10;
			b=rand()%10;
			printf("请输入答案\n");
			printf("%d*%d=",a,b);
			scanf("%d",&d);
			if(a*b!=d)
			{
				printf("Wrong!\n输入‘Y’继续做题，输入‘N’结束运算\n");
				n++;
			}
			else
			{
				printf("Right!\n输入‘Y’继续做题，输入‘N’结束运算\n");
				i++;
			}
		}
		else if(order=='N')
		{
			printf("总共做了%.1f道题\n",n+i);
			printf("总共对了%.1f道题\n",i);
			printf("得了%.1f%%分\n",i/(n+i)*100);
			n=0;
			break;
		}
		order=getchar();
	}
	return 0;	
}
