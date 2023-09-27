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

int dp[2][1024];

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  REP(q, N) {
    memset(dp, 0, sizeof(dp));
    string X, Y;
    cin >> X >> Y;
    int LX = X.size(), LY = Y.size();
    REP(i, LX) REP(j, LY) {
      if (X[i] == Y[j]) {
	dp[(i+1)%2][j+1] = max(dp[i%2][j] + 1, max(dp[(i+1)%2][j], dp[i%2][j+1]));
      } else {
	dp[(i+1)%2][j+1] = max(dp[(i+1)%2][j], dp[i%2][j+1]);
      }
    }
    cout << dp[LX%2][LY] << endl;
  }
  return 0;
}