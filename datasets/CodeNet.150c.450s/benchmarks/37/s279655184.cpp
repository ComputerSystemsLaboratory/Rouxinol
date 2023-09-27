#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    double a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        double x = (e * c - b * f) / (e * a - b * d);
        double y = (c - a * x) / b;
        if (x == 0) x = 0;
        if (y == 0) y = 0;
        cout << fixed << setprecision(3) << x << " " << y << "\n";
    }
}