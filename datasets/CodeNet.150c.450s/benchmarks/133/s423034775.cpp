#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

const int N = 365 + 7;
const int K = 26 + 7;
int n;
int c[K], s[N][K], t[N], last[K];

int get(int m) {
  for (int j = 1; j <= 26; j++) {
    last[j] = 0;
  }
  int ct = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= 26; j++) {
      ct -= c[j] * i;
    }
  }
  int sol = 0, grow = 0;
  for (int i = 1; i <= m; i++) {
    sol += s[i][t[i]];
    grow += c[t[i]] * (i - last[t[i]]);
    last[t[i]] = i;
    sol += grow;
  }
  return sol + ct;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= 26; i++) {
    cin >> c[i];
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 26; j++) {
      cin >> s[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    cin >> t[i];
  }
  for (int i = 1; i <= n; i++) {
    cout << get(i) << "\n";
  }
  return 0;
}
