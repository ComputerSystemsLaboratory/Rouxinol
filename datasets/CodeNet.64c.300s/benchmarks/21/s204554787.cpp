#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        double x = (c * e - b * f) / (a * e - b * d), y = (c * d - a * f) / (b * d - a * e);
        x *= 1000;
        if (x >= 0) x = (double)(int)(x + 0.5);
        else x = (double)(int)(x - 0.5);
        x /= 1000;
        y *= 1000;
        if (y >= 0) y = (double)(int)(y + 0.5);
        else y = (double)(int)(y - 0.5);
        y /= 1000;
        cout << fixed << setprecision(3) << x  << ' ' << y << endl;
    }
    
    return 0;
}
