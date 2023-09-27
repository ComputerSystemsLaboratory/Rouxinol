#include <stdio.h>
 #define GRAY 1
#define WHITE 0
#define BLACK 2
 
int de[101], f[101], col[101];
int A[101][101];
int n, time;
 
void visit(int u) {
  int v;
   col[u] = GRAY;
   de[u] = ++time;
 
  for (v = 1; v <= n; v++) {
    if (col[v] == WHITE && A[u][v] == 1) visit(v);
  }
  col[u] = BLACK;
  f[u] = ++time;
}
 
void dfs() {
  int u;
  for (u = 1; u <= n; u++) {
    col[u] = WHITE;
  }
  time = 0;
  for (u = 1; u <= n; u++) {
    if (col[u] == WHITE) {
      visit(u);
    }
  }
}
 
int main() {
  int i, j, u, k, v;
 
  scanf("%d\n", &n);
  for (i = 1; i <= n; i++) {
    scanf("%d %d", &u, &k);
    for (j = 1; j <= k; j++) {
      scanf("%d ", &v);
      A[u][v] = 1;
    }
  }
 
  dfs();
  for (i = 1; i <= n; i++) {
    printf("%d %d %d\n", i, de[i], f[i]);
  }
 
 
  return 0;
}