#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    if (a<b) {
        if (b<c) {
            std::cout << "Yes" << std::endl;
        }
        else{
            std::cout << "No" << std::endl;
        }
    }
    else{
        std::cout << "No" << std::endl;
    }
}