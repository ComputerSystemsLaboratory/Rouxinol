#include<stdio.h>
#include<string.h>
  
#define MAX 1000
  
int main(){
  int i,j,m,q,x,y,c[MAX+1][MAX+1];
  char X[MAX],Y[MAX];
  
  scanf("%d",&q);
  
  for(i=0;i<strlen(X);i++)
    c[i][0] = 0;
  for(j=0;j<strlen(Y);j++)
    c[0][j] = 0;
  
  for(m=0;m<q;m++){
    scanf("%s",X);
    scanf("%s",Y);
    x = strlen(X);
    y = strlen(Y);
    for(i=0;i<x;i++)
      c[i][0] = 0;
    for(j=0;j<y;j++)
      c[0][j] = 0;
  
    for(i=1;i<=x;i++){
      for(j=1;j<=y;j++){
    if(X[i-1] == Y[j-1])c[i][j] = c[i-1][j-1] + 1;
    else if(c[i-1][j] >= c[i][j-1])c[i][j] = c[i-1][j];
    else c[i][j] = c[i][j-1];
      }
    }
    printf("%d\n",c[x][y]);
  }
  
  return 0;
}