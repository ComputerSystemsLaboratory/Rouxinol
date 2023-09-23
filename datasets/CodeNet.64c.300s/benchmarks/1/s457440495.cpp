#include <stdio.h>
#include <stdlib.h>
#define N 100001
#define MAX 100001

int A[MAX];

int partition(int p, int r){
  int x,i,j,kari;
  x = A[r];
  i = p - 1;
  for(j=p; j<r; j++){
    if(A[j] <= x){
      i++;
      kari = A[i];
      A[i] = A[j];
      A[j] = kari;
    }
  }
    kari = A[i+1];
    A[i+1] = A[r];
    A[r] = kari;
  
  return i+1;
}

int main(){
  int i,num,base;
  scanf("%d",&num);
  for(i=0; i<num; i++) scanf("%d",&A[i]);
  base = partition(0,num-1);

  for(i=0; i<num; i++){
    if(i == base) printf("[");
    printf("%d",A[i]);
    if(i == base) printf("]");
    if(i!=num-1) printf(" ");
  }
  printf("\n");

  return 0;

}