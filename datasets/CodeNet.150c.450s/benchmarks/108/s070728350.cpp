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

int matrix[110][110];
int dist[110];
int visited[110];
int n;
queue<int> Q;

int main() {
  REP(x, 110) {
    REP(y, 110) {
      matrix[x][y] = 0;
    }
    dist[x] = (1 << 15);
    visited[x] = 0;
  }

  // int n;
  cin >> n;

  REP(_, n) {
    int v, num;
    cin >> v >> num;

    REP(i, num) {
      int cv;
      cin >> cv;
      matrix[v][cv] = 1;
    }
  }

  dist[1] = 0;
  Q.push(1);

  while (!Q.empty()) {
    int f = Q.front(); Q.pop();
    visited[f] = 1;

    // int updated = 0;
    FOR(v, 1, n + 1) {
      if (matrix[f][v]) {
        if (dist[v] > dist[f] + 1) {
          dist[v] = dist[f] + 1;
          // updated = 1;
          // cout << "update for " << v  << endl;
        }
        if (!visited[v]) {
          Q.push(v);
        }
      }
    }
    // if (updated == 0 && Q.empty()) {
    //   cout << "break!" << endl;
    //   break;
    // }
  }


  FOR(v, 1, n + 1) {
    if (dist[v] == (1 << 15)) {
      cout << v << " -1" << endl;
    } else {
      cout << v << " " << dist[v] << endl;
    }
  }


  return 0;
}