//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int run(int n, int a, int b, int c, int x, vector<int> &y, vector<int> &z) {
  int head = 0;
  rep (t, 10000+1) {
    if (y[head] == z[t]) head++;
    // if (t > 10000) return -1;
    if (head == n) return t;
  }
  return -1;
}

int main() {
  int n, a, b, c, x;
  while(cin >> n >> a >> b >> c >> x, n) {
    vector<int> y(n);
    vector<int> z(10000*n+1);
    z[0] = x;
    rep (i, n) cin >> y[i];

    for (int i=1; i<=10000*n; i++) z[i] = (a*z[i-1] + b) % c;

    // cout << "y: ";
    // rep (i, n) cout << y[i] << ' ';
    // cout << endl;
    // cout << "z: ";
    // rep (i, 300) cout << z[i] << ' ';
    // cout << endl;

    int ans = run(n, a, b, c, x, y, z);
    cout << ans << endl;
  }
  return 0;
}