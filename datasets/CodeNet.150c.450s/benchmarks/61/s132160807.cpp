#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
const double eps = 1e-10;
const int MOD = 1000000007;
const int INF = 1000000000;
const ll LINF = 1ll<<50;
template<typename T>
void printv(const vector<T>& s) {
  for(int i=0;i<(int)(s.size());++i) {
    cout << s[i];
    if(i == (int)(s.size())-1) cout << endl;
    else cout << " ";
  }
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);
  while(1) {
    int n, a, b, c, x; cin >> n >> a >> b >> c >> x;
    if(n == 0) break;
    vi y(n);
    for(int i=0;i<n;++i) {
      cin >> y[i];
    }
    int ans = -1;
    for(int i=0;i<n;++i) {
      while(1) {
        ans++;
        if(ans > 10000) break;
        if(x == y[i]) {
          x = (a * x + b) % c;
          break;
        } else {
          x = (a * x + b) % c;
        }
      }
    }
    if(ans > 10000) cout << -1 << endl;
    else cout << ans << endl;
  }
}

