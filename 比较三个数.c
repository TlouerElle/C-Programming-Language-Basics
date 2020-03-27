#include <stdio.h>

int main()
{
	int a,b,c,t;
	printf("请输入三个数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=a;
	}
	else{
		t=b;
	}
	if(t>c){
		printf("最大的数为：%d\n",t);
	}
	else{
		printf("最大的数为：%d\n",c);
	}
	return 0;
}
