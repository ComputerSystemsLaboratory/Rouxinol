#include<iostream>
#include<algorithm>

#define MAX_N 5000

int main(){
    int n, ans = 0, in, before;
    while(std::cin >> n, n){
        std::cin >> before;
        ans = before;
        for(int i = 1; i < n; ++i){
            std::cin >> in;
            before = std::max(in, before + in);
            ans = std::max(before, ans);
        }
        std::cout << ans << std::endl;
        ans = 0, before = 0;
    }
    return 0;
}