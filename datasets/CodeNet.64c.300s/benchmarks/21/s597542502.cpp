#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    int a, b, c, d, e, f;
    float x, y;
    float det;
    while(cin >> a >> b >> c >> d >> e >> f) {
        det = a * e - b * d;
        x = (float)(e * c - b * f) / det;
        y = (float)(-d * c + a * f) / det;
        x = roundf(1000 * x) / 1000.0;
        y = roundf(1000 * y) / 1000.0;
        if(x == -0)
            x = 0.0;
        if(y == -0)
            y = 0.0;
        printf("%.3f %.3f\n", x, y);
    }
}