#include <iostream>
#include <math.h>
#define EPS (1e-6)
using namespace std;

double tri (double a, double b, double c) {
    double s = (a + b + c) * 0.5;
    double res = sqrt(s * (s - a) * (s - b) * (s - c));
    return res;
}

int main ()
{
    double x1, x2, x3, y1, y2, y3, xp, yp;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        double a = hypot(x2 - x1, y2 - y1);
        double c = hypot(x3 - x1, y3 - y1);
        double b = hypot(x3 - x2, y3 - y2);
        double x = hypot(xp - x1, yp - y1);
        double y = hypot(xp - x2, yp - y2);
        double z = hypot(xp - x3, yp - y3);

        if (tri(a, x, y) + tri(b, y, z) + tri(c, x, z) - tri(a, c, b) < EPS) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}