#include <iostream>
#include <string>

int main() {
    int a , b ;
    std::cin >> a >> b ;
    
    std::string s ;
    if( a > b ) {
        s = ">" ;
    } else if( a == b ) {
        s = "==" ;
    } else {
        s = "<" ;
    }
    
    std::cout << "a " << s << " b" << std::endl ;
}
