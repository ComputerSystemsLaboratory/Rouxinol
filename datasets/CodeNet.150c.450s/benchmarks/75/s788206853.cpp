#include <stdio.h>
#define N 1000000
int left_key(int);
int right_key(int);
void maxHeapify(int);

int n,A[N+1];
int main()
{
  int i;
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
    {
      scanf("%d",&A[i]);
    }
  
  for(i=n/2;i>=1;i--) //???????????°?????????????????§???n/2
    {
      maxHeapify(i);
    }
  
  for(i=1;i<=n;i++)
    {
      printf(" %d",A[i]);
    }
  
  printf("\n");
  return 0;
}
void maxHeapify(int x)
{
  int l=0,r=0,largest=0;
  int es_largest=0; //??\???????????????????????¨???
  l=left_key(x);
  r=right_key(x);
  
  if(l<=n&&A[l]>A[x]) largest=l;
  else largest=x;
  
  if(r<=n&&A[r]>A[largest]) largest=r;
  
  if(largest!=x)
    {
      es_largest=A[largest];
      A[largest]=A[x];
      A[x]=es_largest;
      maxHeapify(largest);
    }
} 

int left_key(int x)
{
  return 2*x;
}
int right_key(int x)
{
  return 2*x+1;
}