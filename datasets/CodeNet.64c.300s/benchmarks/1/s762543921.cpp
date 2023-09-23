#include <stdio.h>
#include <stdlib.h>

int partition(int *);

int n;

int main(){
  int i,x;
  int *A;

  scanf("%d",&n);

  A = (int *)malloc(sizeof(int)*n);

  for(i = 0; i < n; i++)
    scanf("%d",&A[i]);

  x =  partition(A);

  for(i = 0; i < n; i++){
    if(i == n-1) printf("%d",A[i]);
    else{
    if(i == x) printf("[%d] ",A[i]);
    else printf("%d ",A[i]);
    }
  }
  printf("\n");

  return 0;
}

int partition(int *A)
{
  int x,i,j,k=0,num;

  x = A[n-1];
  i = -1;
  j = 0;

  while(k != n){
    if(A[j] > x) j++;
    else if(A[j] <= x){
      i++;
      num = A[i];
      A[i] = A[j];
      A[j] = num;
      j++;
    }
    k++;
  }
  return i;
}


	