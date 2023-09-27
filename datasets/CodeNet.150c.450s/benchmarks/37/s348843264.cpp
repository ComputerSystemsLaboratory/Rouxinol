#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    
    double a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        double x = (e * c - b * f) / (e * a - b * d);
        double y = (d * c - a * f) / (d * b - a * e);
        
        printf("%.3f %.3f\n", floor(x * 1000 + 0.5) / 1000, floor(y * 1000 + 0.5) / 1000);
    }
    
    return 0;   
}