#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int dp[MAX+1][MAX+1];

int lcs(char x[], char y[]){
  int x_length = strlen(x);
  int y_length = strlen(y);

  for(int i = 0; i<=x_length; i++) dp[i][0] = 0;
  for(int j = 0; j<=y_length; j++) dp[0][j] = 0;

  for(int i = 1; i<=x_length; i++){
    for(int j = 1; j<=y_length; j++){
      dp[i][j] = (x[i-1] == y[j-1]) ? dp[i-1][j-1] + 1 :
                                  max(dp[i-1][j],dp[i][j-1]);
    }
  }

  return dp[x_length][y_length];
}

int main(){

  int q;
  scanf("%d", &q);

  char X[MAX + 1];
  char Y[MAX + 1];
  for(int i=0; i<q; i++){
    scanf("%s\n%s\n", X, Y);
    printf("%d\n", lcs(X, Y));
  }

  return 0;
}

