#include <iostream>
using namespace std;

int main(void){
    int a;
    int b;
    int c;
    
    std::cin >> a >> b >> c;
    
    if(a < b && b < c) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
}