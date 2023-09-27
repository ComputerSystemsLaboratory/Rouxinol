#include <stdio.h>
#define N 10000
int A[2000001],C[N],B[2000001];
int main(){

  
  int n, i, j;
  scanf("%d", &n);

  for (i=0;i<=N;i++)
    C[i]=0;

  for (i=0;i<n;i++){
    scanf("%d",&A[i+1]);
    C[A[i+1]]++;
  }

  for (i=1;i<=N;i++)
    C[i]=C[i]+C[i-1];

  for (j=1;j<=n;j++){
    B[C[A[j]]]=A[j];
    C[A[j]]--;
  }

  for (i=1;i<=n;i++){
    if (i>1) printf(" ");
    printf("%d",B[i]);
  }
  printf("\n");

  return 0;
}