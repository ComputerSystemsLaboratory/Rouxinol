#include <iostream>
#include <algorithm>
using namespace std;

int solve(int e) {
  int m = -1;
  for(int z = 0; z*z*z <= e; ++z) {
    for(int y = 0; z*z*z+y*y <= e; ++y) {
      int x = e - z*z*z - y*y;
      int newValue = x+y+z;
      if(m == -1 || newValue < m) m = newValue;
    }
  }
  return m;
}

int main() {
  int e;
  while(cin >> e && e) cout << solve(e) << endl;
  return 0;
}