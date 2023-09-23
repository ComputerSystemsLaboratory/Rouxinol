#include<stdio.h>
int data[101][101];
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&data[i][j]);
      data[n][j]+=data[i][j];
      data[i][m]+=data[i][j];
    }
    data[n][m]+=data[i][m];
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<m;j++){
      printf("%d ",data[i][j]);
    }
    printf("%d\n",data[i][m]);
  }
  return 0;
}