#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
int n = 0;
std::vector<int> a;
int main(void){

    while(std::cin >> n, n != 0){
        a.resize(n);
        for(int i=0; i<n; ++i){
            std::cin >> a[i];
        }

        std::sort(a.begin(), a.end());

        int res = INT_MAX;
        for(int i=0; i<n-1; ++i){
            res = std::min(res, a[i+1]-a[i]);
        }
        std::cout << res << std::endl;
    }
}