#include <iostream>

int main() {
    for( int i = 1 ; i <= 10000 ; i++ ) {
        int x ;
        std::cin >> x ;
        if( x != 0 ) {
            std::cout << "Case " << i << ": " << x << std::endl ;
        } else {
            break ;
        }
    }
}
