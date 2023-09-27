#include <iostream>
#include <iomanip>

int main(int argc, const char *argv[]) {
    double a, b, c, d, e, f, x, y, det;
    for ( ; std::cin >> a >> b >> c >> d >> e >> f; ) {
        det = a * e - b * d;
        x = (e * c - b * f) / det;
        y = (a * f - d * c) / det;
        if (-0.0005 < x && x < 0.0005) x = 0.0001;
        if (-0.0005 < y && y < 0.0005) y = 0.0001;
        std::cout << std::fixed << std::setprecision(3) << x << " " << y << std::endl;
    }
    return 0;
}