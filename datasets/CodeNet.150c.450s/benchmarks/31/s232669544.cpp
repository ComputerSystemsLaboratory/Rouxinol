#include <iostream>

int main(int argc, char const* argv[])
{
    long int n;
    std::cin >> n;
    long int max_diff = -20000000000;
    long int min_val;

    std::cin >> min_val;

    for (int i = 1; i < n; i++) {
        long int cur_val;
        std::cin >> cur_val;
        max_diff = max_diff > (cur_val - min_val)? max_diff: (cur_val - min_val);
        min_val = cur_val > min_val? min_val: cur_val;
    }
    std::cout << max_diff << std::endl;
    return 0;
}