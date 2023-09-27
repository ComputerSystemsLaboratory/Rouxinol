#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// using ll = long long;
typedef long long ll;

bool check(vector<int> lst_w, ll p, int k) {
  int cnt = 0;
  ll sum_w = 0;
  rep(i, lst_w.size()) {
    sum_w += lst_w[i];
    if (sum_w > p) {
      cnt++;
      sum_w = lst_w[i];
    }
  }
  return cnt < k;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> lst_w(n, 0);

  int max_w = -1;
  rep(i, n) {
    cin >> lst_w[i];
    if (lst_w[i] > max_w) max_w = lst_w[i];
  }
  ll left = max_w, right = n * max_w / k + 1;

  ll ans;
  while (left <= right) {
    ll p = (left + right) / 2;
    if (check(lst_w, p, k)) {
      ans = p;
      right = p - 1;
    } else {
      left = p + 1;
    }
  }
  cout << ans << endl;

  return 0;
}

