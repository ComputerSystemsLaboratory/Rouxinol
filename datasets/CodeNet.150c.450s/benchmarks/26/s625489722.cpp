#include <iostream>
#include <array>

int main(void)
{
    int x,y;
    std::cin >> x;
    std::cin >> y;    
    if (x == y) {
        std::cout << "a == b" << std::endl;
    } else if (x < y) {
        std::cout << "a < b" << std::endl;
    } else if (x > y) {
        std::cout << "a > b" << std::endl;    
    }
    return 0;
}