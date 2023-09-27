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
    for(auto it=a.begin(); it!=a.end(); ++it){
        std::rotate(std::upper_bound(a.begin(), it, *it), it, it+1);
        for(int j=0; j<n; ++j){
            std::cout << a[j] << ((j!=n-1)?" ":"\n");
        }
    }
    return 0;
}