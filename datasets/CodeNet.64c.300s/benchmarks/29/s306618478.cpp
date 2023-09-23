#include <iostream>

using namespace std;

int main() {
  int e;
  while (cin >> e, e) {
    int ans = 1000000 + 1000 + 100;
    for(int z = 0; z < 100+1; z++) {
      if (z*z*z > e) continue;
      for(int y = 0; y < 1000+1; y++) {
        if (z*z*z + y*y > e) continue;
        ans = min(ans, e - (z*z*z + y*y) + y + z);
      }
    }
    cout << ans << endl;
  }
  return 0;
}