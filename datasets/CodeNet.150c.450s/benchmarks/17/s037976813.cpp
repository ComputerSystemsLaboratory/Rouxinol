#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<long long int, 5> arr;
    std::cin >> arr[0] >> arr[1] >> arr[2]
             >> arr[3] >> arr[4];
    std::sort(arr.begin(), arr.end(), std::greater<long long int>());

    std::cout << arr[0] << " " << arr[1] << " "
              << arr[2] << " " << arr[3] << " "
              << arr[4] << std::endl;
    
    return 0;
}