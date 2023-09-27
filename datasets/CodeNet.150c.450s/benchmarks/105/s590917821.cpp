#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  string s;
  cin >> s;
  vector<long long> b;
  for (int i = n - 1; i >= 0; i--) {
    long long v = a[i];
    for (auto x : b) {
      v = min(v, v ^ x);
    }
    if (v) {
      if (s[i] == '1') {
        cout << 1 << endl;
        return;
      }
      b.push_back(v);
    }
  }
  cout << 0 << endl;
}

int main(){
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
