#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void solve_SE(double* x, double a, double b, double c, double d, double e, double f)
{
    x[0] = (c * e - f * b) / (a * e - d * b);
    x[1] = (c * d - f * a) / (b * d - e * a);
}

int main()
{
    double a, b, c, d, e, f;
    double x[2];
    while ((cin >> a >> b >> c >> d >> e >> f)) {
        solve_SE(&x[0], a, b, c, d, e, f);
        for (int i = 0; i < 2; i++) {
            x[i] = round(x[i] * 1000) / 1000;
            if (x[i] == 0) x[i] = 0;
        }
        cout << fixed << setprecision(3) << x[0] << ' ' << x[1] << endl;
    }
}