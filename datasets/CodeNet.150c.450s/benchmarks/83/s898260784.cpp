#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);++i)
#define rep(i,n) REP(i, 0, n)
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int N, W; cin >> N >> W;
    vector<int> v(N), w(N);
    rep(i, N) cin >> v[i] >> w[i];
    vector<int> dp(W + 1, 0);
    rep(i, N)
      for(int j = W; j >= w[i]; --j)
        dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    cout << *max_element(dp.begin(), dp.end()) << endl;
}