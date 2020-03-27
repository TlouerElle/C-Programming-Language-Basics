#include <stdio.h>
#include <math.h>

int main()
{ 
    float a, b, c, s, area;
    
    printf("三角形的三条边分别为：\n"); 
    scanf("%f%f%f", &a,&b,&c);
    if (a<b+c,b<a+c,c<a+b)
	{
    	s=(a+b+c)/2.0;
    	area=sqrt(s*(s-a)*(s-b)*(s-c));
    	printf("三角形的面积为%.2f\n", area);
	}
    else
	{
		printf("无法构成三角形\n");
	}
    return 0;
}
