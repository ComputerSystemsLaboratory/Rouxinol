#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    int y, m, d;
    cin >> y >> m >> d;
    int big = (y % 3 == 0 || m % 2);
    int cnt = 0;
    while (!(y == 1000 && m == 1 && d == 1)) {
      d++;
      cnt++;
      if (y % 3 == 0)
        big = 1;
      if (big) {
        if (d == 21)
          d = 1, m++, big = !big;
        if (m == 11)
          m = 1, y++, big = 1;
      } else if (!big) {
        if (d == 20)
          d = 1, m++, big = !big;
        if (m == 11)
          m = 1, y++, big = 1;
      }
    }
    cout << cnt << endl;
  }
}
