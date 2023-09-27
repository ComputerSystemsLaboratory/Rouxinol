#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define WHITE 0
#define GRAY 1
#define BLACK 2

static const int N=100;

int n, M[N][N];
int color[N], d[N], f[N], tt;

void dfs_visit(int u) {
   color[u] = GRAY;
   d[u] = ++tt;
   rep(v, n) {
      if (M[u][v] == 0) continue;

      if(color[v] == WHITE) {
         dfs_visit(v);
      }
   }
   color[u] = BLACK;
   f[u] = ++tt;
}

void dfs() {
   int u;
   for(u = 0; u < n; u ++) {
      color[u] = WHITE;
   }

   for(u = 0; u < n; u ++) {
      if(color[u] == WHITE) dfs_visit(u);
   }

   for(u =0; u<n;u++) {
      printf("%d %d %d\n", u+1, d[u], f[u]);
   }
}

int main(){
   int u, k, v;
   cin>>n;

   // graphを0で初期化
   for(int i = 0; i < n; i ++) {
      for(int j = 0; j < n; j ++) {
         M[i][j] = 0;
      }
   }

   // 隣接リストを隣接行列に変換
   for(int i = 0; i < n; i ++) {
      scanf("%d %d", &u, &k);
      u--;
      for(int j = 0; j < k; j++) {
         scanf("%d", &v);
         v--;
         M[u][v] = 1;
      }
   }

   dfs();
   return 0;
}

