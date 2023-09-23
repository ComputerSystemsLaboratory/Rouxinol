#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) {
      break;
    }
    int ans = 0, i = 1;
    while (i < n) {
      int tmp = i, j = i + 1;
      while (tmp <= n) {
        tmp += j;
        j++;
        if (tmp == n) {
          ans++;
          break;
        }
      }
      i++;
    }
    cout << ans << endl;
  }
  return 0;
}
