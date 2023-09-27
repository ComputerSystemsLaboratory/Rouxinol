#include <iostream>
#include <cstdlib>

void get_input(int& n, int& sum) {
    int a, b;
    std::cin >> a >> b;
    if (a == 0 && b == 0) {
        exit(0);
    } 
    n = a;
    sum = b;
    return;
}

int solve(int n, int sum, int max) {
   if (n == 1) {
        if (sum <= max) {
//            std::cout << "return: " << 1 << std::endl;
            return 1;
        } else {
//            std::cout << "return: " << 0 << std::endl;
            return 0;
        }
    } 

    if (sum <= max) {
        max = sum;
    }
/*    std::cout << "n: " << n << ' '
              << "sum: " << sum << ' ' 
              << "max: " << max << std::endl; */
 
    int result = 0;
    for (int i = 0; i < max; i++) {
        result += solve(n-1, sum - (max - i), max - (i + 1));
    }
//    std::cout << "return: " << result << std::endl;
    return result;
}


int main(void) {
    int n, sum;
    while (true) {
        get_input(n, sum);
        std::cout << solve(n, sum, 9) << std::endl;
    }
    return 0;
}