#include <iostream>
#include <cmath>
using namespace std;

int test(double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp)
{
    double xa = (x2 - x1);
    double ya = (y2 - y1);
    double xb = (x3 - x1);
    double yb = (y3 - y1);
    double xc = (xp - x1);
    double yc = (yp - y1);
    double d = 1.0 / (xa*yb - xb*ya);
    double k = d * (yb * xc - xb * yc);
    double m = d * (-ya * xc + xa * yc);
    return (k >= 0.0 && m >= 0.0)? 1 : 0;
}

int main(void)
{
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        int tmp = 1;
        tmp *= test(x1, y1, x2, y2, x3, y3, xp, yp);
        tmp *= test(x2, y2, x1, y1, x3, y3, xp, yp);
        tmp *= test(x3, y3, x1, y1, x2, y2, xp, yp);
        cout << ((tmp ==1)? "YES" : "NO") << endl;
    }
    return 0;
}




