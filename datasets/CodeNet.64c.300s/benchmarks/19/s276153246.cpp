#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  int n, a[5010], sum[5010], res;
  while (true) {
    cin >> n;
    if (n == 0) break;
    rep (i, n) cin >> a[i];
    sum[0] = 0;
    rep (i, n) sum[i + 1] = a[i] + sum[i];
    res = -1000000000;
    rep (i, n) rep (j, i + 1) {
      res = max(res, sum[i + 1] - sum[j]);
    }
    cout << res << endl;
  }
}