#include <iostream>
#include <cmath>
using namespace std;

#define EPS (1e-2)

double area(double xa, double ya, double xb, double yb, double xc, double yc){
  double s, a, b, c;
  a = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
  b = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
  c = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));
  s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(void){
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    double abc, abp, bcp, cap;
    abc = area(x1, y1, x2, y2, x3, y3);
    abp = area(x1, y1, x2, y2, xp, yp);
    bcp = area(xp, yp, x2, y2, x3, y3);
    cap = area(x1, y1, xp, yp, x3, y3);
    if(fabs(abc - (abp + bcp + cap)) <= EPS){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  return 0;
}