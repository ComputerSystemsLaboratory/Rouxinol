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

void solve() {
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  string S;
  cin >> S;
  vector<ll> B;
  set<ll> se;
  se.insert(0);
  rrep(i, N) {
    ll a = A[i];
    for(ll b: B) a = min(a^b, a);
    if(S[i] == '0') {
      B.emplace_back(a);
    } else {
      if(a != 0) {
        cout << 1 << endl;
        return;
      }
    }
  }
  cout << 0 << endl;
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int T;
  cin >> T;
  rep(t, T) solve();
  return 0;
}
