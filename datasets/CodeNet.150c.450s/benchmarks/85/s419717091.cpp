#include<stdio.h>

#define N 101

int main(){
  int n;
  int p[N];
  int m[N][N];
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d%d",&p[i-1],&p[i]);}

  for(int i=1;i<=n;i++)
    m[i][i]=0;

  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      /*2<<21*/
      m[i][j]=2097152;
      for(int k=i;k<=j-1;k++){
	/*さいしょう比較*/
	if(m[i][j]<m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j])
	
	  m[i][j]=m[i][j];
	else
	  m[i][j]=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
      }
    }
  }
  printf("%d\n",m[1][n]);
  
  return 0;


  }



  

