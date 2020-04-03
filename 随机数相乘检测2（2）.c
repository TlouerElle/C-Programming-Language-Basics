#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,c,d;
	srand((unsigned)time(NULL));
	int n=0,i=0;
	while(i<10)
	{
		a=rand()%10;
		b=rand()%10;
		c=a*b;
		printf("Please enter the answer\n");
		printf("%d*%d=",a,b);
		scanf("%d",&d);
		if (c==d)
		{
			printf("Right!\n");
			n++;
			i++;
		}
		else
		{
			printf("Wrong!\n");
			i++;
		}
	}
	printf("共得分：%d分\n正确率：%d%%\n",n*10,n*10);
	return 0;	
}
