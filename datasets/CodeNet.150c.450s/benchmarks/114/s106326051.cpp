#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int G[n][n];
  int visited[n];
  int d[n];
  int p[n];
  REP(y, n) {
    REP(x, n) {
      int cost;
      cin >> cost;

      if (cost == -1) {
        G[y][x] = 1 << 15;
      } else {
        G[y][x] = cost;
      }
    }
    visited[y] = 0;
    d[y] = 1 << 15;
    p[y] = -1;
  }

  d[0] = 0;

  REP(_, n) {
    int mincost = 1 << 15;
    int minv = -1;
    REP(v, n) {
      if (!visited[v] && d[v] < mincost) {
        minv = v;
        mincost = d[v];
      }
    }
    visited[minv] = 1;
    REP(to, n) {
      if (!visited[to] && G[minv][to] < (1 << 15) && G[minv][to] < d[to]) {
        d[to] = G[minv][to];
        p[to] = minv;
      }
    }
  }

  ll sum = 0;
  REP(i, n) {
    if (p[i] != -1) {
      sum += G[i][p[i]];
    }
  }

  cout << sum << endl;
  return 0;
}