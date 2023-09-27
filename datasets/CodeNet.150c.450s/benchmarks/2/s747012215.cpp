#include <stdio.h>
#define N 100000
int partition(int,int);

int A[N];
int main()
{
  int i,n,q;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&A[i]);
    }
  q=partition(0,n-1);
  
  for(i=0;i<n;i++)
    {
      if(i!=0) printf(" ");
      if(i==q) printf("[");
      printf("%d",A[i]);
      if(i==q) printf("]");
    }
  printf("\n");
  
  return 0;
}

int partition(int y,int x)
{
  int i,j,n,m;
  n=A[x];
  j=y-1;
  for(i=0;i<x;i++)
    {
      if(A[i]<=n)
	{
	  j++;
	  m=A[j];
	  A[j]=A[i];
	  A[i]=m;  
	}
    }
      m=A[j+1];
      A[j+1]=A[x];
      A[x]=m;
      return j+1;
}