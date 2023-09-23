#include <bits/stdc++.h>

int main() {

    int N, sum, idx;
    int b[] = {500, 100, 50, 10, 5, 1};
    for (; ;) {
        std::scanf("%d", &N);
        if (N == 0) break;
        N = 1000 - N;
        sum = idx = 0;
        while (N > 0) {
            sum += int(N/b[idx]);
            N %= b[idx];
            idx++;
        }
        std::printf("%d\n", sum);
    }
    return  0;
}

