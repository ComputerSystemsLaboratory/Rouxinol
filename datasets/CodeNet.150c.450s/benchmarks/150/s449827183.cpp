#include<stdio.h>
#define k 10000

int main()
{
  int C[k+1];
  int i,j,n;

  scanf("%d",&n);

  int A[n+1];
  int B[n+1];


  for(i=0; i<=k; i++){
    C[i] = 0;
  }
  
  for(i=0; i<n; i++){
    scanf("%d",&A[i+1]);
    C[A[i+1]]++;
  }
  
  for(i=1; i<=k; i++){
    C[i] = C[i] + C[i-1];
  }
  
  for(j=n; j>0; j--){
    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }
  
  for(i=1; i<=n-1; i++){
    printf("%d ",B[i]);
  }
  
  printf("%d\n",B[i]);
  
  return 0;
}

