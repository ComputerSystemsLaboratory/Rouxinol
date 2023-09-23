#include <stdio.h>
int main(void){
  int n,m,i,j,a[100]={0};
  scanf("%d %d",&n,&m);
  int A[n][m],b[m];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf(" %d",&A[i][j]);
    }
  }
  for(i=0;i<m;i++){
    scanf(" %d",&b[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      a[i]+=A[i][j]*b[j];
    }
  }
  for(i=0;i<n;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}