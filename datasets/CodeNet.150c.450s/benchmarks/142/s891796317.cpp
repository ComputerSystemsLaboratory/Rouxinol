#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll M = 1e9 + 7;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  ll p = 0;
  queue<int> q;
  rep(i,k) {
    p += a[i];
    q.push(a[i]);
  }

  for (int i = k; i < n; i++) {
    ll pre = p;
    p -= q.front();
    p += a[i];
    q.pop();
    q.push(a[i]);
    if (p > pre) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}