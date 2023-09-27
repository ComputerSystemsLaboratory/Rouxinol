#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int i = 1;
    while(true){
        int x;
        std::cin >> x;
        if(x==0) break;
        std::cout << "Case " << i++ << ": " << x << "\n";
    }
    return 0;
}