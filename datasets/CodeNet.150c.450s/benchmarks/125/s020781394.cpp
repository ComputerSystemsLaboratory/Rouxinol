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
int d[110];
int f[110];
int n;
int elapsed = 1;

void visit(int v) {
  d[v] = elapsed++;

  FOR(i, 1, n + 1) {
    if (matrix[v][i] && d[i] < 0 ) {
      visit(i);
    }
  }
  f[v] = elapsed++;
}

int main() {
  REP(x, 110) {
    REP(y, 110) {
      matrix[x][y] = 0;
    }
    d[x] = -1;
    f[x] = -1;
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
      // matrix[cv][v] = 1;
    }
  }


  FOR(v, 1, n + 1) {
    if (d[v] < 0) {
      visit(v);
    }
  }

  FOR(v, 1, n + 1) {
    cout << v << " " << d[v] << " " << f[v] << endl;
  }


  return 0;
}