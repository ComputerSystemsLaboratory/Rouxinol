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

void prim() {
  rep(u, n) {
    color[u] = WHITE;
    d[u] = INF;
  }
  d[0] = 0;
  p[0] = -1;

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
      if (color[v] == BLACK || M[u][v] == INF) continue;
      if (M[u][v] < d[v]) {
        d[v] = M[u][v];
        p[v] = u;
        color[v] = GRAY;
      }
    }
  }
}

int main() {
  cin >> n;
  rep(y, n) rep(x, n) {
    int a;
    cin >> a;
    if (a != -1) M[y][x] = a;
    else M[y][x] = INF;
  }
  prim();
  cout << accumulate(d, d + n, 0) << endl;
  return 0;
}

