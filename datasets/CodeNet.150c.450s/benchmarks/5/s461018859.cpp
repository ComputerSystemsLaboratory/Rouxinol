#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(auto& i : a){
        std::cin >> i;
    }
    for(int i=n-1; i>=0; --i){
        std::cout << a[i] << ((i!=0)?" ":"\n");
    }
    return 0;
}