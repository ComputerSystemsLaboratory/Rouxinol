#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        double x1, y1, x2, y2, x3, y3, x4, y4;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        double abx = x2 - x1, aby = y2 - y1, cdx = x4 - x3, cdy = y4 - y3;
        if (abx * cdy - aby * cdx == 0.0) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}