#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

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

    int a, b;
    while(std::cin >> a >> b){
        std::cout << GCD(a, b) << " " << LCM(a, b) << "\n";
    }
    
    return 0;
}