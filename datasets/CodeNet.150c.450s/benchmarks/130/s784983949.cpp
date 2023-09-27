#include<stdio.h>
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  int i,j;
  int a[100][100]={},b[100]={};
  for(i=0;i<n;i++)
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  for(i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++){
    int sum=0;
    for(j=0;j<m;j++){
      sum+=a[i][j]*b[j];
    }
    printf("%d\n",sum);
  }
  return 0;
}
