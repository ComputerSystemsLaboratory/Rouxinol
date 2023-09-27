#include <bits/stdc++.h>

using namespace std;

bool solve() {
  int n;
  cin >> n;
  if (n == 0) return false;
  vector<int> a(n);
  for (int& i : a) cin >> i;
  int sum = 0, res = a[0];
  for (int i = 0; i < n; ++i) {
    res = max(res, sum + a[i]);
    if (sum + a[i] < 0) sum = 0;
    else sum += a[i];
  }
  cout << res << endl;
  return true;
}

int main() {
  while (solve());
}