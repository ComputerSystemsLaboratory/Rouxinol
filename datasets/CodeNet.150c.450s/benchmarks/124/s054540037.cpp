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
#define INF (1 << 21)
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> V[n];
  int E[n][n];
  int d[n];
  int visited[n];

  REP(x, n) {
    REP(y, n) {
      E[x][y] = INF;
    }
    d[x] = INF;
    visited[x] = 0;
  }

  REP(_, n) {
    int u, k;
    cin >> u >> k;
    REP(__, k) {
      int v, c;
      cin >> v >> c;
      V[u].push_back(v);
      E[u][v] = c;
      // E[v][u] = c;
    }
  }

  d[0] = 0;
  REP(_, n) {
    int minv = -1;
    int mincost = INF;
    REP(v, n) {
      if (!visited[v] && d[v] < mincost) {
        minv = v;
        mincost = d[v];
      }
    }
    visited[minv] = 1;
    for (vector<int>::iterator it = V[minv].begin(); it != V[minv].end(); it++) {
      if (E[minv][*it] < INF && d[minv] + E[minv][*it] < d[*it]) {
        d[*it] = d[minv] + E[minv][*it];
      }
    }
  }

  REP(i, n) {
    cout << i << " " << d[i] << endl;
  }
  return 0;
}