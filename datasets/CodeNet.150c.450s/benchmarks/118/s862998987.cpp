#include <iostream>

using namespace std;

int solve(int y, int m, int d) {
  int ret = 0;
  for (int i = y; i < 1000; i++) {
    for (int j = m; j < 11; j++) {
      int D = 0;
      if (i % 3 != 0 && j % 2 == 0) {
        D = 19;
      } else {
        D = 20;
      }
      ret += D - d + 1;
      d = 1;
    }
    m = 1;
  }

  return ret;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int y, m, d;
    cin >> y >> m >> d;
    cout << solve(y, m, d) << endl;
  }
  
  return 0;
}