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
  vector<string> v = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  int q; cin >> q;
  while(q > 0) {
    q--;
    string s; cin >> s;
    vector<pair<int, int>> p;
    char now = s[0];
    int cnt = 1;
    for(int i=1;i<(int)(s.size());++i) {
      if(s[i] == now) {
        cnt++;
      } else {
        p.push_back({now-'0', cnt});
        now = s[i];
        cnt = 1;
      }
    }
    p.push_back({now-'0', cnt});
    string ans = "";
    for(int i=0;i<(int)(p.size())-1;++i) {
      if(p[i].first != 0 && p[i+1].first == 0) {
        ans.push_back(v[p[i].first][(p[i].second-1) % (int)(v[p[i].first].size())]);
      }
    }
    cout << ans << endl;
  }
}

