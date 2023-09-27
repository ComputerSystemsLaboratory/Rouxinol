#include <stdio.h>
#define N 100
#define M -1
int fib(int);

int array[N];
int main()
{
  int i,n;
  scanf("%d",&n);
  for(i=0;i<N;i++)
    {
      array[i]=M;
    }
  printf("%d\n",fib(n));
}

int fib(int x)
{
  if(x==0||x==1)
    {
      return array[x]=1;
    }
  if(array[x]!=M) return array[x];
  else
    {
     return  array[x]=fib(x-2)+fib(x-1);
    }
}