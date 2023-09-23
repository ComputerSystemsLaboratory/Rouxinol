#include<stdio.h>

#define N 100

int main()
{
  int i,j,key,n,l;
  int A[N];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%d",&A[i]);
  }
  for(l = 0 ; l < n - 1 ; l++){
    printf("%d ",A[l]);
  }
  printf("%d\n",A[n-1]);

  for(i = 1 ; i <= n-1 ; i++){
    key = A[i];
    j = i - 1;

    while(j >= 0 && A[j] > key){
      A[j + 1] = A[j];
      j--;
      A[j + 1] = key;
    }
      for(l = 0 ; l < n-1 ; l++){
	printf("%d ",A[l]);
      }
      printf("%d\n",A[n-1]);
  
    }
  return 0;
}