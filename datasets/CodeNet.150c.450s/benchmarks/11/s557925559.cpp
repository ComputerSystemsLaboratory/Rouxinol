#include <iostream>
#include <set>

#define NUM { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 }

int main() {
    int n ;
    std::cin >> n ;
    
    std::set< int > s( NUM ) , h( NUM ) , c( NUM ) , d( NUM ) ;
    
    for( int i = 0 ; i < n ; i++ ) {
        char mark ;
        int num ;
        std::cin >> mark >> num ;
        
        switch( mark ) {
            case 'S' :
                s.erase( num ) ;
                break ;
            case 'H' :
                h.erase( num ) ;
                break ;
            case 'C' :
                c.erase( num ) ;
                break ;
            case 'D' :
                d.erase( num ) ;
                break ;
        }
    }
    for( auto &a : s ) {
        std::cout << "S " << a << std::endl ;
    }
    for( auto &a : h ) {
        std::cout << "H " << a << std::endl ;
    }
    for( auto &a : c ) {
        std::cout << "C " << a << std::endl ;
    }
    for( auto &a : d ) {
        std::cout << "D " << a << std::endl ;
    }
}
