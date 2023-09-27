#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> taro, hanako;
int st, sh;

void solve() {
  int d = st - sh;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (2 * (taro[i] - hanako[j]) != d) continue;
      cout << taro[i] << ' ' << hanako[j] << endl;
      return;
    }
  }
  cout << -1 << endl;
  return;
}

int main() {
  while (cin >> n >> m, n) {
    taro = vector<int>(n);
    for (int i = 0; i < n; ++i) cin >> taro[i];
    sort(begin(taro), end(taro));
    st = accumulate(begin(taro), end(taro), 0);

    hanako = vector<int>(m);
    for (int i = 0; i < m; ++i) cin >> hanako[i];
    sort(begin(hanako), end(hanako));
    sh = accumulate(begin(hanako), end(hanako), 0);

    solve();
  }
  return 0;
}

