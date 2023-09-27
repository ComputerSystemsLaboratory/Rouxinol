#include <iostream>
#include <iomanip>
#include <cmath>

double nth_round(double value, int n) {
    double scale = pow(10, n - 1);
    return std::round(value * scale + 0.01) / scale;
}

int main() {
    double a, b, c, d, e, f;
    double coef;
    
    while (std::cin >> a >> b >> c >> d >> e >> f) {
        coef = 1. / (a * e - b * d);
        std::cout << std::fixed
                  << std::setprecision(3)
                  << nth_round(coef * (c * e - b * f), 4) << " "
                  << nth_round(coef * (a * f - c * d), 4) << std::endl;
    }

    return 0;
}