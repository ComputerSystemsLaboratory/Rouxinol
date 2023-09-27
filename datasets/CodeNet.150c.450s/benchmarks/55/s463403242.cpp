#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(true){
        std::string x;
        std::cin >> x;
        if(x=="0") break;
        int ans = 0;
        for(const auto& c : x){
            ans += c-'0';
        }
        std::cout << ans << "\n";
    }
    return 0;
}