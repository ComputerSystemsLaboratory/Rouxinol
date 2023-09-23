#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int  x, y, s;
  
  while (true) {
    cin >> x >> y >> s;
    if (x + y + s == 0) {
      break;
    }
    
    int ans = 0;
    for (int i = 1; i < 2 * s; i++) {
      for (int j = 1; j < 2 * s; j++) {
        int t = (int)((i * (100 + x)) / 100) + (int)((j * (100 + x)) / 100);
        if (t == s) {
          int u = (int)((i * (100 + y)) / 100) + (int)((j * (100 + y) )/ 100);
          ans = max(ans, u);
        }   
      }
    }
    cout << ans << endl;
  }
  
  
  return 0;
}