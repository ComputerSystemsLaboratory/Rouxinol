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
    int m, n1, n2; cin >> m >> n1 >> n2;
    if(m == 0) break;
    vi a(m);
    for(int i=0;i<m;++i) {
      cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    n1--;
    n2--;
    int ma = 0;
    int argma = 0;
    for(int i=n1;i<=n2;++i) {
      if(ma <= a[i] - a[i+1]) {
        ma = a[i] - a[i+1];
        argma = i+1;
      }
    }
    cout << argma << endl;
  }
}

