#include<stdio.h>
#include<string.h>
   
int LCS(char *X, char *Y){
  int i,j,m,n,c[1001][1001];
  m = strlen(X);
  n = strlen(Y);
     
  for(i=0; i<m; i++){
    c[i][0] = 0;
  }
  for(j=0; j<n; j++){
    c[0][j] = 0;
  }
   
  for(i=1;i<m+1;i++){
    for(j=1;j<n+1;j++){
      if (X[i-1]==Y[j-1]) c[i][j]=c[i-1][j-1]+1;
      else if (c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
      else c[i][j]=c[i][j-1];
    }
  }
  return c[i-1][j-1];
}
   
int main(){
  int i, q;
  char X[1001], Y[1001];
     
  scanf("%d", &q);
  for(i=0; i<q; i++){
    scanf("%s", X);
    scanf("%s", Y);
    printf("%d\n", LCS(X, Y));
   
  }
  return 0;
}