#include <iostream>

int max(int a, int b) {
    if (a > b) 
        return a;
    else
        return b;
}

int main() {
    int a_inf, a_math, a_science, a_english;
    int b_inf, b_math, b_science, b_english;
    std::cin >> a_inf >> a_math >> a_science >> a_english;
    std::cin >> b_inf >> b_math >> b_science >> b_english;
    int S, T;
    S = a_inf + a_math + a_science + a_english;
    T = b_inf + b_math + b_science + b_english;
    std::cout << max(S, T) << std::endl;
    return 0;
}
    