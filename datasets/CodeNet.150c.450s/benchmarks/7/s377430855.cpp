#include <iostream>
#include <array>
#include <algorithm>
 
int main(void) {
    std::array<u_int, 10> heights;
    //??\???
    for (u_int i = 0; i < 10; ++i) {
        std::cin >> heights[i];
    }
    //?????????
    std::sort(heights.begin(), heights.end(), std::greater<u_int>());
    //??????
    for (u_int i = 0; i < 3; ++i) {
        std::cout << heights[i] << std::endl;
    }
    return 0;
}