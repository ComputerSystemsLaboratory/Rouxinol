#include <cstdio>
#include <iostream>


int main() {
    
    int S;
    std::cin >> S;
    
    int h = S / (60 * 60);
    int m = (S / 60) % 60;
    int s = S % 60;
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}