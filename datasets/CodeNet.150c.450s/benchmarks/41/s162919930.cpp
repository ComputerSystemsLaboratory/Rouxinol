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
  int V, E;
  cin >> V >> E;

  ll d[V][V];
  REP(i, V) {
    REP(j, V) {
      if (i == j) {
        d[i][j] = 0;
      } else {
        d[i][j] = INF;
      }
    }
  }

  REP(i, E) {
    int s, t;
    cin >> s >> t;
    cin >> d[s][t];
  }

  FOR(k, 0, V) {
    FOR(s, 0, V) {
      FOR(t, 0, V) {
        if (d[s][k] == INF || d[k][t] == INF) continue;
        d[s][t] = min(d[s][t], d[s][k] + d[k][t]);
      }
    }
  }

  int negative_cycle = 0;
  REP(i, V) {
    if (d[i][i] < 0) {
      negative_cycle = 1;
      break;
    }
  }

  if (negative_cycle) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    REP(s, V) {
      REP(t, V) {
        if (t) cout << " ";

        if (d[s][t] == INF) {
          cout << "INF";
        } else {
          cout << d[s][t];
        }
      }
      cout << endl;
    }
  }

  return 0;
}