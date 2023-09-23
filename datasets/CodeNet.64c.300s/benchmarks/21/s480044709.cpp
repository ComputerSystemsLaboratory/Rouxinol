#include <iostream>
#include <iomanip>

int main()
{
    double a, b, c;
    double d, e, f;

    while (std::cin >> a >> b >> c >> d >> e >> f) {
        double x = (c * e - b * f) / (a * e - b * d);
        double y = (c * d - a * f) / (b * d - a * e);
        if (x == -0) {
            x = 0;
        }
        if (y == -0) {
            y = 0;
        }
        std::cout << std::fixed << std::setprecision(3)
                  << x << " " << y << std::endl;
    }

    return 0;
}