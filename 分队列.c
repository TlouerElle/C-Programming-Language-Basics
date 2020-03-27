#include <stdio.h>
int main ()
{
	int n,a=-1;
	scanf("%d",&n);
	while(a<n-3){
		a=a+2;
		printf("%d ",a);
	}
	a=a+2;
	printf("%d\n",a);
	return 0;
}
