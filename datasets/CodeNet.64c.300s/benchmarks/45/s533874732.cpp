#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, m, p;
  while (cin >> n >> m >> p && n) {
    int sum = 0;
    int dl[n];
    rep(i, n) {
      cin >> dl[i];
      sum += dl[i];
    }
    if (dl[m - 1] == 0) {
      cout << 0 << endl;
    } else {
      cout << sum * (100 - p) / dl[m - 1] << endl;
    }
  }
  return 0;
}

