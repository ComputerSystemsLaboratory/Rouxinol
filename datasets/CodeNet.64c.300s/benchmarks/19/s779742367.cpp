#include<stdio.h>

int main(void)
{
  int a[5010]={};
  int tr;
  int i,j;
  int n;
  int max;

  for(scanf("%d",&n);n;scanf("%d",&n))
    {
      for(i=0;i<5010;i++)a[i]=0;
      max=0x80000000;
      for(i=1;i<=n;i++)
        {
          scanf("%d",&tr);
          a[i]=a[i-1]+tr;
        }
      for(i=0;i<n;i++)
        for(j=i+1;j<=n;j++)
          {
            tr=a[j]-a[i];
            if(max<tr)
              max=tr;
          }
      printf("%d\n",max);
    }

}