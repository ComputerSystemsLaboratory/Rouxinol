#include<stdio.h>

int main(){
  int x,y;
  int i,j,k;
  scanf("%d %d",&x,&y);
  int a[x][y];
  int b[y];
  int sum[x];
  for(i=0;i<x;i++){
    sum[i]=0;
    for(j=0;j<y;j++){
        scanf("%d",&a[i][j]);
    }
  }
  for(j=0;j<y;j++){
    scanf("%d",&b[j]);
    for(i=0;i<x;i++){
      sum[i] += a[i][j]*b[j];
    }
  }
  for(i=0;i<x;i++){
    printf("%d\n",sum[i]);
  }
  return 0;
}