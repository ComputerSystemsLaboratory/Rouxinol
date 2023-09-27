#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    for(int i=0; i<n; ++i){
        std::vector<int> e(3);
        for(auto& j : e){
            std::cin >> j;
        }
        std::sort(e.begin(), e.end());
        std::cout << ((e[0]*e[0]+e[1]*e[1]==e[2]*e[2])?"YES":"NO") << "\n";
    }
    return 0;
}