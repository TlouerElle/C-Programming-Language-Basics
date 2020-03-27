#include <stdio.h>

int main()
{ 
    float r, s, v;
    
    printf("半径：");
    scanf("%f", &r);
    
    s=4*3.14159*r*r;
    v=4*3.14159*r*r*r/3;
    
    printf("球的表面积S=%.2f\n", s);
    printf("球的体积v=%.2f\n",v);
    
    return 0;
}
