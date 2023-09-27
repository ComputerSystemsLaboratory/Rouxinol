//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, m, f;
  while (cin >> n >> m >> f, n) {
    vector<int> x(n);
    rep (i, n) cin >> x[i];

    float sum = 0;
    rep (i, n) sum += 100.0*x[i];

    float ret = sum - ((float)f/100) * sum;

    int ans = ret / x[m-1];
    cout << (ans > 0 ? ans : 0) << endl;
  }

  return 0;
}