#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int d;
  cin >> d;
  vector<int> c(26);
  for (int i = 0; i < 26; i++) {
    cin >> c[i];
  }
  vector<vector<int>> s(d, vector<int>(26));
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
  vector<int> t(d);
  for (int i = 0; i < d; i++) {
    cin >> t[i];
  }
  vector<int> v(d);
  for (int i = 0; i < d; i++) {
    v[i] += s[i][t[i] - 1];
    for (int j = 0; j < 26; j++) {
      int last = 0;
      for (int k = i; k >= 0; k--) {
        if (t[k] - 1 == j) {
          last = k + 1;
          break;
        }
      }
      v[i] -= c[j] * (i + 1 - last);
    }
    if (i != d - 1) {
      v[i + 1] = v[i];
    }
  }
  for (int i = 0; i < d; i++) {
    cout << v[i] << '\n';
  }
  return 0;
}