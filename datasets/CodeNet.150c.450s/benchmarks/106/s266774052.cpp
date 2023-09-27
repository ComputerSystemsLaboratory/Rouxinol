#include <iostream>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int a, b, c;
    std::cin >> a >> b >> c;
    int cnt = 0;
    for(int i=a; i<=b; ++i){
        if(c%i==0) ++cnt;
    }
    std::cout << cnt << "\n";
    return 0;
}