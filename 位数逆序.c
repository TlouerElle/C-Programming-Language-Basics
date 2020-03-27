#include <stdio.h>
int main()
{
	int a,b=0,c;
	scanf("%d",&a);
	if(a>100){
		c=(a%10)*100+(a%100/10)*10+a/100;
	}
	else{
		c=(a%10)*10+a/10;
	}
	if(a<10){
		c=a;
	}
	do
	{
		a=a/10;
		b=b+1;
	}while(a>0);
	
	printf("是一个%d位数\n",b);
	printf("逆序数为%d\n",c);
	return 0;
	
}