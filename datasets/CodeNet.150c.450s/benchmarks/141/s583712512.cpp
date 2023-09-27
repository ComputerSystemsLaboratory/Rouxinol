#include <iostream>

using namespace std;

double cross_product(double ax, double ay, double bx, double by) {
    return ax * by - ay * bx;
}

int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        double s1, s2, s3;

        s1 = cross_product(x2 - x1, y2 - y1, xp - x1, yp - y1);
        s2 = cross_product(x3 - x2, y3 - y2, xp - x2, yp - y2);
        s3 = cross_product(x1 - x3, y1 - y3, xp - x3, yp - y3);

        if ((s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}