#include <stdio.h>
#include <limits.h>
int main(){
  int n,p[101],i,j,k,l,x,m[101][101];
  scanf("%d",&n);
  for(i=1;i<=n;i++)scanf("%d %d",&p[i-1],&p[i]);
  for(i=1;i<=n;i++)m[i][i]=0;
  for(l=2;l<=n;l++){
    for(i=1;i<=n-l+1;i++){
      j=i+l-1;
      m[i][j]=INT_MAX;
      for(k=i;k<j;k++){
	x=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
	if(m[i][j]>x)m[i][j]=x;
      }
    }
  }
  printf("%d\n",m[1][n]);
  return 0;
}

