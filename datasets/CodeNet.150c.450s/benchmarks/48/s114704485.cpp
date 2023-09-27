#include <cmath>
#include <cstdint>
#include <iostream>

using namespace std;

int32_t main() {
  while (true) {
    uint32_t e;
    cin >> e;

    if (e == 0)
      break;

    uint32_t m = UINT32_MAX;
    for (uint32_t a = 0; a * a * a <= e; a++) {
      for (uint32_t b = 0; b * b <= e - a * a * a; b++) {
        uint32_t c = e - a * a * a - b * b;
        m = min(m, a + b + c);
      }
    }

    cout << m << endl;
  }

  return 0;
}