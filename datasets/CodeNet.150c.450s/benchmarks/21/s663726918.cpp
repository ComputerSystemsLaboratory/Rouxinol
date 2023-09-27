
#include <iostream>

int cubic(int x){
    return x*x*x;
}

int main(int argc, const char * argv[]) {
    int x;
    std::cin >> x;
    std::cout << cubic(x) << std::endl;
    return 0;
}