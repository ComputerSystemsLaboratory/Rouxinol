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

int main() {
  int T;
  cin >> T;
  vll ans;
  rep(j,T) {
    int n;
    cin >> n;
    vll a(n);
    rep(i,n) cin >> a[i];
    string s;
    cin >> s;
    vll b;
    bool ok = true;
    per(i,n) {
      ll v = a[i];
      for(auto x : b) v = min(v,v^x);
      if(v) {
        if(s[i]=='1') ok = false;
        b.push_back(v);
      }
    }
    if(ok) ans.push_back(0);
    else ans.push_back(1);
  }
  rep(j,T) cout << ans[j] << endl;
  return 0;
}