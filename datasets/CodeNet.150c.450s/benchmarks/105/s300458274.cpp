#include <bits/stdc++.h>

using namespace std;

const int MAX = 210;

int solve (string const& s, vector<long long> a) {
  vector<bitset<MAX>> mat(64);
  int n = a.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 64; j++) {
      if (a[i] & (1ll << j)) {
        mat[j][i] = 1;
      }
    }
  }
  for (int i = 0, cur = 0; i < n; i++) {
    for (int j = cur; j < 64; j++) {
      if (mat[j][i]) {
        if (s[i] == '0') {
          swap(mat[j], mat[cur]);
          break;
        }
        else {
          return 1;
        }
      }
    }
    if (mat[cur][i]) {
      for (int j = cur + 1; j < 64; j++) {
        if (mat[j][i]) mat[j] ^= mat[cur];
      }
      cur++;
    }
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    string s;
    cin >> s;
    reverse(a.begin(), a.end());
    reverse(s.begin(), s.end());
    int ans = solve(s, a);
    cout << ans << '\n';
  }
  return 0;
}