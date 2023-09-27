#include <iostream>

int main(){
    int n;

    std::cin >> n;
    std::cout << n / 3600 << ':' << (n % 3600) / 60 << ':' << (n % 60) << std::endl;

    return 0;
}