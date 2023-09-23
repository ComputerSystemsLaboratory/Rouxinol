#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(true){
        int a, b;
        char op;
        std::cin >> a >> op >> b;
        int ans;
        switch(op){
            case '+': ans = a+b; break;
            case '-': ans = a-b; break;
            case '*': ans = a*b; break;
            case '/': ans = a/b; break;
            default : return 0;
        }
        std::cout << ans << "\n";
    }
}