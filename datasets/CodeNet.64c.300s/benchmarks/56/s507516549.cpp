#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int y, m, d;
    cin >> y >> m >> d;

    int ans = 0;
    for (int i = y; i < 1000; ++i) {
      for (int j = (i == y ? m : 1); j <= 10; ++j) {
        for (int k = (i == y && j == m ? d : 1); k <= (j & 1 || i % 3 == 0 ? 20 : 19); ++k) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  }
}