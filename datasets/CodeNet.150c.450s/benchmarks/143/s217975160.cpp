#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q;
  cin >> n;
  vector<int> cnt(1e6, 0);
  ll ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    cnt.at(a)++;
    ans += a;
  }

  cin >> q;
  rep(i, q) {
    int b, c;
    cin >> b >> c;
    ans += (c - b) * cnt.at(b);
    cout << ans << endl;
    cnt.at(c) += cnt.at(b);
    cnt.at(b) = 0;
  }

  return 0;
}