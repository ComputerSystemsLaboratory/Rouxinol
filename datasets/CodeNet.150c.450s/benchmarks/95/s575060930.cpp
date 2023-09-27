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
    int n; cin >> n;
    if(n == 0) break;
    bool down = true;
    int cnt = 0;
    bool l = false, r = false;
    for(int i=0;i<n;++i) {
      string s; cin >> s;
      if(s == "lu") {
        l = true;
      } else if(s == "ld") {
        l = false;
      } else if(s == "ru") {
        r = true;
      } else {
        r = false;
      }
      if(down && l && r) {
        down = false;
        cnt++;
      } else if(!down && !l && !r) {
        down = true;
        cnt++;
      }
    }
    cout << cnt << endl;
  }
}

