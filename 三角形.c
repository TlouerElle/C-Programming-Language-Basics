#include <stdio.h>
#include <math.h>

int main()
{ 
    float a, b, c, s, area;
    
    printf("�����ε������߷ֱ�Ϊ��\n"); 
    scanf("%f%f%f", &a,&b,&c);
    if (a<b+c,b<a+c,c<a+b)
	{
    	s=(a+b+c)/2.0;
    	area=sqrt(s*(s-a)*(s-b)*(s-c));
    	printf("�����ε����Ϊ%.2f\n", area);
	}
    else
	{
		printf("�޷�����������\n");
	}
    return 0;
}
