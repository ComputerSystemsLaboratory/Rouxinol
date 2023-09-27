#include <iostream>
using namespace std;

double f(double x1, double y1, double x2, double y2, double xp, double yp) {
    return (y2 - y1) * xp + (-x2 + x1) * yp - x1 * (y2 - y1) + y1 * (x2 - x1);
}


int main(void) {
    double x1, y1, x2, y2, x3, y3, xp, yp;
    double a, b, c;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        a = f(x1, y1, x2, y2, xp, yp);
        b = f(x2, y2, x3, y3, xp, yp);
        c = f(x3, y3, x1, y1, xp, yp);
        if((a > 0 && b > 0 && c > 0) || (a < 0 && b < 0 && c < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}