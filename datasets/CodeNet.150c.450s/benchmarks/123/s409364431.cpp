#include <stdio.h>
#include <math.h>
int PNjudge(int);
#define N 10000
int main()
{
  int i,a,flag=0,count=0;
  int array[N];

  scanf("%d",&a);
  for(i=0;i<a;i++)
    {
      scanf("%d",&array[i]);
      flag=PNjudge(array[i]);
      if(flag) count++;
    }
  printf("%d\n",count);
  return 0;
}

int PNjudge(int x)
{
  int i=0;
  if(x==2) return 1;
  if(x<2||x%2==0) return 0;
  for(i=3;i<=sqrt(x);i=i+2)
    {
      if(x%i==0) return 0;
    }
  return 1;
}