#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

static const int N = 100;
static const int white = 0;
static const int gray = 1;
static const int black = 2;

int n, M[N][N], color[N], d[N], f[N], tt;

void dfs_visit(int u) {
  color[u] = gray;
  d[u] = ++tt;
  REP(v, n) {
    if ( M[u][v] == 0) continue;
    if ( color[v] == white ) {
      dfs_visit(v);
    }
  }
  color[u] = black;
  f[u] = ++tt;
}

void dfs() {
  REP(u, n) color[u] = white;
  tt = 0;

  REP(u, n) {
    if ( color[u] == white ) dfs_visit(u);
  }
  REP(u, n) {
    cout << u + 1 << " " << d[u] << " " << f[u] << endl;
  }
}

int main() {
  int u, v, k;

  cin >> n;
  REP(i, n) {
    REP(j, n) {
      M[i][j] = 0;
    }
  }

  REP(i, n) {
    cin >> u >> k;
    u--;
    REP(j, k) {
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }

  dfs();

  return 0;
} 