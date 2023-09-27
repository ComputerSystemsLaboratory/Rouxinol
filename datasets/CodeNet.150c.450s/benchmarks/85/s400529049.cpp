#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100
int min(int,int);
int p[MAX+1]={},m[MAX+1][MAX+1]={};

int min(int n1,int n2){
  if(n1>n2) return n2;
  else return n1;
}

int main()
{
  int n,l,i,j,k;
  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    scanf("%d %d",&p[i-1],&p[i]);
  }
  
  for(l=2;l<=n;l++){
    for(i=1;i<=n-l+1;i++){
      j=i+l-1;
      m[i][j]=(1<<21);
      for(k=i;k<=j-1;k++){
	m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
      }
    }
  }
  
  printf("%d\n",m[1][n]);
  
  return 0;
}