#include <iostream>     
                        
int main() {            
    int x, y, z = 0;    
    std::cin >> x >> y >> z;
                        
    if(x < y && y < z) {
        std::cout << "Yes" << std::endl;
    }                   
    else {              
        std::cout << "No" << std::endl;
    }                   
                        
    return 0;           
}