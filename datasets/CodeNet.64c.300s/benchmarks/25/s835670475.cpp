#include <iostream>

using namespace std;

int main() {
  int a[4];
  int b[4];
  while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    int hit = 0;
    int blow = 0;
    for (int i = 0; i < 4; i++) {
      if (a[i] == b[i]) {
        hit++;
        continue;
      } else {
        for (int j = 0; j < 4; j++) {
          if (a[i] == b[j]) {
            blow++;
            continue;
          }
        }
      }
    }
    cout << hit << ' ' << blow << endl;
  }
  return 0;
}