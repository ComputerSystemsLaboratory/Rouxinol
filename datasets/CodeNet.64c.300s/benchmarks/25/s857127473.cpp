#include <iostream>
using namespace std;
int main() {
  char a[4], b[4];
  int hi, bl, i, j;
  while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
    for (i = hi = bl = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        if (b[i] == a[j]) {
          if (i == j) 
            hi++;
          else
            bl++;
        }
      }
    }
    cout << hi << ' ' << bl << endl;
  }
  return 0;
}