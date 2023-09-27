#include<stdio.h>
int main( ){
  int n,m,a[100][100]={},b[100]={},c[100]={};
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int x=0;x<m;x++){
    scanf("%d",&b[x]);
  }
  for(int y=0;y<n;y++){
    for(int s=0;s<m;s++){
      c[y]+=a[y][s]*b[s];
    }
    printf("%d\n",c[y]);
  }
  return 0;
}