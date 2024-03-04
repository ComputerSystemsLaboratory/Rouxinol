#include<stdio.h>
int main()
{
  int hill[10],top[3],i,j,flag;

  for(i=0;i<10;i++)
    scanf("%d",&hill[i]);

  for(i=0;i<3;i++)
    top[i]=hill[i];

  for(i=0;i<3;i++)
    {
      for(j=0;j<10;j++)
        if(top[i]<hill[j])
          {
            top[i]=hill[j];
            flag=j;
          }
      hill[flag]=-1;
    }
  printf("%d\n%d\n%d\n",top[0],top[1],top[2]);
  return 0;
}