#include <algorithm>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

using ll = long long;

constexpr int INF = (1 << 30) - 1;
constexpr int MOD = 1000000000 + 7;

int N, W;
vector<int> v, w;

int dp[101][10001];

int main() {
  cin >> N >> W;
  v.resize(N);
  w.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i] >> w[i];
  }

  for (int i = 0; i <= W; i++) {
    for (int j = 0; j < N; j++) {
      if (i < w[j]) {
        dp[j + 1][i] = dp[j][i];
      } else {
        dp[j + 1][i] = max(dp[j][i], dp[j][i - w[j]] + v[j]);
      }
    }
  }

  cout << dp[N][W] << endl;
}
