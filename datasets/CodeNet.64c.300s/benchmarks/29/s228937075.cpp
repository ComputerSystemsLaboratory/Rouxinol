#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

  int m;
  while(cin >> m, m) {
    int ret = 1000111000;

    for(int z=0; z*z*z<=m; z++) {
      int y = sqrt(m-z*z*z);
      int x = m - (z*z*z + y*y);
      ret = min(ret, x+y+z);
    }

    cout << ret << endl;
  }

  return 0;
}