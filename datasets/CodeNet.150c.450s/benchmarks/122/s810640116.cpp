#include <stdio.h>
#include <stdlib.h>
#define N 3000000
#define INF 1000000

int parent_key(int);
int left_key(int);
int right_key(int);
void BuildMaxHeap();
void maxHeapify(int);
void insert(int);
void HeapIncreaseKey(int,int);
int HeapExtractMax();

int n,A[N+1];
int main()
{
  int key;
  char length[10];
  while(1)
    {
      scanf("%s",length);
      if(length[0]=='e'&&length[1]=='n') break;
      if(length[0]=='i')
	{
	  scanf("%d",&key);
	  insert(key);
	}
      else printf("%d\n",HeapExtractMax());
    }
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

void insert(int x)
{
  n++;
  A[n]=-INF;
  HeapIncreaseKey(n,x);
}

void HeapIncreaseKey(int x,int y)
{
  int escape=0;
  if(y<A[x]) exit(8);
  A[x]=y;
  while(x>1&&A[parent_key(x)]<A[x])
    {
      escape=A[parent_key(x)];
      A[parent_key(x)]=A[x];
      A[x]=escape;
      x=parent_key(x);
    }
}

int HeapExtractMax()
{
  int max=0;
  if(n<1) exit(8);
  max=A[1];
  A[1]=A[n];
  n--;
  maxHeapify(1);
  return max;
}