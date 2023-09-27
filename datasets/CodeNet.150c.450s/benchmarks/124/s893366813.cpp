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

void dijkstra() {
  int minv;
  int d[MAX], color[MAX];

  fill((int*)d, (int*)(d+MAX), INF);
  memset(color, WHITE, sizeof(color));

  d[0] = 0;
  color[0] = GRAY;
  while (true) {
    minv = INF;
    int u = -1;
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
	if (d[v] > d[u] + G[u][v]) {
	  d[v] = d[u] + G[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  rep(i,n) {
    cout << i << ' ' << (d[i] == INF ? -1 : d[i]) << endl;
  }
}

int main() {
  cin >> n;
  rep(i,n) {
    fill((int*)G[i], (int*)(G[i]+n), INF);
  }
  
  int u, k, v, c;
  rep(i,n) {
    cin >> u >> k;
    rep(j,k) {
      cin >> v >> c;
      G[i][v] = c;
    }
  }

  dijkstra();
  return 0;
}

