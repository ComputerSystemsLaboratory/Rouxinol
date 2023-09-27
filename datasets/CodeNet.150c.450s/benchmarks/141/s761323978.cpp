#include <iostream>
#include <cmath>
#define EPS 1.0e-5
using namespace std;

int main() {
  double x1,y1,x2,y2,x3,y3,xp,yp;
  double a[2],b[2];
  double A,B;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    //    cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << " " << xp << " " << yp << endl;
    a[0] = x2 - x1;
    a[1] = y2- y1;
    b[0] = x3 - x1;
    b[1] = y3 - y1;
    if(fabs(a[0]*b[0]+a[1]*b[1]) != 1) {
      A = ( b[1] * (xp-x1) - b[0] * (yp-y1)) / (a[0] * b[1] - b[0] * a[1]);
      B = (a[1] * (xp-x1) - (yp-y1) * a[0]) / (a[1] * b[0] - b[1] * a[0]);
      if ((A+B < 1) && (A > 0) && (B > 0)) {
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
    }
    else
      cout << "NO" << endl;
  }
}