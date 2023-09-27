#include <iostream>
#include <algorithm>
#include <vector>

#define int long long

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    int n, m, l;
    std::cin >> n >> m >> l;
    std::vector<std::vector<int>> a(n, std::vector<int>(m));
    for(auto& r : a){
        for(auto& i : r){
            std::cin >> i;
        }
    }
    std::vector<std::vector<int>> b(m, std::vector<int>(l));
    for(auto& r : b){
        for(auto& i : r){
            std::cin >> i;
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<l; ++j){
            int c = 0;
            for(int k=0; k<m; ++k){
                c += a[i][k]*b[k][j];
            }
            std::cout << c << ((j!=l-1)?" ":"\n");
        }
    }
    return 0;
}