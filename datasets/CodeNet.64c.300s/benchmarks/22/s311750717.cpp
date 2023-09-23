#include <cmath>
#include <iostream>

int main() {
    
    int N;

    std::cin >> N;
    
    while (N--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        
        int a2 = a * a;
        int b2 = b * b;
        int c2 = c * c;
        
        if (a2 == b2 + c2 || b2 == c2 + a2 || c2 == a2 + b2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;   
}