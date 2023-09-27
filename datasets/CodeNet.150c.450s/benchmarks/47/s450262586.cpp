#include <iostream>

int main(void)
{
    int w, h, x, y, r;
    std::cin >> w;
    std::cin >> h;
    std::cin >> x;
    std::cin >> y;
    std::cin >> r;
    if (x < r || x > w - r || y < r || y > h - r) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}