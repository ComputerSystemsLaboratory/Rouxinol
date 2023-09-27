#include <iostream>

int main(){
    unsigned long long f = 1;
    int n;
    std::cin >> n;
    for(int i=1;i<=n;++i){
        f *= i;
    }
    std::cout << f << std::endl;
    return 0;
}