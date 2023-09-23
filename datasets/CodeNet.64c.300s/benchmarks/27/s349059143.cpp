#include <iostream>
using namespace std;

int main() {
  int buf[2], index = 0;
  while (cin >> buf[index++ % 2]) {
    if (index % 2 != 0) continue;
    int n = buf[0], x = buf[1];
    if (n + x == 0) return 0;

    int count = 0;
    for (int i = 1; i <= n; i++) {
      if (i + 2 == x) break;
      for (int j = 2; j <= n; j++) {
        for (int k = 3; k <= n; k++) {
          if (i >= j || j >= k) continue;
          if (i + j + k == x) {
            count++;
            break;
          }
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}

