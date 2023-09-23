#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

void comb(int cur, int depth, int total, int *result, int N, int X) {
    if (depth == 3) {
        if (total == X) { ++(*result); }
    }
    else {
        for (int i = cur; i <= N; ++i) {
            comb(i + 1, depth + 1, total + i, result, N, X);
        }
    }
}

int main(void) {

    while (true) {
        int N, X;
        cin >> N >> X;

        if (N == 0 && X == 0) { break; }

        int result = 0;
        comb(1, 0, 0, &result, N, X);

        printf("%d\n", result);
    }

    return 0;
}