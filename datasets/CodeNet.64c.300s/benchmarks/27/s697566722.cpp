#include <iostream>
using namespace std;

int main() {
  int n, x;
  while (cin >> n >> x && n) {
    int ans = 0;
    int k;
    for (auto i=1; i<=n; i++) {
      for (auto j=1; j<i; j++) {
        k = x - i - j;
        if (1 <= k && k < j) {
          // cerr << "i = " << i << ", j = " << j << ", k = " << k << endl;
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
}