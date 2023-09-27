#include <bits/stdc++.h>
using namespace std;

int c[50];
int main() {
  int n, p, a, b;
  while (cin >> n && n) {
    a = 0;
    cin >> p;
    for (int i = 0; i < n; i++) c[i] = 0;
    b = p;
    c[a] = 1, p--;
    while (c[a] != b) {
      a = (a == (n - 1)) ? 0 : ++a;
      if (p == 0) {
        p += c[a], c[a] = 0;
      } else
        c[a]++, p--;
    }
    cout << a << endl;
  }
  return 0;
}

