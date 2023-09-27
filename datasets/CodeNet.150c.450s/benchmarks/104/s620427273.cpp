#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

#define EPS (1e-8)

using namespace std;

int main() {
  int w, n;
  while(cin >> w >> n, w) {
    int a[n][2];
    int r[w];
    int t;
    for (int i = 0; i < n; i++) {
      cin >> a[i][0];
      cin.ignore();
      cin >> a[i][1];
    }
    for (int i = 0; i < w; i++) {
      r[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
      t = r[a[i][1] - 1];
      r[a[i][1] - 1] = r[a[i][0] - 1];
      r[a[i][0] - 1] = t;
    }
    for (int i = 0; i < w; i++) {
      cout << r[i] << endl;
    }
    w = 0;
  }
  return 0;
}