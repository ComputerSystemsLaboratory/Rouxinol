#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim() {
   int u, minv;
   int d[MAX], p[MAX], color[MAX];

   // 初期化
   rep(i, n) {
      d[i] = INFTY;
      p[i] = -1;
      color[i] = WHITE;
   }

   d[0] = 0;

   while(1) {
      minv = INFTY;
      u = -1;

      rep(i, n){
         if (minv > d[i] && color[i] != BLACK) {
            u = i;
            minv = d[i];
         }
      }
      if(u == -1) break;
      // uの決定
      color[u] = BLACK;

      rep(v, n) {
         if(color[v] != BLACK && M[u][v] != INFTY) {
            if(d[v] > M[u][v]) {
               d[v] = M[u][v];
               p[v] = u;
               color[v] = GRAY;
            }
         }
      }
   }
   int sum = 0;
   rep(i, n) {
      if(p[i] != -1) sum += M[i][p[i]];
   }
   return sum;
}

void dijkstra() {
   int minv;
   int d[MAX], color[MAX];

   // 初期化
   rep(i, n) {
      d[i] = INFTY;
      color[i] = WHITE;
   }

   d[0] = 0;
   color[0] = GRAY;

   while(true) {
      minv = INFTY;
      int u = -1;
      rep(i, n) {
         if(minv > d[i] && color[i] != BLACK) {
            u = i;
            minv = d[i];
         }
      }
      if (u == -1) break;

      // 最も小さいコストのuが決まる 初回は必ず0になる
      color[u] = BLACK;

      rep(v, n) {
         // 0 ~ n-1の頂点が未訪問かつuとの経路がある場合
         if(color[v] != BLACK && M[u][v] != INFTY) {
            // 頂点uを通った方が目的地に近い場合
            if (d[v] > d[u] + M[u][v]) {
               d[v] = d[u] + M[u][v];
               color[v] = GRAY;
            }
         }
      }
   }

   rep(i, n) {
      cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
   }
}

int main(){
   cin >> n;
   rep(i, n) {
      rep(j, n) {
         M[i][j] = INFTY;
      }
   }

   int k, c, u, v;
   rep(i, n) {
      cin >> u >> k;
      rep(j, k){
         cin >> v >> c;
         M[u][v] = c;
      }
   }

   dijkstra();

   return 0;
}

