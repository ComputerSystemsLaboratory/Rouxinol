#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n, r = 0;
    int p, c = 0;
    while (std::cin >> n >> r && n > 0) {
        std::vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v.at(n - i - 1) = i + 1;
        }
        for (int i = 0; i < r; i++) {
            std::cin >> p >> c;
            std::rotate(v.begin(), v.begin() + p - 1, v.begin() + p + c - 1);
        }
        std::cout << v.at(0) << '\n';
    }
    return 0;
}

