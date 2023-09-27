#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define rep1(i, n) for (ll i = 1; i <= (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
#define cld complex<long double>
using namespace std;
using ll = long long;
using ld = long double;

// ----本問について----
// 問題：A Point in a Triangle
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/0012
// 所要時間：
// 学んだこと：
// ------------------

// ----ここから本問のソースコード----

// グローバル変数（入力）
complex<ld> c[3], cp;

void input() {
  rep(i, 3) {
    ld x, y;
    cin >> x >> y;
    c[i] = complex<ld>(x, y);
  }
  ld xp, yp;
  cin >> xp >> yp;
  cp = complex<ld>(xp, yp);
}

ld cross_product(complex<ld> a, complex<ld> b) { return (conj(a) * b).imag(); }

void solve() {
  rep(i, 3) { c[i] -= cp;}
  ld a[3];
  rep(i, 3) { a[i] = cross_product(c[i % 3], c[(i + 1) % 3]);}
  if ((a[0] > 0 && a[1] > 0 && a[2] > 0) ||
      (a[0] < 0 && a[1] < 0 && a[2] < 0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  while (true) {
    input();
    if (!cin) { break; }
    solve();
  }
  return 0;
}

