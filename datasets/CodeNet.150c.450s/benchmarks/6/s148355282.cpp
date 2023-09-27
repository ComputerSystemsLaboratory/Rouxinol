#include <iostream>

int main(void)
{
    int x, y, z;
    std::cin >> x;
    std::cin >> y;    
    std::cin >> z;
    if (x < y && y < z) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}