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
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    string S;
    cin >> S;
    vector<ll> base;
    bool ok = true;
    rrep(i, N) {
      for(ll b: base) A[i] = min(A[i]^b, A[i]);
      if(S[i] == '0') {
        if(A[i]) base.push_back(A[i]);
      } else {
        if(A[i]) {
          cout << 1 << "\n";
          ok = false;
          break;
        }
      }
    }
    if(ok) cout << 0 << "\n";
  }
  return 0;
}
