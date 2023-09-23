#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, y, m, d;
  cin >> n;
  rep(i, n) {
    int c = 0;
    cin >> y >> m >> d;
    for (int j = y; j <= 999; ++j) {
      for (int k = m; k <= 10; ++k) {
        int day = (j % 3 == 0 || k % 2 == 1) ? 20 : 19;
        for (int l = d; l <= day; ++l) {
          c++;
        }
        d = 1;
      }
      m = 1;
    }
    cout << c << endl;
  }
  return 0;
}

