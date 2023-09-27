#include <stdio.h>

void insertionsort(int* A, int n){
  int i, j;
  for(i = 1; i < n; i++){
    int k;
    for(k = 0; k < n; k++){
      printf("%d", A[k]);
      if(k == n-1) printf("\n");
      else printf(" ");
    }
    j = i-1;
    while(j >= 0){
      if(A[j] > A[j+1]){
        int tmp = A[j+1];
        A[j+1] = A[j];
        A[j] = tmp;
        j--;
      }else{
        break;
      }
    }
  }
}

int main(void){
  int i;
  int n;
  int A[100];
  scanf("%d", &n);
  for(i = 0; i < n; i++) scanf("%d", &A[i]);

  insertionsort(A, n);

  for(i = 0; i < n-1; i++) printf("%d ", A[i]);
  printf("%d\n", A[n-1]);
  return 0;
}