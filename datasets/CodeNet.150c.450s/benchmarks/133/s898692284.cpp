#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define INF (1e9)

int D = 365;
vi c, ans;
vvi s;

void input() {
  cin >> D;
  c = vi(26);
  s = vvi(D, vi(26));
  for (int i = 0; i < 26; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
}

void simulate(vi a) {
  int sum = 0;
  vi last(26, 0);
  for (int i = 0; i < D; i++) {
    sum += s[i][a[i]];
    last[a[i]] = i + 1;
    for (int j = 0; j < 26; j++) {
      sum -= c[j] * (i - last[j] + 1);
    }
    cout << sum << endl;
  }
  // return (int)1e6 + sum;
  // return max((int)1e6 + sum, 0);
}

int main() {
  input();

  vi t(D);
  for (ll i = 0; i < D; i++) {
    cin >> t[i];
    t[i]--;
  }

  simulate(t);
}
