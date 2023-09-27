#include <stdio.h>
#define N 100000
int parent_key(int);
int left_key(int);
int right_key(int);
int main()
{
  int i,n,A[N+1];
  
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      scanf("%d",&A[i]);
    }
  for(i=1;i<=n;i++)
    {
      printf("node %d: key = %d, ",i,A[i]);
      if(parent_key(i)>=1) printf("parent key = %d, ",A[parent_key(i)]);
      if(left_key(i)<=n) printf("left key = %d, ",A[left_key(i)]);
      if(right_key(i)<=n) printf("right key = %d, ",A[right_key(i)]);
      printf("\n");     
    }
  return 0;
}

int parent_key(int x)
{
  return x/2;
}
int left_key(int x)
{
  return 2*x;
}
int right_key(int x)
{
  return 2*x+1;
}