#include <iostream>

using namespace std;

int main() {
  while (true) {
    int M;
    cin >> M;
    if (M == 0) {
      break;
    }
    int m = 1000 - M;

    int ans = 0;
    while (m > 0) {
      if (m >= 500) {
        m -= 500;
      } else if (m >= 100) {
        m -= 100;
      } else if (m >= 50) {
        m -= 50;
      } else if (m >= 10) {
        m -= 10;
      } else if (m >= 5) {
        m -= 5;
      } else {
        m--;
      }

      ans++;
    }

    cout << ans << endl;
  }

  return 0;
}
