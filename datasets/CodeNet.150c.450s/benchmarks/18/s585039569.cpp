#include <iostream>
#include <cmath>

int main(void) {
    int64_t remain = 100000;
    
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        remain *= 1.05;
        if(remain % 1000 > 0)
            remain = (remain - remain % 1000) + 1000;
    }
    
    std::cout << remain << std::endl;
}
