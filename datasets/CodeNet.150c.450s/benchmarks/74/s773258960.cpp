#include <iostream>
#include <vector>

using namespace std;

#define debug(x) cout << #x << "==" << x << endl;

const int inf = 100000000;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<int> c(M);
  for(int i = 0; i < M; i++) { cin >> c[i]; }

  vector<int> dp(N+1, inf);       // dp[i] : i円を払うための最小枚数
  dp[0] = 0;
  for(int i = 1; i <= N; i++) {
    for(int j = 0; j < M; j++) {
      if( c[j] <= i ) {
        dp[i] = min(dp[i], dp[i-c[j]] + 1);
      }
    }
  }

  cout << dp[N] << "\n";

  return 0;
}