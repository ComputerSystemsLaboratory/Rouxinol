#include <iostream>

int main() {
    int n ;
    int a[ 100 ] ;
    
    std::cin >> n ;
    
    for( int i = 0 ; i < n ; i++ ) {
        std::cin >> a[ i ] ;
    }
    
    for( int ii = n - 1 ; ii >= 0 ; ii-- ) {
        std::cout << a[ ii ] ;
        if( ii != 0 ) std::cout << " " ;
    }
    std::cout << std::endl ;
}
