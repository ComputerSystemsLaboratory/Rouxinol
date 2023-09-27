#include <iostream>

int main() {
    int n , m ;
    std::cin >> n >> m ;
    
    int a[ n ] [ m ] ;
    int b[ m ] ;
    for( int i = 0 ; i < n ; i++ ) {
        for( int ii = 0 ; ii < m ; ii++ ) {
            std::cin >> a[ i ] [ ii ] ;
        }
    }
    for( int i = 0 ; i < m ; i++ ) {
        std::cin >> b[ i ] ;
    }
    
    for( int i = 0 ; i < n ; i++ ) {
        int c = 0 ;
        for( int ii = 0 ; ii < m ; ii++ ) {
            c += a[ i ] [ ii ] * b[ ii ] ;
        }
        std::cout << c << std::endl ;
    }
}

