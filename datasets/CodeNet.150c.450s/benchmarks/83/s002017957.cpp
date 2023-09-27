#include <algorithm>
#include <iostream>

using namespace std;

int dp[20200];

int main() {
  int N, W;
  cin >> N >> W;

  for (int i = 0; i < N; i++) {
    int v, w;
    cin >> v >> w;

    for (int j = W; j >= 0; j--) {
      if (dp[j + w] < dp[j] + v) {
        dp[j + w] = dp[j] + v;
      }
    }
  }
  cout << max_element(dp, dp + W + 1)[0] << endl;

  return 0;
}