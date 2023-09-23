#include <iostream>
                 
int main() {     
    int x, y, z, cnt = 0;
                 
    std::cin >> x >> y >> z;
                 
    for(int i = x; i <= y; i++) {
        if((z % i) == 0) cnt++;
    }            
    std::cout << cnt << std::endl;
    return 0;    
}