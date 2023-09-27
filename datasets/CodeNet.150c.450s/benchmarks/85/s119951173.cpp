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

ll dp[110][110];
ll matrix[110][2];

int main() {
  int N;
  cin >> N;

  REP(i, N) {
    cin >> matrix[i][0] >> matrix[i][1];
  }

  // for (int i = 0; i < N - 1; i++) {
  //   dp[i][i + 1] = matrix[i][0] * matrix[i][1] * matrix[i + 1][1];
  // }
  for (int i = 0; i < N; i++) {
    dp[i][i] = 0;
  }

  // cout << dp[0][1] << endl;

  for (int l = 2; l <= N; l++) {
    for (int i = 0; i < N - l + 1; i++) {
      int j = i + l - 1;

      dp[i][j] = INF;

      for (int k = i; k < j; k++) {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + matrix[i][0] * matrix[k][1] * matrix[j][1]);
      }
    }
  }




  cout << dp[0][N - 1] << endl;

  return 0;
}