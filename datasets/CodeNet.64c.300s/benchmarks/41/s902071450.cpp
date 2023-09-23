#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2000000
int H,A[MAX+1];
void maxHeapify(int);

void maxHeapify(int i){
  int l,r,largest,c;
  l=2*i;
  r=2*i+1;
  
  if(l<=H&&A[l]>A[i]) largest=l;
  else largest=i;
  if(r<=H&&A[r]>A[largest]) largest=r;

  if(largest!=i){
    c=A[i];
    A[i]=A[largest];
    A[largest]=c;
    maxHeapify(largest);
  }
}

int main()
{
  int i;
  
  scanf("%d",&H);

  for(i=1;i<=H;i++){
    scanf("%d",&A[i]);
  }
  
  for(i=H/2;i>=1;i--){
    maxHeapify(i);
  }
  
  for(i=1;i<=H;i++){
    printf(" %d",A[i]);
  }

  printf("\n");
  
  return 0;
}