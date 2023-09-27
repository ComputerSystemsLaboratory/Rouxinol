#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (int)N; i++)

#define N_MAX 100
#define W_MAX 10000

int dp[W_MAX+1];
int v[N_MAX];
int w[N_MAX];

int main () {
  int N, W;
  cin >> N >> W;
  REP(i,N) cin >> v[i] >> w[i];
  fill(dp, dp + W_MAX + 1, 0);

  REP(i,N) {
    for(int j = W; j >= 0; j--) {
      if(j - w[i] >= 0) dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
  }
  cout << dp[W] << endl;

  return 0;
}