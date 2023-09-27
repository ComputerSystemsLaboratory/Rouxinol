#include <iostream>
              
int main() {  
    int x = 0;
    int cnt = 0;
    while(true) {
        std::cin >> x;
        if(x == 0) break;
              
        std::cout << "Case " << ++cnt << ": " << x << std::endl;
    }         
    return 0; 
}