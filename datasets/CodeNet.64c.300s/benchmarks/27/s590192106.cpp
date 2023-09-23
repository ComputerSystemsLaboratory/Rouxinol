#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(true){
        int n, x;
        std::cin >> n >> x;
        if(n==0 && x==0) break;
        int cnt = 0;
        for(int i=1; i<=n; ++i){
            for(int j=i+1; j<=n; ++j){
                for(int k=j+1; k<=n; ++k){
                    if(i+j+k==x) ++cnt;
                }
            }
        }
        std::cout << cnt << "\n";
    }
    return 0;
}