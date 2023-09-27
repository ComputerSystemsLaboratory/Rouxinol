#include <stdio.h>
int linearsearch(int*,int,int);
#define N 10000

int main()
{
  int i,s,array[N],t,m,sum=0;

  scanf("%d",&s);
  for(i=0;i<s;i++)
    {
      scanf("%d",&array[i]);
    }
  scanf("%d",&t);
  for(i=0;i<t;i++)
    {
      scanf("%d",&m);
      if(linearsearch(array,s,m)) sum++;
    }
  printf("%d\n",sum);
  return 0;
}

int linearsearch(int A[],int x, int key)
{
  int i;
  i=0;
  A[x]=key;
  while(A[i]!=key)
    {
      i++;
      if(i==x) return 0;
    }
  return 1;
}