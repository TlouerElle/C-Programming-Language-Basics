#include <stdio.h>
int main()
{
	float a,b,c;
	int i=1;
	while(i<6)
	{
		printf("�������%dλѧ���ɼ����ÿո����\n", i);
		scanf("%f%f%f",&a,&b,&c);
		float aver;
		aver=(a+b+c)/3;
		printf("��ѧ����ƽ����Ϊ%.2f\n",aver);
		i++;
	}
	return 0;
}