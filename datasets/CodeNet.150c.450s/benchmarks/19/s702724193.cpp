#include <iostream>
#include <utility>

int main() {
    int a , b ;
    for( int i = 0 ; i <= 3000 ; i++ ) {
        std::cin >> a >> b ;
        if( a == 0 && b == 0 ) {
            break ;
        } else if( a > b ) {
            std::swap( a , b ) ;
        }
        std::cout << a << " " << b << std::endl ;
        
    }
    
}
