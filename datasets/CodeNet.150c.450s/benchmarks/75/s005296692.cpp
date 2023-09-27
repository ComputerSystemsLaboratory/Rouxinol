#include <stdio.h>
void buildMaxHeap(int*);
void maxHeapify(int*, int);
int H;
int main(){
  int i,A[500001];
  scanf("%d",&H);
  for(i=1;i<=H;i++)
    scanf("%d",&A[i]);
  buildMaxHeap(A);
  for(i=1;i<=H;i++)
    printf(" %d",A[i]);
  printf("\n");
  return 0;
}
void buildMaxHeap(int* A){
  int i;
  for(i=H/2;i>=1;i--)
    maxHeapify(A, i);
}
void maxHeapify(int*A, int i){
  int l,r,largest,B;
  l=2*i;
  r=2*i+1;
  if(l <=H && A[l]>A[i])
    largest=l;
  else largest = i;
  if(r<=H && A[r]>A[largest])
    largest=r;

  if(largest!=i){
    B=A[i];
    A[i]=A[largest];
    A[largest]=B;
    maxHeapify(A, largest);
  }
}

