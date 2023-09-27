
#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    std::cin >> a >> b;
    if (a>b) {
        std::cout << "a > b" << std::endl;
    }
    else if (a<b){
        std::cout << "a < b" << std::endl;
    }
    else{
        std::cout << "a == b" << std::endl;
    }
}