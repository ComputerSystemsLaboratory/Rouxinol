#include <stdio.h>

int A[101][101];

void chain(int n, int *x){
  int i, j, k, l;
  
  for(i=1; i<n+1; i++)
    A[i][i] = 0;
    
  for(i=2; i<n+1; i++){
    for(j=1; j<n-i+2; j++){
      l = i+j-1;
      A[j][l] = 100000000;
      for(k=j; k<l; k++){
        if(A[j][l] > A[j][k]+A[k+1][l]+x[j-1]*x[k]*x[l])
          A[j][l] = A[j][k]+A[k+1][l]+x[j-1]*x[k]*x[l];
      }
    }
  }
}

int main(){
  int i,n;
  int x[101];
  
  scanf("%d", &n);
  
  for(i=1; i<n+1; i++)
    scanf("%d%d", &x[i-1], &x[i]);
    
  chain(n, x);
  printf("%d\n", A[1][n]);
  
  return 0;
}