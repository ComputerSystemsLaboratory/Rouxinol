#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m && n) {
    int t[n], h[m], a = 101, b = 101;
    double sum = 0, sum1 = 0, sum2 = 0;
    rep(i, n) {
      cin >> t[i];
      sum1 += t[i];
    }
    rep(i, m) {
      cin >> h[i];
      sum2 += h[i];
    }
    sum = (sum1 + sum2) / 2;
    rep(i, n){rep(j, m){
        if (sum - (sum1 - t[i] + h[j]) == 0 && t[i] + h[j] < a + b){a = t[i];
    b = h[j];
  }
}
}
(a > 100) ? cout << -1 << endl : cout << a << ' ' << b << endl;
}
return 0;
}

