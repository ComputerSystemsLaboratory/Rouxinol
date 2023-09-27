#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    for(int i=1; i<=n; ++i){
        bool flag = false;
        if(i%3==0) flag = true;
        int x = i;
        while(x){
            if(x%10==3){
                flag = true;
                break;
            }
            x/=10;
        }
        if(flag){
            std::cout << " " << i;
        }
    }
    std::cout << "\n";
    return 0;
}