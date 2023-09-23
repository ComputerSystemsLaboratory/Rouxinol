#include <iostream>
#include <iomanip>
using namespace std;

double trunc(double d) {
    d *= 1000;

    if (d < 0) {
        d -= 0.5;
    } else {
        d += 0.5;
    }

    return d / 1000;
}

int main() {

    double a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        double x = (b * f - c * e) / (b * d - a * e);
        double y = (d * c - a * f) / (b * d - a * e);

        if (x == -0.000) x = 0.0;
        if (y == -0.000) y = 0.0;

        cout << fixed << setprecision(3) << x << " " << y << endl;
    }

    return 0;
}