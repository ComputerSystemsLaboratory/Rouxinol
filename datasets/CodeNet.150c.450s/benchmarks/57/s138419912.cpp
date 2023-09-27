#include <iostream>
using namespace std;

int main(void){

    int a, b;
    char op;
    
    while(std::cin >> a >> op >> b, op != '?') {
        switch(op) {
            case '+':
                std::cout << a + b << std::endl;
                break;
            case '-':
                std::cout << a - b << std::endl;
                break;
            case '*':
                std::cout << a * b << std::endl;
                break;
            case '/':
                std::cout << a / b << std::endl;
                break;
        }
    }
    
    return 0;
    
}