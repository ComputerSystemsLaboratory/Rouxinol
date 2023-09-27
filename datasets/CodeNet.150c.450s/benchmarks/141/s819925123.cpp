#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    double det[3];
    for (int i = 0; i < 3; i++) {
      double x0, y0;
      double xa, ya;
      double xb = xp, yb = yp;
      if (i == 0) { x0 = x1; y0 = y1; xa = x2; ya = y2; }
      else if (i == 1) { x0 = x2; y0 = y2; xa = x3; ya = y3; }
      else if (i == 2) { x0 = x3; y0 = y3; xa = x1; ya = y1; }
      xa -= x0; ya -= y0; xb -= x0; yb -= y0;
      det[i] = xa * yb - xb * ya;
    }
    if ((det[0] > 0 && det[1] > 0 && det[2] > 0) || 
        (det[0] < 0 && det[1] < 0 && det[2] < 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
        

      
        