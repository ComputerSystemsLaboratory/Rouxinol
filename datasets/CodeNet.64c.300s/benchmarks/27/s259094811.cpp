#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int n, x;
  for (;;) {
    cin >> n >> x;
    if (!n && !x)
      break;

    int c = 0;
    for (int i = 1; i < n - 1; ++i) {
      if (i >= x)
        continue;
      for (int j = i + 1; j <= n - 1; ++j) {                                                                                                                              
        if (i + j >= x)
          continue;
        for (int k = j + 1; k <= n; ++k) {
          if (i + j + k == x)
            ++c;
        }
      }
    }
    printf("%d\n", c);
  }
  return 0;
}