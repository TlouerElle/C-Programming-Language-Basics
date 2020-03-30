#include <stdio.h>
#include <math.h>

int main()
{ 
    float a, b, c, s, area;
    
    printf("三角形的三条边分别为：\n"); 			
    scanf("%f%f%f", &a,&b,&c);
    if (a<b+c,b<a+c,c<a+b)  			//if判断输入的三边是否能够构成三角形
	{
    	s=(a+b+c)/2.0;
    	area=sqrt(s*(s-a)*(s-b)*(s-c));	         //计算三角形面积
    	printf("三角形的面积为%.2f\n", area);
	}
    else
	{
		printf("无法构成三角形\n");
	}
    return 0;
}
