#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r;
  while (cin >> n >> r, n) {
    auto v = vector<int>(n);
    iota(begin(v), end(v), 1);
    reverse(begin(v), end(v));

    auto tmp = v;
    for (int i = 0; i < r; ++i) {
      int p, c; cin >> p >> c;
      for (int i = 0; i < c; ++i) tmp[i] = v[i + p - 1];
      for (int i = 0; i < p - 1; ++i) tmp[i + c] = v[i];
      v = tmp;
    }
    cout << v[0] << endl;
  }
  return 0;
}

