#include<iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    std::cout << n << ":";
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0){
            std::cout << " " <<  i;
            n /= i;
        }
        if(i != 2)
            i++;
        if(n == 1)
            break;
    }
    if(n != 1) {
        std::cout << " " << n;
    }
    std::cout << std::endl;
}
