#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;

int main() {
  int n, m;
  cin >> n >> m;
  vi v(m), dp(70000, INF);
  rep(i, m) {
    cin >> v[i];
    dp[v[i]] = 1;
  }
  dp[0] = 0;
  rep(i, 50008) {
    rep(j, m) { dp[i + v[j]] = min(dp[i] + 1, dp[i + v[j]]); }
  }
  cout << dp[n] << endl;
  return 0;
}