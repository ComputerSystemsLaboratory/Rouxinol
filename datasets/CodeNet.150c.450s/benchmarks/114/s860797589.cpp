#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
 
using namespace std;

static const int MAX = 100;
static const int INFTY = (1<<21);
static const int white =0;
static const int gray = 1;
static const int black = 2;

int n, M[MAX][MAX];

int prim() {
  int u, minv;
  int d[MAX], p[MAX], color[MAX];

  REP(i, n) {
    d[i] = INFTY;
    p[i] = -1;
    color[i] = white;
  }

  d[0] = 0;

  while( 1 ) {
    minv = INFTY;
    u = -1;
    REP(i, n) {
      if (minv > d[i] && color[i] != black ) {
        u = i;
        minv = d[i];
      }
    }
    if (u == -1) break;
    color[u] = black;
    REP(v, n) {
      if (color[v] != black && M[u][v] != INFTY) {
        if (d[v] > M[u][v]) {
          d[v] = M[u][v];
          p[v] = u;
          color[v] = gray;
        }
      }
    }
  }
  int sum = 0;
  REP(i, n) {
    if (p[i] != -1) sum += M[i][p[i]];
  }
  return sum;
}

int main() {
  cin >> n;
  REP(i, n) {
    REP(j, n) {
      int e;
      cin >> e;
      M[i][j] = (e == -1) ? INFTY : e;
    }
  }
  cout << prim() << endl;
  return 0;
}