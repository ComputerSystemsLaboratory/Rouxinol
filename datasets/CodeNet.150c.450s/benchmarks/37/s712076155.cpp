#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
constexpr double EPS = 1e-8;

int main() {
    double a, b, c, d, e, f, x, y;
    while (cin >> a >> b >> c >> d >> e >> f) {
        x = (c * e - b * f) / (a * e - b * d);
        y = (c - a * x) / b;
        if (abs(x) < EPS) x = 0;
        if (abs(y) < EPS) y = 0;
        cout << fixed << setprecision(3) << x << " " << y << endl;
    }
    return 0;
}