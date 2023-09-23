#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define each(c,itr) for(auto itr=(c).begin();itr!=(c).end();itr++)

template<class T> void pv(T& a) { for (auto i : a) cout << i << ' '; cout << endl; }

int main() {
  int N;
  int dp[40];

  while(1) {
    cin >> N;
    if (N == 0) break;

    rep(i,40) dp[i] = 0;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= N; i++) {
      dp[i] += dp[i-1];
      dp[i] += dp[i-2];
      dp[i] += dp[i-3];
    }

    // pv(dp);
    cout << ceil(dp[N] / 3650.0) << endl;
  }

  return 0;
}