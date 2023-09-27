#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<n;++i)
#define FOR(i, a, b) for(int i=a;i<b;++i)
#define RFOR(i, a, b) for (int i=a;i>=b;--i)
#define ll long long
#define all(a) a.begin(),a.end()
#define ull unsigned long long
#define pb(x) push_back(x)
#define dbg(x) cout<<#x<<" : "<<(x)<<endl;
using namespace std;
const int INF = 1500000000;
const double PI = 3.14159265359;
const int mod = 1000000000 + 7;

const int MAX_N = 50, MAX_P = 50;
int n, p, res, v[MAX_N];

void solve() {
  rep(i, n) v[i] = 0;
  int c = 0;
  while(true) {
    if (p == 0) {
      p = v[c];
      v[c] = 0;
    } else {
      p--;
      v[c]++;
      if (p == 0) {
        bool flg = true;
        rep(i, n) if (i != c && v[i] > 0) flg = false;
        if (flg) break;
      }
    }
    c = (c == n-1) ? 0 : c + 1;
    res = c;
  }
}

int main() {
  while(true) {
    cin >> n >> p;
    if (!n && !p) break;
    solve();
    cout << res << endl;
  }
  return 0;
}