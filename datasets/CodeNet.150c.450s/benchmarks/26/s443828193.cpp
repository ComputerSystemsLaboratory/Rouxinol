#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if(a < b)
        std::cout << "a < b";
    else if(a > b)
        std::cout << "a > b";
    else
        std::cout << "a == b";
    std::cout << std::endl;
}