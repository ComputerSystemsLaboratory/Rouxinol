#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    int taro = 0, hanako = 0;
    for(int i=0; i<n; ++i){
        std::string l, r;
        std::cin >> l >> r;
        if(l>r) taro += 3;
        else if(l<r) hanako += 3;
        else ++taro, ++hanako;
    }
    std::cout << taro << " " << hanako << "\n";
    return 0;
}