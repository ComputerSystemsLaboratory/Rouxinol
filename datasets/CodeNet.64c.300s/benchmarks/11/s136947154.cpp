#include<iostream>
#include<cstdlib>

int main() {
    int i ;
    std::cin >> i ;
    
    div_t d = std::div( i , 3600 ) ;
    
    int h = d.quot ;
    d = std::div( d.rem , 60 ) ;
    int m =d.quot ;
    int s =d.rem ;
    
    std::cout << h << ":" << m << ":" << s << std::endl ;
}
