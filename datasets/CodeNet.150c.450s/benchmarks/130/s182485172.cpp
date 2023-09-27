#include <stdio.h>
int n,m,i,j;
int A[100][100],B[100],C[100];
int main(){
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf(" %d",&A[i][j]);
    }
  }
  for(i=0;i<m;i++){
    scanf(" %d",&B[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      C[i]+=A[i][j]*B[j];
    }
    printf("%d\n",C[i]);
  }
  return 0;
}