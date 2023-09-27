#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 10> height;
    for (auto i = 0; i < 10; i++) {
        std::cin >> height.at(i);
    }

    std::sort(height.begin(), height.end());

    for (auto i = 9; i > 6; i--) {
        std::cout << height.at(i) << std::endl;
    }

    return 0;
}