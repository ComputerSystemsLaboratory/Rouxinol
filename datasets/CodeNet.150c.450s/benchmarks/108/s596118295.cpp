#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define WHITE 0
#define GRAY 1
#define BLACK 2

static const int INFTY = (1<<21);
static const int N=100;

int n, M[N][N];
int color[N], d[N], f[N], tt;

// void dfs_visit(int u) {
//    color[u] = GRAY;
//    d[u] = ++tt;
//    rep(v, n) {
//       if (M[u][v] == 0) continue;

//       if(color[v] == WHITE) {
//          dfs_visit(v);
//       }
//    }
//    color[u] = BLACK;
//    f[u] = ++tt;
// }

// void dfs() {
//    int u;
//    for(u = 0; u < n; u ++) {
//       color[u] = WHITE;
//    }

//    for(u = 0; u < n; u ++) {
//       if(color[u] == WHITE) dfs_visit(u);
//    }

//    for(u =0; u<n;u++) {
//       printf("%d %d %d\n", u+1, d[u], f[u]);
//    }
// }

// void bfs_visit() {

// }

void bfs(int s) {
   queue<int> q;

   rep(i, n) {
      d[i] = INFTY;
      color[i] = WHITE;
   }

   q.push(s);
   d[s] = 0;

   while (!q.empty()) {
      int u = q.front(); q.pop();
      rep(v, n) {
         if (M[u][v] && color[v] == WHITE) {
            color[v] = GRAY;
            d[v] = d[u] + 1;
            q.push(v);
         }
      }
      color[u] = BLACK;
   }

   rep(i, n) {
      if(d[i] != INFTY) {
         cout << i+1 << " " << d[i] << endl;
      } else {
         cout << i+1 << " " << -1 << endl;
      }
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

   bfs(0);
   // dfs();
   return 0;
}

