#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while(true) {
    int x, y, s;
    cin >> x >> y >> s;
    if (x + y + s == 0) {
      break;
    }
    
    int as, as_max = -1;
    for (int i = 1; i < s; i++) {
      for (int j = 1; j < s; j++) {
        if (i * (100 + x) / 100 + j * (100 + x) / 100 != s) {
          continue;
        }
        as = (i * (100 + y) / 100) + (j * (100 + y) / 100);
        if (as > as_max) {
          as_max = as;
        }
      }
    }  
    cout << as_max << endl;
  }
  
  return 0;
}