#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0)
      break;
    vector<int> a(n), b(m);
    int sa = 0, sb = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sa += a[i];
    }
    for (int j = 0; j < m; j++) {
      cin >> b[j];
      sb += b[j];
    }
    int s = 1e9, t = 1e9;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (sa - a[i] + b[j] == sb - b[j] + a[i]) {
          if (s + t > a[i] + b[j]) {
            s = a[i];
            t = b[j];
          }
        }
      }
    }
    if (s == 1e9)
      cout << -1 << endl;
    else
      cout << s << " " << t << endl;
  }
  return 0;
}