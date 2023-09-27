#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>

using namespace std;

int main() {
  int h, w;

  while (cin >> h >> w) {
    if (h == 0 && w == 0) { break; }
    int size = h*h + w*w;

    int ans_h = 200, ans_w = 200, ans_size = 100005;

    for (int hh = 1; hh <= 150; hh++) {
      for (int ww = hh+1; ww <= 150; ww++) {
        int ssize = hh*hh + ww*ww;

        if ( ssize < size) { continue; }
        if ( ssize == size && hh <= h) { continue; }

        if ( ssize < ans_size || (ssize == ans_size && hh < ans_h) ) {
          ans_h = hh;
          ans_w = ww;
          ans_size = ssize;
        }
      }
    }
    cout << ans_h << " " << ans_w << endl;
  }

  return 0;
}
