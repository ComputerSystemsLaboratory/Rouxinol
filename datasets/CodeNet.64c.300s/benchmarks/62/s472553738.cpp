#include<stdio.h>

int main(){
  int a[100][100],b[100],i,j,n,m;

  scanf("%d %d",&n,&m);

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);

  for(i=0;i<m;i++)
    scanf("%d",&b[i]);

  int c[100];

  for(i=0;i<n;i++)
    c[i]=0;

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      c[i]+=a[i][j]*b[j];

  for(i=0;i<n;i++)
    printf("%d\n",c[i]);

  return 0;
}