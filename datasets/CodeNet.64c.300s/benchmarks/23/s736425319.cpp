#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int a, b;
    std::cin >> a >> b;
    std::cout << a*b << " " << (a+b)*2 << "\n";
    return 0;
}