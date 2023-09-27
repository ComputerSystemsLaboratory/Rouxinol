#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << ((a<b && b<c)?"Yes":"No") << "\n";
    return 0;
}