#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, e, f;


    while (cin >> a >> b >> c >> d >> e >> f) {
        double div = 1 / (a*e - b*d);
        double x = (e*c - b*f) * div + 0;
        double y = (a*f - d*c) * div + 0;

        x = roundf(x * 1000) / 1000.;
        y = roundf(y * 1000) / 1000.;
        printf("%.3f %.3f\n", x, y);
    }

    return 0;
}