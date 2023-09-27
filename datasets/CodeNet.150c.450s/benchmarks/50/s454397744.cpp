#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  while (true) {
    int t; cin >> t;
    if (t == 0) break;

    int x = 1000 - t;
    int cnt = 0;
    while (x > 0) {
      if (x / 500 > 0) {
        cnt += x / 500;
        x %= 500;
      } else if (x / 100 > 0) {
        cnt += x / 100;
        x %= 100;
      } else if (x / 50 > 0) {
        cnt += x / 50;
        x %= 50;
      } else if (x / 10 > 0) {
        cnt += x / 10;
        x %= 10;
      } else if (x / 5 > 0) {
        cnt += x / 5;
        x %= 5;
      } else if (x / 1 > 0) {
        cnt += x / 1;
        x %= 1;
      }
    }
    cout << cnt << endl;
  }
}
