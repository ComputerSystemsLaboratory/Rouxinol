#include<stdio.h>
#include<string.h>

#define N 1000
#define S 150

int LCSLength(char *, char *);

int main(){
  int q, i;
  char X[N];
  char Y[N];
  int LCS[S];
  scanf("%d", &q);
  for(i=0; i<q; i++){
    scanf("%s", X);
    scanf("%s", Y);
    LCS[i]=LCSLength(X, Y);
  }

  for(i=0; i<q; i++){
    printf("%d\n", LCS[i]);
  }

  return 0;
}//main

int LCSLength(char *X, char *Y){
  int m, n, i, j;
  int c[N+1][N+1];
  m = strlen(X);
  n = strlen(Y);
  for(i=1; i<=m; i++){
    c[i][0]= 0;
  }
  for(j=0; j<=n; j++){
    c[0][j]= 0;
  }

  for(i=1; i<=m; i++){
   for(j=1; j<=n; j++){
     if(X[i-1]==Y[j-1]) c[i][j]=c[i-1][j-1]+1;
     else if(c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
     else c[i][j]=c[i][j-1];
    }
   }
   return c[m][n];
  }