#include <iostream>
             
int main() { 
    int n = 0;
    std::cin >> n;
             
    for(int i = 3; i <= n; i++) {
        if((i % 3) == 0) {
            std::cout << " " << i;
            continue;
        }    
        else if(i > 10) {
            int x = i;
            while(x > 0) {
                if((x % 10) == 3) {
                    std::cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }    
    }        
    std::cout << std::endl;
             
    return 0;
}