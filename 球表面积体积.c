#include <stdio.h>

int main()
{ 
    float r, s, v;
    
    printf("�뾶��");
    scanf("%f", &r);
    
    s=4*3.14159*r*r;
    v=4*3.14159*r*r*r/3;
    
    printf("��ı����S=%.2f\n", s);
    printf("������v=%.2f\n",v);
    
    return 0;
}
