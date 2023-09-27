#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

int main() {
    std::array<long long int, 3> arr;;
    int n;
    
    std::cin >> n;

    while (n--) {
        std::cin >> arr[0] >> arr[1] >> arr[2];
        std::sort(arr.begin(), arr.end());
        std::cout << (std::pow(arr[0], 2) + std::pow(arr[1], 2)
                      == std::pow(arr[2], 2) ? "YES" : "NO")
                  << std::endl;
    }

    return 0;
}