#include <iostream>
#include <cmath>

using namespace std;

inline double sq (double x) {
    return x * x;
}

double rad (double x1, double y1, double x2, double y2) {
    double a = x1 * x2 + y1 * y2;
    double b = sqrt(sq(x1) + sq(y1)) * sqrt(sq(x2) + sq(y2));
    return acos(a / b);
}

int main (void) {
    double x1, x2, x3, xp;
    double y1, y2, y3, yp;
    for (;;) {
        cin >> x1; cin >> y1;
        cin >> x2; cin >> y2;
        cin >> x3; cin >> y3;
        cin >> xp; cin >> yp;
        if (cin.eof()) break;
        double d1, d2, d3;
        d1 = rad(xp - x1, yp - y1, xp - x2, yp - y2);
        d2 = rad(xp - x1, yp - y1, xp - x3, yp - y3);
        d3 = rad(xp - x2, yp - y2, xp - x3, yp - y3);
        if (d1 + d2 + d3 < 2 * M_PI)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}