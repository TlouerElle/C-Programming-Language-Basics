#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,c;
	srand((unsigned)time(NULL));
	a=rand()%10;
	b=rand()%10;
	printf("Please enter the answer\n");
	printf("%d*%d=",a,b);
	c=a*b;
	int d,i=1;
	scanf("%d",&d);
	while(c!=d)
	{
		i++;
		if(i<4)
		{
			printf("Wrong! Please try again!\n");
		}
		else
		{
			printf("Wrong! You have tried there times! Test over!\n");
			break;
		}
		scanf("%d",&d);
	}
	if(c==d)
	{
		printf("Right\n");
	}
	return 0;	
}

