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

int main() {
  REP(x, 110) {
    REP(y, 110) {
      matrix[x][y] = 0;
    }
  }


  int n;
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


  FOR(x, 1, n + 1) {
    FOR(y, 1, n + 1) {
      if (y > 1) cout << " ";
      cout << matrix[x][y];
    }
    cout << endl;
  }

  return 0;
}