#include <stdio.h>

int main()
{
	int a,b,c,t;
	printf("��������������\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=a;
	}
	else{
		t=b;
	}
	if(t>c){
		printf("������Ϊ��%d\n",t);
	}
	else{
		printf("������Ϊ��%d\n",c);
	}
	return 0;
}
