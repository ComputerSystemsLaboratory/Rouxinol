#include <iostream>
    
int main() {
    int x = 0;
    std::cin >> x;
    int h = x / 3600;
    int m = (x - h * 3600) / 60;
    int s = (x - h * 3600 - m * 60);
    
    std::cout << h << ":" << m << ":" << s << std::endl;
    return 0;
}