#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

ll dp[128][1024];

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, num[128], right;
  cin >> N; N--;
  REP(i, N) cin >> num[i];
  cin >> right;

  dp[0][num[0]] = 1;
  REP(i, N-1) {
    REP(j, 1000) {
      if (!dp[i][j]) continue;
      if (j + num[i+1] <= 20) dp[i+1][j+num[i+1]] += dp[i][j];
      if (j - num[i+1] >= 0) dp[i+1][j-num[i+1]] += dp[i][j];
    }
  }
  cout << dp[N-1][right] << endl;  
  return 0;
}