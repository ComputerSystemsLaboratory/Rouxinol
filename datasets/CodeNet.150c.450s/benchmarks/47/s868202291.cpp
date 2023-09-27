#include<iostream>
int main(){
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;
    if(w < x + r){
        std::cout << "No" << std::endl;
    }
    else if(0 > x - r){
        std::cout << "No" << std::endl;
    }
    else if(h < y + r){
        std::cout << "No" << std::endl;
    }
    else if(0 > y - r){
        std::cout << "No" << std::endl;
    }
    else{
        std::cout << "Yes" << std::endl;
    }
    return 0;
}