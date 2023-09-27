#include <algorithm>
#include <iostream>

using namespace std;

template <typename T, typename U>
inline bool chmax(T &x, const U &v) {
  if (x < v) {
    x = v;
    return true;
  }
  return false;
}

int dp[20200];

int main() {
  int N, W;
  cin >> N >> W;

  for (int i = 0; i < N; i++) {
    int v, w;
    cin >> v >> w;
    for (int j = W; j >= 0; j--) {
      chmax(dp[j + w], dp[j] + v);
    }
  }
  cout << max_element(dp, dp + W + 1)[0] << endl;

  return 0;
}