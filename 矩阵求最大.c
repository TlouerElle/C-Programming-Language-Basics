#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand((unsigned)time(NULL));
  int a[4][4];
  int max=a[0][0],row,colum;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      a[i][j]=rand()%100;
    }
  }
  printf("数组为：\n");
  for(int i=0;i<4;i++)
 	{
    for(int j=0;j<4;j++)
		{
      printf("%4d",a[i][j]);
		}
    printf("\n");
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(a[i][j]>max)
      {
        max=a[i][j];
        row=i+1;
        colum=j+1;
      }
    }
  }
  printf("最大值为：%d;行号为：%d，列号为：%d",max,row,colum);
  return 0;
}

