#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define N 101

int main(){
  int a[N],b[N][N];
  int i,n,k,j,l=0,tmp=0;

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d%d",&a[i-1],&a[i]);
  }

  for(i=1;i<=n;i++){
    b[i][i]=0;
  }
  for(j=2;j<=n;j++){
    for(i=1;i<=n-j+1;i++){
      k=i+j-1;
      b[i][k]=INT_MAX;
      for(l=i;l<=k-1;l++){
        tmp=b[i][l]+b[l+1][k]+a[i-1]*a[l]*a[k];

    if(b[i][k]>tmp){
      b[i][k]=tmp;
    }else{
      b[i][k]=b[i][k];
    }
      }
    }
  }
  printf("%d\n",b[1][n]);
  return 0;
}