#include<iostream>
int main(){
    int W, H, x, y, r;
    std::cin >> W >> H >> x >> y >> r;
    if (r>x||x+r>W||r>y||y+r>H){
        std::cout << "No" << std::endl;
    }
    else {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}