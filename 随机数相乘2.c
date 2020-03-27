#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,d,i=0,n=0;
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
				printf("Wrong!\n");
				n++;
			}
			else
			{
				printf("Right!\n");
				i++;
			}
		}
		else if(order=='N')
		{
			printf("总共做了%d道题\n",n+i);
			printf("总共对了%d道题\n",i);
			printf("得了%d分\n",i);
			n=0;
		}
		order=getchar();
	}
	return 0;	
}