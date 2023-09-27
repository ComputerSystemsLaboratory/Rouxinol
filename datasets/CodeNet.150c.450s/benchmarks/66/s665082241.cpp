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
  int n; cin >> n;
  map<string, bool> mp;
  for(int i=0;i<n;++i) {
    string s; cin >> s;
    mp[s] = true;
  }
  int m; cin >> m;
  bool op = false;
  for(int i=0;i<m;++i) {
    string s; cin >> s;
    if(mp[s]) {
      if(op) {
        cout << "Closed by " << s << endl;
        op = false;
      } else {
        cout << "Opened by " << s << endl;
        op = true;
      }
    } else {
      cout << "Unknown " << s << endl;
    }
  }
}

