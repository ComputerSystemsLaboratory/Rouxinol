#include <iostream>

using namespace std;

int coins[] = {1, 5, 10, 50, 100, 500};

int main() {
  int m = 0;
  int n;
  while(cin >> m, m) {
    n = 0;
    m = 1000 - m;
    for (int i = 5; i >= 0; i--) {
      int t = m / coins[i];
      n += t;
      m -= t * coins[i];
    }
    cout << n << endl;
  }
}