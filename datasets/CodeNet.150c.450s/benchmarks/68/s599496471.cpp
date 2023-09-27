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
#define IINF (1<<21)
typedef long long ll;

int main() {
  int n;
  int a[1000100];

  while (1) {
    cin >> n;
    if (n == 0) break;

    REP(i, n) {
      cin >> a[i];
    }

    sort(a, a + n);

    int mind = IINF;
    FOR(i, 1, n) {
      mind = min(mind, a[i] - a[i - 1]);
    }
    cout << mind << endl;
  }

  return 0;
}