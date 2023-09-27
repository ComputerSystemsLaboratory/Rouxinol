#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 150
#define L 1000

int LCSLength(char *X, char *Y){
  int m = strlen(X), n = strlen(Y);
  int i,j;
  int c[m+1][n+1];

  for(i=1; i<=m; i++) c[i][0] = 0;
  for(j=0; j<=n; j++) c[0][j] = 0;

  for(i=1; i<m+1; i++){
    for(j=1; j<n+1; j++){
      if(X[i-1] == Y[j-1]){
	c[i][j] = c[i-1][j-1] + 1;
      }
      else if(c[i-1][j] >= c[i][j-1]){
	c[i][j] = c[i-1][j];
      }
      else {
	c[i][j] = c[i][j-1];
      }
    }
  }

  return c[i-1][j-1];
}

int main(void){
  int q,i,j;
  int LCS[MAX];
  char X[MAX][L], Y[MAX][L];

  // input & calculate
  scanf("%d",&q);
  for(i=0; i<q; i++){
    scanf("%s", &X[i]);
    scanf("%s", &Y[i]);
    LCS[i] = LCSLength(X[i],Y[i]);
  }

  // output
  for(i=0; i<q; i++) printf("%d\n", LCS[i]);

  return 0;
}