#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
 
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    ll min = 10000000, max = -10000000, sum = 0;
    for(auto& i : a){
        std::cin >> i;
        sum += i;
        min = std::min(min, i);
        max = std::max(max, i);
    }
    std::cout << min << " " << max << " " << sum << "\n";
    return 0;
}