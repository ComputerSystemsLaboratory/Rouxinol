#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 99999999;
const int N = 1000000;

int dp[N+1], odd_dp[N+1];

int main(void) {
  vector<int> pollock, odd_pollock;
  for (int n = 1; n*(n+1)*(n+2)/6 <= N; n++) {
    int t = n*(n+1)*(n+2)/6;
    pollock.push_back(t);
    if (t%2) odd_pollock.push_back(t);
  }
  for (int i = 0; i <= N; i++) {
    dp[i] = INF;
    odd_dp[i] = INF;
  }
  for (int i = 0; i < pollock.size(); i++) {
    dp[pollock[i]] = 1;
  }
  for (int i = 0; i < odd_pollock.size(); i++) {
    odd_dp[odd_pollock[i]] = 1;
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 1; j <= N; j++) {
      if (dp[j] != INF) {
        for (int k = 0; k < pollock.size(); k++) {
          if (j+pollock[k] > N) break;
          dp[j+pollock[k]] = min(dp[j]+1, dp[j+pollock[k]]);
        }
      }
      if (odd_dp[j] != INF) {
        for (int k = 0; k < odd_pollock.size(); k++) {
          if (j+odd_pollock[k] > N) break;
          odd_dp[j+odd_pollock[k]] = min(odd_dp[j]+1, odd_dp[j+odd_pollock[k]]);
        }
      }
    }
  }

  int n;
  while (cin >> n, n) {
    cout << dp[n] << " " << odd_dp[n] << endl;
  }

  return 0;
}