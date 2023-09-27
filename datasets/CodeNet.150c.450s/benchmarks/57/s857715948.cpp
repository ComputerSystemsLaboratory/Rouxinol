#include <iostream>

int main() {
    int a , b , result ;
    char op ;
    while( true ) {
        std::cin >> a >> op >> b ;
        if( op == '?' ) {
            break ;
        } else {
            switch( op ) {
                case '+' :
                    result = a + b ;
                    break ;
                case '-' :
                    result = a - b ;
                    break ;
                case '*' :
                    result = a * b ;
                    break ;
                case '/' :
                    result = a / b ;
                    break ;
            }
        }
        std::cout << result << std::endl ;
    }
}
