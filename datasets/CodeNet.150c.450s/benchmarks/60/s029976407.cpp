#include <stdio.h>
#define N 101

int main(){

  int u,k,i,j,v,n;
  int a[N][N];
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      a[u-1][v-1]=1;
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d ",a[i][j]);
    }
    printf("%d\n",a[i][n-1]);
  }

  return 0;

}
  