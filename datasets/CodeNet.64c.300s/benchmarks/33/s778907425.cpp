#include <iostream>
#include <cstdio>
            
int main() {
    int a, b = 0;
    char op;
    bool end = false;
            
    while(!end) {
        std::cin >> a >> op >> b;
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
            case '?':
                end = true;
                break;
        }   
    }       
    return 0;
}