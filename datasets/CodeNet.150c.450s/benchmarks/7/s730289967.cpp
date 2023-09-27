#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 10> arr;

    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }
    
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;

    return 0;
}