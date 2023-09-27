/* ITP1_7_B: How many ways? */

#include <iostream>

int solve(int n, int x) {
    int n_combis = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            for (int c = b + 1; c <= n; c++) {
                if (a + b + c == x) {
                    n_combis++;
                }
            }
        }
    }
    return n_combis;
}


int main() {
    int n, x;
    while (true) {
        std::cin >> n >> x;
        if (n == 0 && x == 0) {
            break;
        }
        std::cout << solve(n, x) << std::endl;

    }
    return 0;
}