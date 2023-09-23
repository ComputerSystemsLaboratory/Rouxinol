#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  // input: w, h, x, y ,r
  // -100 <= x, y <= 100
  // 0 < w, h , r < 100
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;
  // ??????????????????????????¶
  if (((x - r) < 0) || ((y - r) < 0) || ((x + r) > w) || ((y + r) > h)) cout << "No" << endl;
  else cout << "Yes" << endl;
}