#include <iostream>

int main(){
    int T,h,m,s;
    std::cin >> T;
    s = T % 60;
    T /= 60;
    m = T % 60;
    h = T / 60;
    std::cout << h << ":" << m << ":" << s << std::endl;
    return 0;
}
