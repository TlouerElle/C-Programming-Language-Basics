#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	float x1, x2, d;
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	
	if (d<0) {
		printf("�˷�����ʵ����\n"); 
	}
	
	else {
		printf("������̵��������ֱ�Ϊx1=%.0f, x2=%.0f",x1, x2);
	}
	return 0;
	
}
