#include <iostream>

int main(){
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    int rectSize = a * b;
    int rectLength = (a + b) * 2;

    std::cout << rectSize << ' ' << rectLength << std::endl;
}