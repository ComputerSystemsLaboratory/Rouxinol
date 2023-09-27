#include <iostream>
using namespace std;
 
int main()
{
  int t, h;
  while (cin >> t >> h && t && h) {
    int taro[t], hana[h];
    int ts = 0, hs = 0;
    for (int i = 0; i < t; ++i) {
      int c;
      cin >> c;
      taro[i] = c;
      ts += c;
    }
    for (int i = 0; i < h; ++i) {
      int c;
      cin >> c;
      hana[i] = c;
      hs += c;
    }
    int diff = ts - hs;
    if (diff % 2) {
      cout << -1 << endl;
      continue;
    }
    diff /= 2;
    bool found = false;
    for (int i = 0; i < t; ++i) {
      for (int j = 0; j < h; ++j) {
        if (taro[i] - hana[j] == diff) {
          cout << taro[i] << ' ' << hana[j] << endl;
          i = t;
          found = true;
          break;
        }
      }
    }
    if (!found) cout << -1 << endl;
  }
 
  return 0;
}