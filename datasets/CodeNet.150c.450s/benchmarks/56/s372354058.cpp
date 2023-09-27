#include <cstdio>
#include <iostream>


int main() {
    
    int n;
    std::cin >> n;
    
    int min = 1000000;
    int max = -1000000;
    long sum = 0;
    
    while (n--) {
        int a;
        std::cin >> a;
        
        if (a < min) {
            min = a;
        }
        
        if (a > max) {
            max = a;   
        }
        
        sum += a;
    }
    
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}