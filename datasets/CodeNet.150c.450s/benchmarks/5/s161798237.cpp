#include <iostream>
#include <array>

constexpr int MAX = 100;

int main(void)
{
    size_t in_num;
    std::cin >> in_num;


    std::array <int, MAX> in;
    for (size_t i = 0; i < in_num; i++) {
        std::cin >> in.at(i);
    }

    for (size_t i = 0; i < in_num; i++) {
        if (i != 0) {
            std::cout << " ";
        }
        std::cout << in.at(in_num - 1 - i);
    }
    std::cout << std::endl;

    return 0;
}