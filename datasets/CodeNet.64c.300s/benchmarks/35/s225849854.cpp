#include <stdio.h>
#define N 101

int main() {

  int n,i,k,l,j,u,a[N][N],v[N];
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++){
      a[i][j] = 0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    while(k>0){
      scanf("%d",&l);
      a[u][l] = 1;
      k--;
    }
  }

  for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++){
      if(j == n) {
	printf("%d",a[i][j]);
      }else{
	printf("%d ",a[i][j]);
      }
    }
    printf("\n");
  }

  
  return 0;
}