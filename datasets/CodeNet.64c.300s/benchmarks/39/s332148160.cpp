#include <iostream>
using namespace std;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int i, j, k, l, sum, count = 0;

  while (cin >> sum) {
    count = 0;
    for (i = 0; i < 10; i++) {
      for (j = 0; j < 10; j++) {
        for (k = 0; k < 10; k++) {
          for (l = 0; l < 10; l++) {
            if (i + j + k + l == sum) { count += 1; }
          }
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}