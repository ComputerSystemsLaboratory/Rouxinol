#include<stdio.h>
#include<stdlib.h>
#define N 2000000
#define MAX 10000

void CountingSort(int *,int *,int);

int main(){
  int n,i; 
  int *A,*B;
  
  
  scanf("%d",&n);
  
  A = (int *)malloc(n * sizeof(int));
  B = (int *)malloc(n * sizeof(int));
  
  for(i=0; i<n; i++) scanf("%d",&A[i]);
  
  CountingSort(A,B,n);
  
  for(i=0; i<n-1; i++) printf("%d ",B[i]);
  printf("%d\n",B[i]);
  
  free(A);
  free(B);
  
  return 0;
}

void CountingSort(int *A,int *B,int k){
  int i;
  int C[MAX];
  
  for(i=0; i<MAX; i++) C[i]=0; 
  
  for(i=0; i<k; i++) C[A[i]]++;
  
  for(i=1; i<MAX; i++) C[i]+=C[i-1];
  
  for(i=k-1; i>=0; i--){
  C[A[i]]--;
    B[C[A[i]]] = A[i];

  }
}