#include <iostream>
#include <array>
#include <vector>

constexpr int MAX = 100;

int main()
{
    std::array<int, MAX + 1> cnt = {0};

    int key;
    while (std::cin >> key) {
        cnt.at(key)++;
    }

    std::vector<int> modes;
    int mode = 0;
    for (auto key = 1; key <= MAX; key++) {
        if (cnt.at(key) == mode) {
            modes.push_back(key);
        } else if (cnt.at(key) > mode) {
            mode = cnt.at(key);
            modes.clear();
            modes.push_back(key);
        }
    }

    for (auto i = 0; i < modes.size(); i++) {
        std::cout << modes.at(i) << std::endl;
    }

    return 0;
}