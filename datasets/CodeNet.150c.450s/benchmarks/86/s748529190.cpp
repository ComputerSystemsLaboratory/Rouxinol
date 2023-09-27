#include <bits/stdc++.h>

int main() {
    for(;;) {
        int n, m, p;
        std::cin >> n >> m >> p;
        if (n == 0 && m == 0 && p == 0) {
            break;
        }
        std::vector<int> xs(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> xs[i];
        }
        int sum = 0;
        for(int x : xs) {
            sum += x;
        }
        if (xs[m-1] == 0) {
            printf("0\n");
        }
        else {
            int res = sum * (100 - p) / xs[m-1];
            printf("%d\n", res);
        }
    }
}

