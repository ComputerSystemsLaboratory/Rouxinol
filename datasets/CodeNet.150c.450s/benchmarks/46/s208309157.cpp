#include <iostream>
using namespace std;

int main() {
  int n, x, cnt = 0;
  while (true) {
    cin >> n >> x;
    if (n == 0 && x == 0) return 0;
    for (int i = 1; i < n-1; i++) {
      for (int j = i + 1; j < n; j++) {
        int a = x - i - j;
        if (j <  a && a <= n) cnt++;
      }
    }
    cout << cnt << endl; cnt = 0;
  }
}