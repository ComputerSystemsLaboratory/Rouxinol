#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int G[101][101];
bool Memo[101];
int d[101];
int f[101];
int count1;

void dfs(int i, int n) {
  if (Memo[i]) {
    count1++;
    d[i] = count1;
    Memo[i] = false;
    for (int j = 0; j < n; j++) {
      if (G[i][j] == 1) {
        dfs(j,n);
      }
    }
    count1++;
    f[i] = count1;
  }
}

int main() {
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      G[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    int row,col;
    scanf("%d %d",&row,&col);
    for (int j = 0; j < col; j++) {
      int d;
      scanf("%d",&d);
      G[row - 1][d - 1] = 1;
    }
  }
  for (int i = 0; i < n; i++) Memo[i] = true;
  count1 = 0;
  for (int i = 0; i < n; i++) {
    if (Memo[i]) dfs(i,n);
  }
  for (int i = 0; i < n; i++) printf("%d %d %d\n",i+1,d[i],f[i]);
  return 0;
}

