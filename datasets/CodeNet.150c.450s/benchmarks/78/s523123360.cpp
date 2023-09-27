#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n, dp[1000000], dp2[1000000];

void solve() {
  cout<<dp[n]<<" "<<dp2[n]<<endl;
}

int main (int argc, char const* argv[]) {
  memset(dp, -1, sizeof dp);
  memset(dp2, -1, sizeof dp2);
  
  dp[0] = dp2[0] = 0;
  for (int i = 1; i < 1000000; i += 1) {
    dp[i] = dp2[i] = i;
    for (int j = 1;; j += 1) {
      int s = j * (j + 1) * (j + 2) / 6;
      if (s > i) break;
      dp[i] = min(dp[i], dp[i - s] + 1);
      if (s % 2) {
        dp2[i] = min(dp2[i], dp2[i - s] + 1);
      }
    }
  }
  
  while (cin>>n, n) {
    solve();
  }
  return 0;
}