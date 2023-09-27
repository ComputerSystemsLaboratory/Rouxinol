#include <iostream>
using namespace std;

int main(void){

    int a;
    int b;
    int c;
    int divisor;
    
    std::cin >> a >> b >> c;
    
    for(int i = a; i <= b; i++) {
        if(c % i == 0) {
            divisor++;
        }
    }
    
    std::cout << divisor << std::endl;
    
    return 0;
}