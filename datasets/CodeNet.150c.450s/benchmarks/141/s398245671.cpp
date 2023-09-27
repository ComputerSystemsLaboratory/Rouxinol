#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;


bool same_side(double x1, double y1, double x2, double y2, double x, double y, double x0, double y0) {
  return ((y1 - y2) * (x - x2) - (x1 - x2) * (y - y2)) * ((y1 - y2) * (x0 - x2) - (x1 - x2) * (y0 - y2)) >= 0;
}

int main() {
  // ifstream cin("../test.txt");
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    if (same_side(x1,y1,x2,y2,xp,yp,x3,y3) && same_side(x2,y2,x3,y3,xp,yp,x1,y1) && same_side(x3,y3,x1,y1,xp,yp,x2,y2)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}