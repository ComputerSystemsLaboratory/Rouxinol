#include <iostream>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(true){
        int x, y;
        std::cin >> x >> y;
        if(x==0 && y==0) break;
        std::cout << std::min(x, y) << " " << std::max(x, y) << "\n";
    }
    return 0;
}