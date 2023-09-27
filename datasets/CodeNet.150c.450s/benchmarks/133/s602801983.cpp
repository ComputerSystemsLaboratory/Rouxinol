#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int D;
  cin >> D;
  vector<ll> C(26);
  rep(i, 26) cin >> C[i];
  vector<vector<ll>> S(D, vector<ll>(26));
  rep(i, D) rep(j, 26) {
    cin >> S[i][j];
  }
  vector<int> L(26, 0);
  vector<int> T(D);
  vector<ll> ans(D);
  ll sum = 0;
  rep(i, D) {
    cin >> T[i];
    sum += S[i][T[i]-1];
    L[T[i]-1] = i+1;
    rep(j, 26) {
      sum -= C[j] * (i+1 - L[j]);
    }
    ans[i] = sum;
  }
  rep(i, D) cout << ans[i] << "\n";
  return 0;
}
