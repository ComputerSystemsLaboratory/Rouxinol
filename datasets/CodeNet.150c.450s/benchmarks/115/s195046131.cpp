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

int dp[1010][1010];

int main() {
  int q;
  cin >> q;
  REP(loop, q) {
    char S[1000], T[1000];
    cin >> S >> T;

    REP(i, strlen(S)) {
      REP(j, strlen(T)) {
        dp[i][j] = 0;
      }
    }
    for (int i = 0; i < strlen(S); i++) {
      for (int j = 0; j < strlen(T); j++) {
        if (S[i] == T[j]) {
          dp[i + 1][j + 1] = dp[i][j] + 1;
        } else {
          dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
      }
    }
    cout << dp[strlen(S)][strlen(T)] << endl;
  }

  return 0;
}