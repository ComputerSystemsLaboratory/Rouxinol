#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <string>

int GCD(int a, int b){
    if(!b) return a;
    return GCD(b, a%b);
}
int LCM(int a, int b){
    return a/GCD(a, b)*b;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string str;
    std::cin >> str;
    for(auto rit=str.rbegin(); rit!=str.rend(); ++rit){
        std::cout << *rit;
    }
    std::cout << "\n";
    return 0;
}