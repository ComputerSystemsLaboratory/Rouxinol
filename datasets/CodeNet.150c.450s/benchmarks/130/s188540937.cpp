#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> a(n, std::vector<int>(m));
    for(auto& r : a){
        for(auto& i : r){
            std::cin >> i;
        }
    }
    std::vector<int> b(m);
    for(auto& i : b){
        std::cin >> i;
    }
    for(int i=0; i<n; ++i){
        int c = 0;
        for(int j=0; j<m; ++j){
            c += a[i][j]*b[j];
        }
        std::cout << c << "\n";
    }
    return 0;
}