#include <iostream>
#include <cstdlib>
#include <cmath>

bool prime(int a); 

int main(void) {
    int n;
    std::cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (prime(a) == true) {
            result++;
        }
    }
    std::cout << result << std::endl;
    return EXIT_SUCCESS;
}

bool prime(int a) {
    int root = (int)(sqrt(a)); 
    if (a == 2) {
        return true;
    } else {
        for (int i = 2; i <= root; i++) {
            if (a % i == 0) {
                return false;
            }
        }
        return true;
    }
}