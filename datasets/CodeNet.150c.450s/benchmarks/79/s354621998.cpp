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

int n, r, p[50], c[50], d[50], tmp[50];

void solve() {
  rep(i, r) {
    rep(j, p[i]-1 + c[i]) tmp[j] = d[j];
    rep(j, c[i]) {
      d[j] = tmp[p[i]-1 + j];
    }
    rep(j, p[i] - 1) {
      d[c[i] + j] = tmp[j];
    }
  }
  printf("%d\n", d[0]);
}

int main() {
  while(true) {
    scanf("%d %d", &n, & r);
    if (!n && !r) break;
    rep(i, n) d[i] = n - i;
    rep(i, r) scanf("%d %d", &p[i], &c[i]);
    solve();
  }
  return 0;
}