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

ll dp[100100];
int N;

int main() {
  cin >> N;
  REP(i, N + 100) {
    dp[i] = INF;
  }

  REP(_, N) {
    ll in;
    cin >> in;

    *lower_bound(dp, dp + N, in) = in;
  }

  int cnt = 0;
  REP(i, N) {
    // if (i) cout << " ";
    // cout << dp[i];

    if (dp[i] < INF) cnt++;
  }
  // cout << endl;

  cout << cnt << endl;

  return 0;
}