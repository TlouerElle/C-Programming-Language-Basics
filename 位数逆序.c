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
	
	printf("��һ��%dλ��\n",b);
	printf("������Ϊ%d\n",c);
	return 0;
	
}