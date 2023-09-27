#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int e;
  while ((cin >> e) && e != 0) {
    int m = e;
    for (int z=0; z<=100; z++) {
      int zzz = z*z*z;
      if (zzz > e) break;
      for (int y=0; y<=100000; y++) {
        int yy = y*y;
        if (yy+zzz > e) break;
        int x = e - (yy+zzz);
        m = min(m, x+y+z);
      }
    }
    cout << m << endl;
  }
  return 0;
}