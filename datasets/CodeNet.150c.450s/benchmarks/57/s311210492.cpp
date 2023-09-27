#include <iostream>
int main(){
    int a,b;
    char op;
    while(true){
        std::cin >> a >> op >> b;
        if(op == '?') break;
        if(op == '+') {
            std::cout << a+b << std::endl;
            continue;
        }
        if(op == '-'){
            std::cout << a-b << std::endl;
            continue;
        }
        if(op == '*'){
            std::cout << a*b << std::endl;
            continue;
        }
        if(op == '/'){
            std::cout << a/b << std::endl;
            continue;
        }
    }
    return 0;
}
