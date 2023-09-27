#include <iostream>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int a, b;
    while(std::cin >> a >> b){
        int cnt = 0;
        int r = a+b;
        while(r){
            r/=10;
            ++cnt;
        }
        std::cout << cnt << "\n";
    }
    return 0;
}