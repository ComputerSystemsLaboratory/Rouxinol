#include<stdio.h>

void maxHeapify(int*,int,int);

#define MAX 500001

int main(){
  int H,i,A[MAX];

  scanf("%d",&H);
  for(i=1;i<=H;i++)scanf("%d",&A[i]);

  for(i=H/2;i>=1;i--){
    maxHeapify(A,i,H);
  }
  
  for(i=1;i<=H;i++)printf(" %d",A[i]);
  printf("\n");
  return 0;
}

void maxHeapify(int *A,int i,int H){
  int l,r,largest,a,j;
  l=2*i;
  r=2*i+1;
  if(l<=H&&A[l]>A[i])largest=l;
  else largest=i;
  if(r<=H&&A[r]>A[largest])largest=r;
    
  if(largest!=i){
    a=A[i];
    A[i]=A[largest];
    A[largest]=a;
    maxHeapify(A,largest,H);
  }
}
