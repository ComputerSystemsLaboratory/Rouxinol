#include <iostream>
#include <limits>

int main()
{
    int n;
    std::cin >> n;

    int min;
    std::cin >> min;
    int max = std::numeric_limits<int>::min();
    for (int i = 1; i < n; ++i) {
        int val;
        std::cin >> val;
        int tmp = val - min;
        if (tmp > max) {
            max = tmp;
        }
        if (val < min) {
            min = val;
        }
    }
    std::cout << max << std::endl;
    return 0;
}