#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 5> in;
    for (auto i = 0; i < 5; i++) {
        std::cin >> in.at(i);
    }

    std::sort(in.begin(), in.end());

    for (auto i = 4; i >= 0; i--) {
        if (i != 4) {
            std::cout << " ";
        }
        std::cout << in.at(i);
    }
    std::cout << std::endl;

    return 0;
}