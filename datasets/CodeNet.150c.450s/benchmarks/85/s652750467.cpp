#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> P;
typedef pair<ll, ll> LLP;

const int INF = (1 << 30) - 1;
// const ll LL_INF = (1LL << 62) - 1;
// const ll MOD = 1e9 + 7;
// const double PI = M_PI;

int N;
vector<int> R, C;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> N;
  R.resize(N);
  C.resize(N);
  rep(i, N) { cin >> R[i] >> C[i]; }

  int dp[N][N + 1];
  rep(i, N) { fill(dp[i], dp[i] + N + 1, 0); }

  for (int i = 2; i <= N; i++) {
    for (int l = 0; l < N; l++) {
      int r = l + i;
      if (r > N) {
        continue;
      }
      dp[l][r] = INF;
      for (int k = l + 1; k < r; k++) {
        dp[l][r] = min(dp[l][r], dp[l][k] + dp[k][r] + R[l] * R[k] * C[r - 1]);
      }
    }
  }
  cout << dp[0][N] << endl;
  return 0;
}

