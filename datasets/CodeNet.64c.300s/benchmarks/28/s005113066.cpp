#include <iostream>

int main()
{
    int W, H, x, y, r;
    std::cin >> W >> H >> x >> y >> r;
    if ((x >= r) && (y >= r) && (x + r <= W) && (y + r <= H)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}