#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define per(i,n) for(int i = n-1; i >= 0; i--)
typedef long long ll;
typedef pair<int, int> P;
typedef pair<long long, long long> Pll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long mod = 1000000007LL;

void solve() {
  int n;
  cin >> n;
  vll a(n);
  rep(i,n) cin >> a[i];
  string s;
  cin >> s;
  vll basis;
  bool ok = true;
  per(i,n) {
    ll v = a[i];
    for(auto x : basis) v = min(v,v^x);
    if(v) {
      if(s[i]=='1') {
        cout << 1 << endl;
        return;
      }
      basis.push_back(v);
    }
  }
  cout << 0 << endl;
  return;
}

int main() {
  int T;
  cin >> T;
  rep(_,T) solve();
  return 0;
}