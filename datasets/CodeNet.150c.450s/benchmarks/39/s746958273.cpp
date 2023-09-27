#include <iostream>

int main(void)
{
    int x, y;
    std::cin >> x >> y;
    int area = x * y;
    int perimeters = 2 * x + 2 * y;
    std::cout << area << " " << perimeters << std::endl;
    return 0;
}