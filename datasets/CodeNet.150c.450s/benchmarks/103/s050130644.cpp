#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
#define int ll

int dp[105][10][10], s, n;
int f(int a, int b, int c) {
  if(dp[a][b][c] != -1) return dp[a][b][c];
  if(a == s && c == n && b <= 10) return 1;
  if(a > s || c > n || b == 10) return 0;
  int res = 0;
  res += f(a+b, b+1, c+1);
  res += f(a, b+1, c);
  return dp[a][b][c] = res;
}

signed main(void)
{
  while(1) {
    cin >> n >> s;
    if(!n && !s) break;
    REP(i, 105) REP(j, 10) REP(k, 10) dp[i][j][k] = -1;
    cout << f(0, 0, 0) << endl;
  }
  return 0;
}