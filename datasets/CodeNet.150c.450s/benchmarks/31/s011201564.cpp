#include <iostream>
#include <memory>
#include <vector>

int main(int argc, char const* argv[])
{
    long int min = 1E10;
    long int max = 0;
    long int max_diff = -1E10;
    long int n = 0;
    std::vector<int> vec;
    std::cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    for (auto i: vec) {
        if ((i - min) > max_diff) {
            max_diff = i - min;
        }
        if (i < min) {
            min = i;
        }
    }
    std::cout << max_diff << std::endl;
    return 0;
}