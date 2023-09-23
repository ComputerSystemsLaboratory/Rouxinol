#include <iostream>

int F[45] = {1, 1};

int fib_recurse(int n) {
    if (n < 2) {
        return 1;
    }
    return fib_recurse(n - 1) + fib_recurse(n - 2);
}

int fib_memo(int n) {
    if (n < 2) {
        return F[n] = 1;
    }
    if (F[n]) return F[n];
    return F[n] = fib_memo(n - 1) + fib_memo(n - 2);
}

int fib_dp(int n) {
    if(n < 2) {
        return F[n];
    }
    for (int i = 2; i <= n; i++) {
        F[n] = F[i - 1] + F[i - 2];
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fib_memo(n) << std::endl;
    return 0;
}
