#include<stdio.h>
 
int main(){
  int i,j,n,u,k,v;
  int data[101][101];
  scanf("%d",&n);
  for( i = 1; i <= n; i++){
    for( j = 1; j <= n; j++){
      data[i][j]=0;
      }
  }
  for(i = 0; i < n; i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      data[u][v]=1;
    }
  }
 
  for(i = 1;i <=n;i++ ){
    for(j = 1; j <=n;j++){
      if(j==n){
    printf("%d",data[i][j]);
      }else{
    printf("%d ",data[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}