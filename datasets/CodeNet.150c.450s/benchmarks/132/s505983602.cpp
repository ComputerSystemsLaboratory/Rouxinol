#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p;
  while (cin >> n >> p, n) {
    int a[50] = {0};

    bool f = false;
    for (int i = 0; ; ++i) {
      if (p) {
        p--;
        a[i % n]++;

        if (p == 0) {
          int cnt = 0;
          for (int j = 0; j < n; ++j) {
            if (a[j]) cnt++;
          }

          if (cnt == 1) {
            cout << i % n << endl;
            f = true;
          }
        }
      } else {
        p += a[i % n];
        a[i % n] = 0;
      }

      if (f) break;
    }
  }
}