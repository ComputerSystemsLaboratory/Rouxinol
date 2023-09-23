#include <iostream>
#include <cstdlib>

inline int f(int x) {
    return x*x;
}

int get_input(void) {
    int d;
    std::cin >> d;
    if (std::cin.fail()) {
        exit(0);
    }
    return d;
}

long long unsigned int solve(int d){
    long long unsigned int acc = 0;
    for (int i = d; i <= 600-d; i+=d) {
        acc += f(i) * d;
    }
    return acc;
}

int main(void) {
    while(true) {
        std::cout << solve(get_input()) << std::endl;
    }
    return 0;
}
    