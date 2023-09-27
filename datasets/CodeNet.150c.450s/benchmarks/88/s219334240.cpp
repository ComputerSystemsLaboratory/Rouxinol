#include <cstdint>
#include <iostream>

using namespace std;

int32_t main() {
  while (true) {
    uint32_t h, w;
    cin >> h >> w;

    if (h == 0 && w == 0)
      break;

    uint32_t diag = h * h + w * w;

    uint32_t min_h = 200;
    uint32_t min_w = 200;
    for (uint32_t i = 1; i <= 150; i++) {
      for (uint32_t j = i + 1; j <= 150; j++) {
        uint32_t d = i * i + j * j;
        if ((diag == d && h < i) || (diag < d)) {
          if (min_h * min_h + min_w * min_w > i * i + j * j) {
            min_h = i;
            min_w = j;
          }
        }
      }
    }
    cout << min_h << " " << min_w << endl;
  }

  return 0;
}