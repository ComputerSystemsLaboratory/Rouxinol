#include    <iostream>
#include    <cstdio>
#include    <cmath>
 
using namespace std;

double calc_Det(double, double, double, double);
 
int main() {
    double a, b, c, d, e, f;
    double x, y;
 
    while (cin >> a >> b >> c >> d >> e >> f) {
        x = (double)calc_Det(c, b, f, e) / calc_Det(a, b, d, e);
        y = (double)calc_Det(a, c, d, f) / calc_Det(a, b, d, e);

        if (fabs(x) < 1e-3) { x = 0.0; }
        if (fabs(y) < 1e-3) { y = 0.0; }
        printf("%.3f %.3f\n", x, y);
    }
}
 
double calc_Det(double a, double b, double c, double d) {
    return a*d - b*c;
}
