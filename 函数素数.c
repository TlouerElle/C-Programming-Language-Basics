#include <stdio.h>
int fun(int x)
{
	int m=1;
	for (int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			m=0;
			return m;break;
		}
	}
	return m;
}

int main()
{ 
	int fun(int x);
	int n;
	for(n=2;n<100;n++)
	{
		if(fun(n)==1)  
    	{
    		printf("%dÊÇËØÊý\n",n);
    	}
	}
	return 0;
}
