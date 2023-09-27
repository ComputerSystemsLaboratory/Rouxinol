#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;
static const int INF = INT_MAX;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

static const int N = 2010;
int M[N][N];
int color[N];
int d[N];
int p[N];
int n;

void dijkstra(int s) {
  rep(u, n) {
    color[u] = WHITE;
    d[u] = INF;
  }
  d[s] = 0;
  p[s] = -1;

  while (true) {
    int mincost = INF;
    int u;
    rep(i, n) {
      if (color[i] != BLACK && d[i] < mincost) {
        mincost = d[i];
        u = i;
      }
    }

    if (mincost == INF) break;

    color[u] = BLACK;

    rep(v, n) {
      if (color[v] != BLACK && M[u][v] != INF) {
        if (d[u] + M[u][v] < d[v]) {
          d[v] = d[u] + M[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
}

int main() {
  cin >> n;
  rep(y, n) rep(x, n) {
    M[y][x] = INF;
  }
  rep(i, n) {
    int u, k;
    cin >> u >> k;
    rep(j, k) {
      int v, c;
      cin >> v >> c;
      M[u][v] = c;
    }
  }
  dijkstra(0);
  rep(v, n) cout << v << " " << d[v] << endl;
  return 0;
}

