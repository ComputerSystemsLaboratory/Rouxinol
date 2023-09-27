#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll, ll>> factor(ll n) {
  vector<pair<ll, ll>> res;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      ll ex = 0;
      while (n % i == 0) {
        ex++;
        n /= i;
      }
      res.push_back({i, ex});
    }
  }
  if (n != 1) res.push_back({n, 1});
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  cout << n << ": ";
  vector<pair<ll, ll>> fa = factor(n);
  bool flag = 1;
  for (const auto& f : fa) {
    for (int i = 0; i < f.second; i++) {
      if (flag) {
        cout << f.first;
        flag = 0;
      } else {
        cout << " " << f.first;
      }
    }
  }
  cout << '\n';
  return 0;
}

