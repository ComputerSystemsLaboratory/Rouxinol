#include <cmath>
#include <iostream>

int main() {
    
    int a, b;
    
    while (std::cin >> a >> b) {
        int digit = std::log10(a + b) + 1;
        std::cout << digit << std::endl;
    }

    return 0;   
}