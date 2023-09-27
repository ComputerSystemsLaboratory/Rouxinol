#include <iostream>

int main(){
    int x,y;
    while(true){
        std::cin >> x >> y;
        if(x == 0 && y == 0) break;
        if(x<=y) std::cout << x << " " << y << std::endl;
        else std::cout << y << " " << x << std::endl;
    }
    return 0;
}
