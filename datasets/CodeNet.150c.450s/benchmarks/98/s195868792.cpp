#include <bits/stdc++.h>
using namespace std;

const int inf = 1001001001;

int main() {
  int n, m;

  while (cin >> n >> m, n) {
    int a = inf, b = inf;
    int sum1 = 0, sum2 = 0;

    vector<int> s1, s2;

    for (int i = 0; i < n; ++i){
      int x;
      cin >> x;
      s1.push_back(x);

      sum1 += x;
    }
    for (int i = 0; i < m; ++i){
      int x;
      cin >> x;
      s2.push_back(x);

      sum2 += x;
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (sum1 - s1[i] + s2[j] == sum2 - s2[j] + s1[i]) {
          if (a + b > s1[i] + s2[j]) {
            a = s1[i];
            b = s2[j];
          }
        }
      }
    }

    if (a == inf && b == inf) cout << -1 << endl;
    else cout << a << " " << b << endl;
  }
}