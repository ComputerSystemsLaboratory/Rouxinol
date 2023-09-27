#include <iostream>
using namespace std;

template<class T>
inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

constexpr int MAX_N = 100;
constexpr int MAX_W = 10000;
int v[MAX_N];
int w[MAX_N];
int dp[MAX_N + 1][MAX_W + 1];

int main() {
  int N, W;
  cin >> N >> W;
  for (int i{}; i < N; ++i) {
    cin >> v[i] >> w[i];
  }

  for (int i{}; i < N; ++i) {
    for (int j{}; j <= W; ++j) {
      if (j >= w[i]) {
        chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
      }
      chmax(dp[i + 1][j], dp[i][j]);
    }
  }

  cout << dp[N][W] << endl;
  return 0;
}

