#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,c,d;
	srand((unsigned)time(NULL));
	a=rand()%10;
	b=rand()%10;
	printf("%d*%d\n",a,b);
	c=a*b;
	printf("«Î ‰»Î¥∞∏\n");
	scanf("%d",&d);
	if(c!=d){
		printf("Wrong!\n");
	}
	else{
		printf("Right!\n");
	}
	return 0;
	
}

