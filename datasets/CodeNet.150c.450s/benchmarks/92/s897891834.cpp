#include <iostream>
#include <cmath>
 
int main(void) {
    u_int a, b;
 
    while (std::cin >> a >> b) {
        std::cout << (int) log10 (a + b) + 1 << std::endl;	//a+b = 0?????¨????????¨??????
    }
 
    return 0;
}