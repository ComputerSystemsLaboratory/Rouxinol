#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

const int INF = 1 << 21;
const int MAX = 103;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
int n, G[MAX][MAX];

int prim() {
  int u, minv;
  int d[MAX], p[MAX], color[MAX];

  fill((int*)d, (int*)(d+MAX), INF);
  memset(p, -1, sizeof(p));
  memset(color, WHITE, sizeof(color));

  d[0] = 0;
  while (true) {
    minv = INF;
    u = -1;
    rep(i,n) {
      if (minv > d[i] && color[i] != BLACK) {
	u = i;
	minv = d[i];
      }
    }
    if (u == -1) break;
    color[u] = BLACK;
    rep(v,n) {
      if (color[v] != BLACK && G[u][v] != INF) {
	if (d[v] > G[u][v]) {
	  d[v] = G[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  
  int sum = 0;
  rep(i,n) {
    if (p[i] != -1) sum += G[i][p[i]];
  }
  return sum;
}

int main() {
  cin >> n;
  rep(i,n) rep(j,n) {
    int e;
    cin >> e;
    G[i][j] = (e == -1) ? INF : e;
  }

  cout << prim() << endl;
  return 0;
}

